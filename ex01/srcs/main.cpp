#include "iter.hpp"

template  <typename T>
void  arrayPrint(T& val)
{
	std::cout <<" [" << val << "] ";
}

template  <typename T>
void  arrayPrintConst(const T& val)
{
	std::cout <<" [" << val << "] ";
}

template  <typename T>
void  multiplyTen(T& val)
{
	val *= 10;
}

int main(void)
{
	int arrayInt[5] = {2, 12, 24, 11, 5};
	const int arrayConstInt[5] = {2, 12, 24, 11, 5};

	double  arrayDouble[5] = {2, 12, 24, 11, 5};
	const double arrayDoubleConst[5] = {2, 12, 24, 11, 5};

	std::string strs[3] = {"coucou", "hihi", "youpi"};
	const std::string strsConst[3] = {"coucou", "hihi", "youpi"};

	std::cout << std::endl << "############### TEST: int array ###############" << std::endl << std::endl;
	std::cout << "1-1. int array print: ";
	iter(arrayInt, 5, arrayPrint<int>);
	std::cout << std::endl << "1-2. int array print: ";
	iter(arrayInt, 5, arrayPrintConst<int>);
	std::cout << "(fonction const)" << std::endl;
	std::cout << "1-3. int array * 10: ";
	iter(arrayInt, 5, multiplyTen<int>);
	iter(arrayInt, 5, arrayPrint<int>);
	std::cout << std::endl;

	std::cout << std::endl << "2-1. const int array print: ";
	iter(arrayConstInt, 5, arrayPrint<const int>);
	std::cout << std::endl << "2-2. const int array print: ";
	iter(arrayConstInt, 5, arrayPrintConst<int>);
	std::cout << "(fonction const)" << std::endl;
	try
	{
		/* code */
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl << "(const references are read-only and cannot be modified)" << std::endl;

	std::cout << std::endl << "############### TEST: double array ###############" << std::endl << std::endl;
	std::cout << "1-1. double array print: ";
	iter(arrayDouble, 5, arrayPrint<double>);
	std::cout << std::endl << "1-2. double array * 10: ";
	iter(arrayDouble, 5, multiplyTen<double>);
	iter(arrayDouble, 5, arrayPrint<double>);
	std::cout << std::endl;

	std::cout << std::endl << "2-1. const double array print: ";
	iter(arrayDoubleConst, 5, arrayPrint<const double>);
	std::cout << std::endl << "(const references are read-only and cannot be modified)" << std::endl;

	std::cout << std::endl << "############### TEST: string array ###############" << std::endl << std::endl;
	std::cout << "1-1. string array print: ";
	iter(strs, 3, arrayPrint<std::string>);
	std::cout << std::endl << "(std::string values cannot be multiplied)" << std::endl << std::endl;
	std::cout << "2-1. const string array print: ";
	iter(strsConst, 3, arrayPrint<const std::string>);
	std::cout << std::endl << "(const references are read-only and cannot be modified)" << std::endl << std::endl;

	return (0);
}
