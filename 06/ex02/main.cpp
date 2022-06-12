#include "identify.hpp"

Base::~Base() {}

Base *generate() {
	Base *out;

	switch (rand()%3) {
		case 0:
			out = new A,
			std::cout << "A";
			break;
		case 1:
			out = new B,
			std::cout << "B";
			break;
		case 2:
			out = new C,
			std::cout << "C";
			break;
	}
	std::cout << " generated\n";
	return out;
}

void identify(Base *p) {
	Base *ptr;

	ptr = dynamic_cast<A *>(p);
	if (ptr) std::cout << "A"; 
	ptr = dynamic_cast<B *>(p);
	if (ptr) std::cout << "B";
	ptr = dynamic_cast<C *>(p);
	if (ptr) std::cout << "C";
	std::cout << " pointer identified\n";
}

bool refIdA(Base &p) {
	try {
		p = dynamic_cast<A &>(p);
	} catch (std::bad_cast &e) {
		return 0;
	}
	return 1;
}

bool refIdB(Base &p) {
	try {
		p = dynamic_cast<B &>(p);
	} catch (std::bad_cast &e) {
		return 0;
	}
	return 1;
}

bool refIdC(Base &p) {
	try {
		p = dynamic_cast<C &>(p); 
	} catch (std::bad_cast &e) {
		return 0;
	}
	return 1;
}

void identify(Base &p) {
	Base *ptr;

	std::cout << "A"[!refIdA(p)];
	std::cout << "B"[!refIdB(p)];
	std::cout << "C"[!refIdC(p)];
	
	std::cout << " reference identified\n";
}

int main() {
	Base *ptr;

	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		ptr = generate();
		Base &ref = *ptr;
		identify (ptr);
		identify (ref);
		delete ptr;
		std::cout << "\n"[i == 9];
	}
}