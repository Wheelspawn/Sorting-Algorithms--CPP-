// Selection Sort.cpp : Defines the entry point for the console application.
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

int swapValues(int array[], int arraySize, int firstVal, int secondVal)
{
	int a = array[firstVal];
	array[firstVal] = array[secondVal];
	array[secondVal] = a;


	for (int p = 0; p < arraySize; p++) // for every element in the array
	{
		return array[p];
	}
}

int main()
{
	// int array[12] = { 7, 10, 2, 11, 12, 6, 3, 5, 9, 1, 8, 4 };
	int array[10] = { 8,5,2,6,9,3,1,4,0,7 };
	int arraySize = 10;

	int bigArray[4] = { 3,4,5,6 };
	
	printArray(bigArray, 4);
	swapValues(bigArray, 4, 1, 3 );
	printArray(bigArray, 4);

	printArray(array, arraySize);
	cout << "\n";

	int final;
	int k = 0;
	
	for (int j = 0; j < arraySize; j++) // for each element in array that has not been sorted
	{
		for (int i = 1 + k; i < arraySize; i++) // for each element in the array
		{
			if (array[i - 1] > array[i]) // if the element to the left is greater than the element
			{
				continue; // continue the loop
			}
			else if (array[i - 1] < array[i])
			{
				final = array[i - 1];
				cout << array[i - 1] << endl;
			}
			printArray(array, arraySize);
		}
		swapValues(array, arraySize, final, array[j]);
		k++;
	}

	cout << final << endl;

	printArray(array, arraySize);

}

