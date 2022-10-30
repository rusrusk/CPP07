#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {

	private :
			unsigned int _nb_size;
			T *_arr;


	public :
		Array();
		Array(unsigned int param_nb_size);
		Array(const Array &src);

		//operators
		Array &operator=(Array const &src);
		T &operator[](unsigned int idx);

		//destructor
		~Array();

		//getters
		unsigned int getNb(void) const;
		void setNb(unsigned int nb);

		//helper functions
		int size(void);
		void swap(Array& first, Array& second);

		//exception class
		class OutOfBoundariesException : public std::exception {
			virtual const char* what() const throw();
		};
};

# include "Array.tpp"




#endif