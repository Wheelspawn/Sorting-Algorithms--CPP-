// Insertion Sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void printArray(int array[], int arraySize) // prints the elements in the array
{
	for (int p = 0; p < arraySize; p++) // for every element in the array
	{
		cout << array[p] << " "; // print the element
	}
	cout << "\n"; // add a space
}

int main()
{
	int bigArray[] = { 8, 5, 16, 7, 4, 14, 19, 15, 2, 6, 10, 20, 18, 12, 1, 3, 9, 11, 17, 13 };
	
	cout << bigArray[-1] << " ";

	int arraySize = 20;
	
	printArray(bigArray, arraySize);

	for (int i = 0; i < arraySize; i++) // for each element in the array
	{
		do
		{
			if (bigArray[i] < bigArray[i - 1]) // if i is less than i-1
			{
				int a = bigArray[i]; // swap the two values
				bigArray[i] = bigArray[i - 1];
				bigArray[i - 1] = a;

				printArray(bigArray, arraySize);
				i--; // step back to compare the new values of i and i-1
			}
		} while (bigArray[i] < bigArray[i - 1]); // if any i is less than i-1, keep going
	}
	printArray(bigArray, arraySize);
}

