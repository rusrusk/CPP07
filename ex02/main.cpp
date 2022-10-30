#include "Array.hpp"
#include "colors.hpp"
#include <iostream>


int main () {

	// Array<int> nb1(45);
	// Array<int> nb2(34);
	// nb2 = nb1;

	// std::cout << "Before : " << nb2.getNb() << std::endl;
	// nb2.setNb(50);
	// std::cout << "After : " << nb2.getNb() << std::endl;

	// std::cout << nb2.getNb() << std::endl;
	// std::cout << nb1.getNb() << std::endl;

	std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [CUSTOM TEST USING INT ARRAY] " << std::string(20, '*') << END
              << std::endl;
	delimiter
	std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE << "DECLARATION OF a AND b AND POPULATING a WITH NUMBERS" << END << std::endl;
	delimiter
	//-----------------Declaration-----------------//
	Array<int>a(7);
	Array<int>b;
	//-----------------Populating a-----------------//
	int i;
	for (i = 0; i < a.size(); i++) {
		a[i] = i;
	}
	//-----------------Printing array [a]-----------------//
		std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE << "PRINTING [a] ARRAY" << END << std::endl;
	for (int i = 0; i < a.size(); i++) {
		std::cout << COLOR_BOLD_GREEN << a[i] << " " << END;
	}
	std::cout << std::endl;
	delimiter
	//-----------------Printing array [a]-----------------//
	std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE << "PRINTING [b] ARRAY" << END << std::endl;
	for (int i = 0; i < b.size(); i++) {
		std::cout << COLOR_BOLD_GREEN << b[i] << " " << END;
	}
	std::cout << std::endl;
	delimiter
	//-----------------Assigning a to b-----------------//
	std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE << "ASSIGNING [a] TO [b] ARRAY" << END << std::endl;
	b = a;
	delimiter
	//-----------------Printing array [a] after invoking assignment operator-----------------//
	std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE << "PRINTING [a] ARRAY AFTER INVOKING COPY ASSIGNMENT OPERATOR" << END << std::endl;
	for (int i = 0; i < a.size(); i++) {
		std::cout << COLOR_BOLD_GREEN << a[i] << " " << END;
	}
	std::cout << std::endl;
	delimiter
		//-----------------Printing array [b] to check if elements of [b] array were copied correctly-----------------//
	std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE << "PRINTING [b] ARRAY AFTER INVOKING COPY ASSIGNMENT OPERATOR TO CHECK IF THE ELEMS WERE COPIED" << END << std::endl;
	for (int i = 0; i < b.size(); i++) {
		std::cout << COLOR_BOLD_GREEN << b[i] << " " << END;
	}
	std::cout << std::endl;
	delimiter
	//-----------------Printing array [b] after changing two elements-----------------//
	std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE << "PRINTING [b] ARRAY AFTER CHANGING 2 ELEMENTS" << END << std::endl;
	b[5] = 128;
	b[6] = 256;
	for (int i = 0; i < b.size(); i++) {
		std::cout << COLOR_BOLD_GREEN << b[i] << " " << END;
	}
	std::cout << std::endl;
	delimiter
	//-----------------Printing array [a] to check if modifying array [b] affects the array [a]-----------------//
	std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE << "PRINTING [a] TO CHECK IF MODIFYING ARRAY [b] AFFECTS ARRAY [a]" << END << std::endl;
	for (int i = 0; i < a.size(); i++) {
		std::cout << COLOR_BOLD_GREEN << a[i] << " " << END;
	}
	std::cout << std::endl;
	delimiter

	std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [CUSTOM TEST USING STRING ARRAY] " << std::string(20, '*') << END
              << std::endl;
	delimiter
	std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE << "DECLARATION OF [STR_ARR] AND POPULATING WITH <ENDEAVOUR> " << END << std::endl;
	delimiter
	//-----------------Declaration-----------------//	
	Array<std::string>arr_str(5);
	//-----------------Populating a-----------------//
	for (int i = 0; i < arr_str.size(); i++) {
		arr_str[i] = "Endeavour";
	}
	//-----------------Declaring arr_str_2(arr_str)-----------------//
	std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE << "DECLARING arr_str_2(arr_str) USING COPY CONSTRUCTOR" << END << std::endl;
	Array<std::string>arr_str_2(arr_str);
	//-----------------Printing array [arr_str]-----------------//
	std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE << "PRINTING [arr_str] ARRAY OF STRINGS" << END << std::endl;
	for (int i = 0; i < arr_str.size(); i++) {
		std::cout << COLOR_BOLD_GREEN << arr_str[i] << " " << END;
	}
	std::cout << std::endl;
	delimiter
	//-----------------Printing array [arr_str_2]-----------------//
	std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE << "PRINTING [arr_str_2] ARRAY OF STRINGS" << END << std::endl;
	for (int i = 0; i < arr_str_2.size(); i++) {
		std::cout << COLOR_BOLD_GREEN << arr_str_2[i] << " " << END;
	}
	std::cout << std::endl;
	delimiter

		//-----------------Test to examine the boundaries and invoking exceptions-----------------//
	std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [CUSTOM TEST TO EXAMINE THE BOUNDARIES AND INVOKING EXCEPTIONS] " << std::string(20, '*') << END
              << std::endl;
	try
	{
		std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE << "TRYING TO ACCESS THE INDEX OF ELEMENT a[8]" << END << std::endl;
		std::cout << COLOR_BOLD_GREEN << a[8] << " " << END;
	}
	catch (std::exception &error) {
		std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << error.what() << END << std::endl;
	}

	try
	{
		std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE << "TRYING TO ACCESS THE INDEX OF ELEMENT arr_str[15]" << END << std::endl;
		std::cout << COLOR_BOLD_GREEN << arr_str[15] << " " << END;
	}
	catch (std::exception &error) {
		std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << error.what() << END << std::endl;
	}

	try
	{
		std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE << "TRYING TO ACCESS THE INDEX OF ELEMENT arr_str_2[15]" << END << std::endl;
		std::cout << COLOR_BOLD_GREEN << arr_str_2[15] << " " << END;
	}
	catch (std::exception &error) {
		std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << error.what() << END << std::endl;
	}
	try
	{
		std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE << "TRYING TO ACCESS THE INDEX OF ELEMENT arr_str_2[-1]" << END << std::endl;
		std::cout << COLOR_BOLD_GREEN << arr_str_2[-1] << " " << END;
	}
	catch (std::exception &error) {
		std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << error.what() << END << std::endl;
	}
	try
	{
		std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE << "TRYING TO ACCESS EMPTY Array<double>double_var" << END << std::endl;
		Array<double>double_var;
		std::cout << double_var[0] << " " << END;
	}
	catch (std::exception &error) {
		std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << error.what() << END << std::endl;
	}

}