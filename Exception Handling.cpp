// Exception Handling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int iMiles = 0;
	int iGallons = 0;
	int iMilesPerGallon = 0;
	std::cout << "Enter the miles: ";
	std::cin >> iMiles;
	std::cout << "Enter the gallons: ";
	std::cin >> iMilesPerGallon;
	//Dividing a number by 0 - causes an exception
	try 
	{
		if (iGallons == 0) {
			throw 0;
		}
		std::cout << "Result: " << iMiles / iMilesPerGallon;
	}
	catch(int &ex)
	{
		std::cerr << "An error has occured while processing the input!" << std::endl;
	}
	

	//Simple logic to check if number is 0 without using exception handling
	//if (iMiles != 0) 
	//{
	//	std::cout << "Result: " << iMiles / dMilesPerGallon;
	//}
	//else
	//{
	//	std::cerr << "Sorry, can't divide by 0" << std::endl;
	//}

	

	
	
}
