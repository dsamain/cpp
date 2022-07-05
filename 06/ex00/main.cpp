#include "convert.hpp"

class Convert {
public:
	Convert() {}

	Convert(const Convert &cpy) {
		_val = cpy._val;
	}

	virtual ~Convert() {}

	Convert operator=(const Convert &cpy) {
		_val = cpy._val;	
		return *this;
	}

	void set_val(std::string s) {
		if (s.size() == 3 && s[0] == '\'' && s[2] == '\'')
			_val = static_cast<double>(s[1]);
		else
			try {
				_val = stod(s);
			}
			catch (std::out_of_range &e) {
				_val = INF;
			}
	}

	void put_to_char() {
		if (_val < 0 || _val >= 256 || ISNAN(_val) || _val == INF)
			std::cout << "impossible";
		else if (_val < 32 || _val >= 127)
			std::cout << "Non displayable";
		else
			std::cout << "'" << static_cast<unsigned char>(_val) << "'";
	}

	void put_to_int() {
		if (ISNAN(_val) || _val == INF || _val > MAX_INT || _val < MIN_INT)
			std::cout << "impossible";
		else
			std::cout << static_cast<int>(_val);
	}

	void put_to_float() {
		std::cout.precision(1);
		std::cout << std::fixed << static_cast<float>(_val) << "f";
	}

	void put_to_double() {
		std::cout.precision(1);
		std::cout << std::fixed << _val;

	}

private:
	double _val;
};

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Wrong number of arguments\n";
		return (1);
	}

	Convert convert;
	try {
		convert.set_val(static_cast<std::string>(av[1]));
	}
	catch (std::invalid_argument &e) {
		std::cout << "Non convertible value\n";
		return (1);
	}

	std::cout << "char: "; convert.put_to_char(); std::cout << std::endl;
	std::cout << "int: "; convert.put_to_int(); std::cout << std::endl;
	std::cout << "float: "; convert.put_to_float(); std::cout << std::endl;
	std::cout << "double: "; convert.put_to_double(); std::cout << std::endl;
}