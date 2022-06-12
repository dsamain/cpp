#include <iostream>
#include <string.h>

using namespace std;

void dump_32(unsigned int *p) {
	if (!p) cout << "NULL";
	else
		for (int i = 31; i >= 0; i--)
			cout << ((*p >> i) & 1);
	cout << endl;
}

int main() {
	//float f = 42.42f;
	//int *a = dynamic_cast<int *>(&f);
	//unsigned int b = static_cast<unsigned int>(f);
	//dump_32(a);
	//dump_32(&b);
	//cout << f << endl;
	const int a=0;
	int b = a;
	cout << b << endl;
}
