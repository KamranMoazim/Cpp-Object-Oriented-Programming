#include <iostream>
#include "Bag20.h"


using namespace std;


Bag20::Bag20() {
	for (int i = 0; i < 20; i++)
	{
		arr[i] = 0;
	}
	currentSize = 0;
}

Bag20::Bag20(int s) {
	for (int i = 0; i < 20; i++)
	{
		arr[i] = 0;
	}
	currentSize = s;
}


void Bag20::insert(int n) {
	arr[currentSize] = n;
	++currentSize;
}

void Bag20::show() {
	cout << "Array contents are : ";
	for (int i = 0; i < 20; i++)
	{
		if (arr[i] != 0)
		{
			cout << arr[i];
		}
		else {
			break;
		}
	}
}
int Bag20::elementAt(int ind){
	if (ind > currentSize)
	{
		cout << "Error, Index out of range." << endl;
		return 0;
	}
	else
	{
		return arr[ind];
	}
}

int Bag20::findFrequency(int n) {
	int c = 0;
	for (int i = 0; i < 20; i++)
	{
		if (arr[i] == n)
		{
			c++;
		}
	}
	return c;
}

void Bag20::del(int n) {
	for (int i = 0; i < 20; i++)
	{
		if (arr[i] == n)
		{
			arr[i] = 0;
			currentSize--;
		}
	}
}

Bag20 Bag20::union1(Bag20 b){
	Bag20 newBag;
	int i = 0;
	if ((currentSize + b.currentSize) < 20)
	{
		for (int i = 0; i < currentSize; i++)
		{
			newBag.arr[i] = arr[i];
		}

		for (int i = currentSize, j=0; i < b.currentSize; i++,j++)
		{
			newBag.arr[i] = arr[j];
		}

	}
	else
	{
		cout << "Error, Index out of range, Cannot merge them." << endl;
	}
	return newBag;
}

Bag20 Bag20::leftRotate(Bag20 b, int f) {
	int temp[20] = { 0 };
	int i = 0;

	for (i = 0; i < 20; i++)
	{
		temp[i] = b.arr[i];
	}
	i = 0;

	for (i = 0; i < 20; i++)
	{
		b.arr[i] = temp[i + f];
	}
	for (int j = 0; j < f; j++)
	{
		b.arr[j + i] = temp[j];
	}

	Bag20 bg(currentSize + b.currentSize);

	for (int i = 0; i < currentSize + b.currentSize; i += 2)
	{
		bg.arr[i] = arr[i];
	}
	for (int i = 1; i < currentSize + b.currentSize; i += 2)
	{
		bg.arr[i] = b.arr[i];
	}

	return bg;
}
