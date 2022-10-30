
//------------------Default constructor------------------//
template <typename T>
Array<T>::Array(): _nb_size(0), _arr(new T[_nb_size]) {

	std::cout << "Default constructor was called" << std::endl;
}

//------------------Parameterized constructor------------------//
template <typename T>
Array<T>::Array(unsigned int param_nb_size) : _nb_size(param_nb_size), _arr(new T[_nb_size]) {

	std::cout << "Parameterized constructor was called" << std::endl;
}

//------------------Copy constructor------------------//
template <typename T>
Array<T>::Array(const Array &src) : _nb_size(src._nb_size), _arr(new T[_nb_size]){

	std::copy(src._arr, src._arr + _nb_size, _arr);
	std::cout << "Copy constructor was called" << std::endl;
}


//------------------Getter to get integer value------------------//
template <typename T>
unsigned int Array<T>::getNb(void) const {
	return this->_nb_size;
}

//------------------Setter to set integer value------------------//
template <typename T>
void Array<T>::setNb(unsigned int nb) {
	this->_nb_size = nb;
}

//------------------Destructor------------------//
template <typename T>
Array<T>::~Array() {
	delete [] this->_arr;
	std::cout << "Destructor was called" << std::endl;	
}

//------------------Size() returns the nb of elements of array----------------------//
template <typename T>
int Array<T>::size(void) {
	return this->_nb_size;
}

//------------------Swap function------------------//
template <typename T>
void Array<T>::swap(Array &first, Array &second) {
	std::swap(first._nb_size, second._nb_size);
	std::swap(first._arr, second._arr);
}

// ------------------Copy assignment operator using copy-and-swap idiom------------------//
template <typename T>
Array<T> &Array<T>::operator=(Array const &src) {
	if (this != &src) {
		Array tmp(src);
		swap(*this, tmp);
	}
	std::cout << "Copy Assignment operator was called" << std::endl;
	return *this;
}

//------------------Subscript operator------------------//
template <typename T>
T &Array<T>::operator[](unsigned int idx) {
	if (this->_nb_size < 1 || idx > this->_nb_size)
		throw OutOfBoundariesException();
	return this->_arr[idx];
}

//------------------Exception class method what() definition------------------//
template <typename T>
const char *Array<T>::OutOfBoundariesException::what() const throw() {
	return ("EXCEPTION : INDEX IS OUT OF BOUNDARIES");
}
