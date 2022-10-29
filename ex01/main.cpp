#include "iter.hpp"
#include <iostream>
#include "colors.hpp"

// class Awesome {
// 	public:
// 		Awesome(void) : _n(42) {
// 			return;
// 		}
// 		int get(void) const {
// 			return this->_n;
// 		}
// 	private:
// 		int _n;
// };

// std::ostream & operator<<(std::ostream& o, const Awesome& rhs) {
// 	o << rhs.get();
// 	return o;
// }



// template <typename T>
// void print(const T& x) {
// 	std::cout << x << " ";
// 	return;
// }


int main () {
	//--------------------ARRAY OF INTEGERS--------------------//
	int i_arr[5] = {10, 40, 20, 30, 50};
	//--------------------ARRAY OF STRINGS--------------------//
	std::string str_arr[5] = {"Seal", "walks", "into", "the", "club"};
	//--------------------LENGTH--------------------//
	int length = 5;

	std::cout << COLOR_BOLD_YELLOW << "//--------------------iter() applies ptr to function on every element of the INTEGER array--------------------//" << END <<std::endl;
	iter (i_arr, length, &print1);

	std::cout << COLOR_BOLD_YELLOW << "//--------------------iter() applies ptr to function on every element of the STRING array--------------------//" << END << std::endl;
	iter (str_arr, length, &print2);

	std::cout << COLOR_BOLD_YELLOW << "//--------------------iter() printing passed argument with for loop--------------------//" << END << std::endl;
	iter(str_arr, length, &print3);

	for (int i = 0; i < length; i++) {
		std::cout << COLOR_BOLD_GREEN << str_arr[i] << END << std::endl;
	}

	// int length = 5;
	// std::cout << std::endl << COLOR_YELLOW << "<<<< Testing with the Awesome class from the eval sheet >>>>" << END << std::endl;
	// int tab[] = {0, 1, 2, 3, 4};
	// Awesome tab2[5];
	// std::cout << COLOR_GREEN << "Number array from eval sheet: " << END << std::endl;
	// iter(tab, length, print);
	// std::cout << std::endl;
	// std::cout << COLOR_GREEN << "Awesome class array: " << END << std::endl;
	// iter(tab2, length, print);
	// std::cout << std::endl << std::endl;
	
}