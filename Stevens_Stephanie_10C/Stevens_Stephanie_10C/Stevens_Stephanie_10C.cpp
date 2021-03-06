/*Programmer: Stephanie.stevens2002@gmail.com
Program: C10C
Purpose: To learn to point better
Start Date: 20180424
End Date: 20180424
Issues: Its rude to point
*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	//declare constants
	const int SIZE = 5;

	//declare varaibles
	int arrayIntNum[SIZE] = { 10, 20, 30, 40, 50 };
	double arrayDblNum[SIZE] = { 10.4, 42.42, 12.9, 33.33, 97.2 };
	short arrayShrtNum[SIZE] = { 100, 200, 300, 400, 999 };
	char arrayCharNum[SIZE] = { 'H', 'E', 'L', 'L', 'O' };


	//pointers
	int *ptrInt;
	double *ptrDbl;
	short *ptrShrt;
	char *ptrChar;

	//intialize pointers
	ptrInt = arrayIntNum;
	ptrDbl = arrayDblNum;
	ptrShrt = arrayShrtNum;
	ptrChar = arrayCharNum;

	//Integer output
	cout << "Here is what is loaded in the Integer array & the addresses:" << endl;
	for (int count = 0; count < SIZE; count++)
	{
		ptrInt = &arrayIntNum[count];
		cout << *ptrInt << " in " << &ptrInt[count] << " (numerically: " << long(&ptrInt[count]) << ")" << endl;

	}
	cout << endl;

	//double output
	cout << "Here is what is loaded in the Double array & the addresses:" << endl;
	for (int count = 0; count < SIZE; count++)
	{
		cout << fixed << showpoint << setprecision(2);
		ptrDbl = &arrayDblNum[count];
		cout << *ptrDbl << " in " << &ptrDbl[count] << " (numerically: " << long(&ptrDbl[count]) << ")" << endl;
	}
	cout << endl;

	//short output
	cout << "Here is what is loaded in the Short array & the addresses:" << endl;
	for (int count = 0; count < SIZE; count++)
	{
		ptrShrt = &arrayShrtNum[count];
		cout << *ptrShrt << " in " << &ptrShrt[count] << " (numerically: " << long(&ptrShrt[count]) << ")" << endl;
	}
	cout << endl;

	//char output
	cout << "Here are the addresses for the Char array:" << endl;
	for (int count = 0; count < SIZE; count++)
	{
		cout << fixed << showpoint << setprecision(2);
		ptrChar = &arrayCharNum[count];
		cout << *ptrChar << " in " << &ptrChar[count] << " (numerically: " << long(&ptrChar[count]) << ")" << endl;
	}
	cout << endl;

	system("pause");
	return 0;
}

