#include "whatever.hpp"
#include "colors.hpp"

int message(int x) {

	std::cout << "Long computing time!" << std::endl;
	return x;
}

int main( void ) {
delimiter
int a = 2;
int b = 3;
std::cout << COLOR_BOLD_YELLOW << COLOR_UNDERLINE << "Before swapping : " << END << COLOR_ON_CYAN << COLOR_BOLD_BLACK << "a = " << a << ", b = " << b << END << std::endl;  
::swap( a, b );
std::cout << COLOR_BOLD_YELLOW << COLOR_UNDERLINE << "After swapping : " << END << COLOR_ON_CYAN << COLOR_BOLD_BLACK << "a = " << a << ", b = " << b << END << std::endl;  
std::cout << COLOR_BOLD_YELLOW << COLOR_UNDERLINE << "min( a, b ) = " << END << COLOR_ON_CYAN << COLOR_BOLD_BLACK << ::min( a, b ) << END << std::endl;
std::cout << COLOR_BOLD_YELLOW << COLOR_UNDERLINE << "max( a, b ) = " << END << COLOR_ON_CYAN << COLOR_BOLD_BLACK << ::max( a, b ) << END << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
delimiter

std::cout << COLOR_BOLD_YELLOW << COLOR_UNDERLINE << "Before swapping : " << END << COLOR_ON_CYAN << COLOR_BOLD_BLACK << "c = " << c << " , d = " << d << END << std::endl;  
::swap(c, d);
std::cout << COLOR_BOLD_YELLOW << COLOR_UNDERLINE << "After swapping : " << END << COLOR_ON_CYAN << COLOR_BOLD_BLACK << "c = " << c << " , d = " << d << END << std::endl;  
std::cout << COLOR_BOLD_YELLOW << COLOR_UNDERLINE << "min( c, d ) = " << END << COLOR_ON_CYAN << COLOR_BOLD_BLACK << ::min( c, d ) << END << std::endl;
std::cout << COLOR_BOLD_YELLOW << COLOR_UNDERLINE << "max( c, d ) = " << END << COLOR_ON_CYAN << COLOR_BOLD_BLACK << ::max( c, d ) << END << std::endl;
delimiter



double e = 1234.53235;
double f = 5678.93473;
std::cout << COLOR_BOLD_YELLOW << COLOR_UNDERLINE << "Before swapping : " << END << COLOR_ON_CYAN << COLOR_BOLD_BLACK << "e = " << e << ", f = " << f << END << std::endl;  
::swap( e, f );
std::cout << COLOR_BOLD_YELLOW << COLOR_UNDERLINE << "After swapping : " << END << COLOR_ON_CYAN << COLOR_BOLD_BLACK << " e = " << e << ", f = " << f << END << std::endl;  
std::cout << COLOR_BOLD_YELLOW << COLOR_UNDERLINE << "min( e, f ) = " << END << COLOR_ON_CYAN << COLOR_BOLD_BLACK << ::min( e, f ) << END << std::endl;
std::cout << COLOR_BOLD_YELLOW << COLOR_UNDERLINE << "max( e, f ) = " << END << COLOR_ON_CYAN << COLOR_BOLD_BLACK << ::max( e, f ) << END << std::endl;
delimiter

char g = 'a';
char h = 'm';
std::cout << COLOR_BOLD_YELLOW << COLOR_UNDERLINE << "Before swapping : " << END << COLOR_ON_CYAN << COLOR_BOLD_BLACK << "g = " << g << ", h = " << h << END << std::endl;  
::swap( g, h );
std::cout << COLOR_BOLD_YELLOW << COLOR_UNDERLINE << "After swapping : " << END << COLOR_ON_CYAN << COLOR_BOLD_BLACK << " g = " << g << ", h = " << h << END << std::endl;  
std::cout << COLOR_BOLD_YELLOW << COLOR_UNDERLINE << "min( g, h ) = " << END << COLOR_ON_CYAN << COLOR_BOLD_BLACK << ::min( g, h ) << END << std::endl;
std::cout << COLOR_BOLD_YELLOW << COLOR_UNDERLINE << "max( g, h ) = " << END << COLOR_ON_CYAN << COLOR_BOLD_BLACK << ::max( g, h ) << END << std::endl;
delimiter

}