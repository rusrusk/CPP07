#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include "colors.hpp"

//--------------------ITER()--------------------//

//T &array  		 :  address of an array
//int array_length   :  length of an array
//void (*func)(T &)  :  func is a pointer to a function taking a reference to a type T as an argument

template <typename T>
void iter(T *array, int array_length, void (*func)(T &)) { 
	for (int i = 0; i < array_length; i++) {

		(*func)(array[i]);
	}
}

// --------------------ITER() CONST--------------------//
// template <typename T>
// void iter (T *array, int array_length, void (*func)( const T&)) {
// 	int i = 0;
// 	while(i < array_length) {
// 		(*func)(array[i++]);
// 	}
// }

//--------------------PRINT--------------------//
template <typename T>
void print1( T &display) {
	std::cout << COLOR_BOLD_GREEN << display << END << std::endl;
}

template <typename T>
void print2( T &display) {
	std::cout << COLOR_BOLD_GREEN << display << END << std::endl;
}



void print3(std::string &display) {
	display = "Rocky Balboa";
}

#endif