#include "iter.hpp"
#include "colors.hpp"


int main () {
	//--------------------ARRAY OF INTEGERS--------------------//
	int i_arr[5] = {10, 40, 20, 30, 50};
	//--------------------ARRAY OF STRINGS--------------------//
	std::string str_arr[5] = {"Seal", "walks", "into", "the", "club"};
	//--------------------LENGTH--------------------//
	int length = 5;

	std::cout << COLOR_BOLD_YELLOW << "//--------------------iter() applies ptr to function on every element of the INTEGER array--------------------//" << END <<std::endl;
	iter (i_arr, length, print1);

	std::cout << COLOR_BOLD_YELLOW << "//--------------------iter() applies ptr to function on every element of the STRING array--------------------//" << END << std::endl;
	iter (str_arr, length, print2);

	std::cout << COLOR_BOLD_YELLOW << "//--------------------iter() printing passed argument with for loop--------------------//" << END << std::endl;
	iter(str_arr, length, print3);

	for (int i = 0; i < length; i++) {
		std::cout << COLOR_BOLD_GREEN << str_arr[i] << END << std::endl;
	}

	
}