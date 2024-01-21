/*
 *  Name: Phu Ha
 *
 * 	Project Name: CSC450-CTA01
 *
 *	Project Purpose: Print out a Person's Information
 *
 *	Algorithm Used: N/A
 *
 *	Program Inputs: N/A
 *
 *	Program Outputs: Prints out person's name and address
 *
 *	Program Limitations: No inputs, data is static
 *
 *	Program Errors: N/A
 *
 *  Created on: Jan 16, 2024
 *      Author: phuth
 */
#include <iostream>
#include <string>

// namespace declaration
using namespace std;

// main function
int main()
{
	//variables
	string firstName = "Bob";
	string lastName = "Jones";
	string streetAddress = "123 Apple St";
	string city = "Los Angeles";
	int zipCode = 90210;

	// printing out to console
	// full name
	cout << "Name: " << firstName << " " << lastName << endl;
	// address portion
	cout << "Street Address: " << streetAddress << endl;
	cout << "City: " << city << endl;
	cout << "Zip Code: " << zipCode << endl;

	// return statement for main
	return 0;
}




