#include <iostream>
#include <fstream>

int main(int ac, char **av) {
	if (ac != 4) return 0;

	std::string t, file(av[1]), s1(av[2]), s2(av[3]);
	std::ifstream f_in(file);
	std::ofstream f_out(file + ".replace");
	bool f=0;

	if (!f_in || !f_out) {
		std::cerr << "Invalid file" << std::endl;
		return (0);
	} 


	while (f_in && f_out) {
		t.clear();
		getline(f_in, t);
		if (f) f_out << std::endl;
		for (int i = 0; i < (int)t.size();) {
			if (s1 != "" && t.substr(i, s1.size()) == s1) {
				f_out << s2;
				i += s1.size();
			} else {
				f_out << t[i];
				i++;
			}
		}
		f = 1;
	}
}