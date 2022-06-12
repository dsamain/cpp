#include "iter.hpp"

int main() {
	int arr[5] = {1,2,3,4,5};
	iter(arr, 5, print);

	std::cout << std::endl;

	std::string s_arr[4] = {"ah","test","bonjour","..."};
	iter(s_arr, 4, print);

	std::cout << std::endl;

	float f_arr[5] = {1,2,3,4,5};
	iter(f_arr, 5, print);
 
	std::cout << std::endl;
}