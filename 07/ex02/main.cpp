#include "Array.hpp"

int main() {
	Array<int> arr;
	std::cout << "arr : "; printArray(arr);

	arr = Array<int>(10);
	std::cout << "arr : "; printArray(arr);

	Array<float> arr1(10);
	std::cout << "arr1 : "; printArray(arr1);
	arr1[0] = 42.42;

	Array<float> arr2(arr1);
	std::cout << "arr2 (cpy of arr1) : "; printArray(arr1);
	std::cout << "&arr1[0] &arr2[0] : " << &arr1[0] << " " << &arr2[0] << std::endl;
	

	try {
		std::cout << "arr1[0] : " << arr1[0] << std::endl;
	} catch(std::exception & e) {
		std::cout << "Out of bounds\n";
	}

	try {
		std::cout << arr[-1];;
	} catch(std::exception & e) {
		std::cout << "Out of bounds\n";
	}

	try {
		std::cout << arr1[10];;
	} catch(std::exception & e) {
		std::cout << "Out of bounds\n";
	}
}