#include "Array.hpp"

int main() {
	Array<int> arr;
	std::cout << "arr : "; printArray(arr);

	arr = Array<int>(10);
	std::cout << "arr : "; printArray(arr);

	Array<float> arr1(10);
	std::cout << "arr1 : "; printArray(arr1);

	try {
		std::cout << arr1[0] << std::endl;
	}
	catch(std::exception & e) {
		std::cout << "Out of bounds\n";
	}

	try {
		std::cout << arr[-1];;
	}
	catch(std::exception & e) {
		std::cout << "Out of bounds\n";
	}

	try {
		std::cout << arr1[10];;
	}
	catch(std::exception & e) {
		std::cout << "Out of bounds\n";
	}
}