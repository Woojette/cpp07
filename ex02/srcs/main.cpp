#include "Array.hpp"

int main(void)
{
	std::cout << "############### Create Array int ###############" << std::endl << std::endl;
	std::cout << "array1 int: ";
	Array<int>	array1;
	std::cout << "array2 (5): ";
	Array<int>	array2(5);
	std::cout << "arr3 = arr2: ";
	Array<int>	array3 = array2;

	std::cout << "array1 size: " << array1.size() << std::endl;
	std::cout << "array2 size: " << array2.size();
	std::cout << " { " << array2[0] << ", " << array2[1] << ", " << array2[2] << ", " << array2[3] << ", " << array2[4] << " }" << std::endl;
	std::cout << "array3 size: " << array3.size();
	std::cout << " { " << array3[0] << ", " << array3[1] << ", " << array3[2] << ", " << array3[3] << ", " << array3[4] << " }" << std::endl;

	std::cout << std::endl << "=============== TEST: modification int ===============" << std::endl << std::endl;
	// std::cout << "array2 (original): " << array2 << std::endl;
	std::cout << "array2 size (original): " << "{ " << array2[0] << ", " << array2[1] << ", " << array2[2] << ", " << array2[3] << ", " << array2[4] << " }" << std::endl;

	std::cout << "~~~~~~~~~~~~~~~ modify: { 2, 12, 24, 11, 5 } ~~~~~~~~~~~~~~~" << std::endl;
	array2[0] = 2;
	array2[1] = 12;
	array2[2] = 24;
	array2[3] = 11;
	array2[4] = 5;

	std::cout << "array2 size (modified): " << "{ " << array2[0] << ", " << array2[1] << ", " << array2[2] << ", " << array2[3] << ", " << array2[4] << " }" << std::endl;

	std::cout << std::endl << "=============== TEST: operator [] throw ===============" << std::endl << std::endl;
	try
	{
		array2[8] = 97;
	}
	catch (std::exception& e)
	{
		std::cout << "Error: exception: unsigned int >= _size" << std::endl;
	}

	std::cout << std::endl << "=============== TEST: deep copy ===============" << std::endl << std::endl;
	std::cout << "arr4 = arr2: ";
	Array<int>	array4 = array2;

	std::cout << "array2 size: " << array2.size();
	std::cout << " { " << array2[0] << ", " << array2[1] << ", " << array2[2] << ", " << array2[3] << ", " << array2[4] << " }" << std::endl;

	std::cout << "array4 size: " << array4.size();
	std::cout << " { " << array4[0] << ", " << array4[1] << ", " << array4[2] << ", " << array4[3] << ", " << array4[4] << " }" << std::endl;

	// delete	array1;
	// delete	array2;
	// delete	array3;
}
