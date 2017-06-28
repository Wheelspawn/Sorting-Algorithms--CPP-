// SortI.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <exception>

using namespace std;

int main()
{
	int array[10] = { 10, 3, 2, 5, 4, 9, 8, 1, 7, 6 }; // example array

	int arraySize = 10;

	for (int i = 0; i < arraySize; i++) // print unsorted array
	{
		cout << array[i];
	}

	cout << "\n";

	// void bubbleSort(array[i], arraySize)

	for (int j = 0; j < arraySize - 1; j++) // for every value in the array
	{
		do // swap the values until every value is followed by a greater value, from left to right
		{
			for (int i = 0; i < arraySize - 1; i++) // carry the comparison through every value in the array
			{
				if (array[i + 1] < array[i]) // swap two values, i and i+1. If i+1 is greater than i, it takes i's position and i takes i+1's position
				{
					int a = array[i]; // placeholder
					array[i] = array[i + 1]; // i = i+1
					array[i + 1] = a; // i+1 = i
				}

				for (int i = 0; i < arraySize; i++) // for each value in array
				{
					cout << array[i]; // print to console
				}
				cout << "\n";
			}
		} while (array[j + 1] < array[j]); // while there is any value left to be sorted
	}

	cout << "\n";

	for (int i = 0; i < arraySize; i++) // print sorted array on console
	{
		cout << array[i];
	}

	cout << "\n";
}

