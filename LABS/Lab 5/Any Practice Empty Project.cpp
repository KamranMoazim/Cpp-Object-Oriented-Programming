#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#include "TranformationMatrix.h"

using namespace std;



int main()
{
	TransformationMatrix t;

	double* k = new double[2];
	for (int i = 0; i < 2; i++)
	{
		k[i] = 0;
	}
	t.showMat(k);
}
