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
	std::cout << " { " << array4[0] << ", " << array4[1] << ", " << array4[2] << ", " << array4[3] << ", " << array4[4] << " }" << std::endl << std::endl;

	std::cout << "~~~~~~~~~~~~~ arr4 modified (7, 7, 7, 7, 7) ~~~~~~~~~~~~~" << std::endl;
	array4[0] = 7;
	array4[1] = 7;
	array4[2] = 7;
	array4[3] = 7;
	array4[4] = 7;

	std::cout << std::endl << "array2 size: " << array2.size();
	std::cout << " { " << array2[0] << ", " << array2[1] << ", " << array2[2] << ", " << array2[3] << ", " << array2[4] << " }" << std::endl;
	std::cout << "array4 size: " << array4.size();
	std::cout << " { " << array4[0] << ", " << array4[1] << ", " << array4[2] << ", " << array4[3] << ", " << array4[4] << " }" << std::endl << std::endl;





	std::cout << "############### Create Array double ###############" << std::endl << std::endl;
	std::cout << "array5 double: ";
	Array<double>	array5;
	std::cout << "array6 (5): ";
	Array<double>	array6(5);
	std::cout << "arr7 = arr6: ";
	Array<double>	array7 = array6;

	std::cout << "array6 size: " << array6.size();
	std::cout << " { " << array6[0] << ", " << array6[1] << ", " << array6[2] << ", " << array6[3] << ", " << array6[4] << " }" << std::endl;
	std::cout << "array7 size: " << array7.size();
	std::cout << " { " << array7[0] << ", " << array7[1] << ", " << array7[2] << ", " << array7[3] << ", " << array7[4] << " }" << std::endl;

	std::cout << std::endl << "=============== TEST: modification double ===============" << std::endl << std::endl;
	std::cout << "array6 size (original): " << "{ " << array6[0] << ", " << array6[1] << ", " << array6[2] << ", " << array6[3] << ", " << array6[4] << " }" << std::endl;

	std::cout << "~~~~~~~~~~~~~~~ modify: { 2, 12, 24, 11, 5 } ~~~~~~~~~~~~~~~" << std::endl;
	array6[0] = 2;
	array6[1] = 12;
	array6[2] = 24;
	array6[3] = 11;
	array6[4] = 5;

	std::cout << "array6 size (modified): " << "{ " << array6[0] << ", " << array6[1] << ", " << array6[2] << ", " << array6[3] << ", " << array6[4] << " }" << std::endl;

	std::cout << std::endl << "=============== TEST: operator [] throw ===============" << std::endl << std::endl;
	try
	{
		array6[8] = 97;
	}
	catch (std::exception& e)
	{
		std::cout << "Error: exception: unsigned double >= _size" << std::endl;
	}

	std::cout << std::endl << "=============== TEST: deep copy ===============" << std::endl << std::endl;
	std::cout << "arr8 = arr6: ";
	Array<double>	array8 = array6;

	std::cout << "array6 size: " << array6.size();
	std::cout << " { " << array6[0] << ", " << array6[1] << ", " << array6[2] << ", " << array6[3] << ", " << array6[4] << " }" << std::endl;

	std::cout << "array8 size: " << array8.size();
	std::cout << " { " << array8[0] << ", " << array8[1] << ", " << array8[2] << ", " << array8[3] << ", " << array8[4] << " }" << std::endl << std::endl;

	std::cout << "~~~~~~~~~~~~~ arr8 modified (7, 7, 7, 7, 7) ~~~~~~~~~~~~~" << std::endl;
	array8[0] = 7;
	array8[1] = 7;
	array8[2] = 7;
	array8[3] = 7;
	array8[4] = 7;

	std::cout << std::endl << "array6 size: " << array6.size();
	std::cout << " { " << array6[0] << ", " << array6[1] << ", " << array6[2] << ", " << array6[3] << ", " << array6[4] << " }" << std::endl;
	std::cout << "array8 size: " << array8.size();
	std::cout << " { " << array8[0] << ", " << array8[1] << ", " << array8[2] << ", " << array8[3] << ", " << array8[4] << " }" << std::endl << std::endl;





	std::cout << "############### Create Array std::string ###############" << std::endl << std::endl;
	std::cout << "array9: ";
	Array<std::string>	array9;
	std::cout << "array10(3): ";
	Array<std::string>	array10(3);
	std::cout << "arr11 = arr10: ";
	Array<std::string>	array11 = array10;

	std::cout << "array9 size: " << array9.size() << std::endl;
	std::cout << "array10 size: " << array10.size();
	std::cout << " { " << array10[0] << ", " << array10[1] << ", " << array10[2] << " }" << std::endl;
	std::cout << "array11 size: " << array11.size();
	std::cout << " { " << array11[0] << ", " << array11[1] << ", " << array11[2] << " }" << std::endl;

	std::cout << std::endl << "=============== TEST: modification std::string ===============" << std::endl << std::endl;
	std::cout << "array10 size: " << array10.size();
	std::cout << " { " << array10[0] << ", " << array10[1] << ", " << array10[2] << " }" << std::endl;
	std::cout << "~~~~~~~~~~~ modify: { coucou, hihi, youpi } ~~~~~~~~~~~" << std::endl;
	array10[0] = "coucou";
	array10[1] = "hihi";
	array10[2] = "youpi";
	std::cout << "array10 modified: " << array10.size();
	std::cout << " { " << array10[0] << ", " << array10[1] << ", " << array10[2] << " }" << std::endl;

	std::cout << std::endl << "=============== TEST: operator [] throw ===============" << std::endl << std::endl;
	try
	{
		array10[8] = "hello";
	}
	catch (std::exception& e)
	{
		std::cout << "Error: exception: unsigned double >= _size" << std::endl;
	}

	std::cout << std::endl << "=============== TEST: deep copy ===============" << std::endl << std::endl;
	std::cout << "arr12 = arr10: ";
	Array<std::string>	array12 = array10;

	std::cout << "array10 size: " << array10.size();
	std::cout << " { " << array10[0] << ", " << array10[1] << ", " << array10[2] << " }" << std::endl;

	std::cout << "array12 size: " << array12.size();
	std::cout << " { " << array12[0] << ", " << array12[1] << ", " << array12[2] << " }" << std::endl;

	std::cout << "~~~~~~~~~~~ arr12 modified: { salade, tomate, oignon } ~~~~~~~~~~~" << std::endl;

	array12[0] = "salade";
	array12[1] = "tomate";
	array12[2] = "oignon";
	std::cout << "array10 size: " << array10.size();
	std::cout << " { " << array10[0] << ", " << array10[1] << ", " << array10[2] << " }" << std::endl;
	std::cout << "array12 size: " << array12.size();
	std::cout << " { " << array12[0] << ", " << array12[1] << ", " << array12[2] << " }" << std::endl << std::endl;

	return (0);
}
