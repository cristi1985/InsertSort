// SortarePrinInserare.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int *vector;
int vectorSize;
void citire()
{
	cout << "Cat de mare este vectorul";
	cin >> vectorSize;
	vector = new int[vectorSize];
	for (int i = 0; i < vectorSize; i++)
	{
		cout << "Introduceti element in vector";
		cin >> vector[i];
	}

}


void afisare(int n, int v[])
{
	cout << "Vectorul este" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}



void sortareInserare(int sizeList, int vector[])
{
	for (int i = 1; i < sizeList; i++)
	{
		int elem = vector[i];
		int j = i - 1;
		while (j >= 0 && vector[j] > elem)
		{
			vector[j + 1] = vector[j];
			j = j - 1;
		}
		vector[j + 1] = elem;

	}

}


int main()
{
	citire();
	sortareInserare(vectorSize, vector);
	afisare(vectorSize, vector);
    return 0;
}

