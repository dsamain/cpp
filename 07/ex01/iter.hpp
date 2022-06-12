#pragma once

#include <iostream>
#include <string.h>

template<typename T>
void iter(T *arr, int n, void(*fun)(T &)){
	for (int i = 0; i < n; i++) {
		fun(arr[i]);
	}
}

template<typename T>
void print(T n) {
	std::cout << n << " ";
}