#pragma once

#include <iostream>
#include <string.h>

template<typename T>
class Array {
public:
	Array() {
		_size = 0;
	}

	Array(const unsigned int n) {
		_arr = new T*[n];
		_size = n;
		for (int i = 0; i < n; i++)
			_arr[i] = new T;
	}

	Array(const Array &cpy) {
		_size = cpy._size;
		_arr = new T*[_size];
		for (int i = 0; i < _size; i++)
			_arr[i] = new T;
	}

	Array &operator=(const Array &cpy) {
		for (int i = 0; i < _size; i++)
			delete _arr[i];
		delete _arr;
		_size = cpy._size;
		_arr = new T*[_size];
		for (int i = 0; i < _size; i++)
			_arr[i] = new T;
		return *this;
	}

	~Array() {
		for (int i = 0; i < _size; i++)
			delete _arr[i];
		delete _arr;
	}

	T &operator[](int i) throw(std::exception) {
		if (i < 0 || i >= _size)
			throw std::exception();
		return *_arr[i];
	}

	const int size() {
		return (_size);
	}

private:
	T **_arr;
	int _size;
};

template<typename T>
void printArray(Array<T> &arr) {
	for (int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << " "[i == arr.size()-1];
	std::cout << std::endl;
}