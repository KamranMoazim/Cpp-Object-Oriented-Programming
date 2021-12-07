#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;



class Bag2D {
private:
	int** matrix;
	int rows;
	int cols;
public:
	Bag2D(string s1 = "", string s2 = "") {

		rows = s1.length();
		cols = s2.length();

		//cout << "constructor called Bag2D " << rows << " " << cols << endl;

		matrix = new int* [rows + 1];
		//matrix = new int* [rows];

		for (int i = 0; i <= rows; i++)
		{
			*(matrix + i) = new int[cols + 1];
			//*(matrix + i) = new int[cols];
		}
	}
	int** getMatrix() {
		return matrix;
	}
	int getVal(int r, int c) {
		return *(*(matrix + r) + c);
	}
	void setVal(int r, int c, int v) {
		*(*(matrix + r) + c) = v;
	}
	int getRows() {
		return rows;
	}
	int getCols() {
		return cols;
	}
	~Bag2D() {

		for (int i = 0; i <= rows; i++)
		{
			delete[] * (matrix + i);
		}
		delete[] matrix;
	}
};



class LD {
private:
	Bag2D b;

	int min(int a, int b) {
		if (a > b)
		{
			return b;
		}
		return a;
	}
	int min(int a, int b, int c) {
		if (a < b && a < c)
		{
			return a;
		}
		else if (b < a && b < c)
		{
			return b;
		}
		return c;
	}
	int max(int a, int b) {
		if (a > b)
		{
			return a;
		}
		return b;
	}
public:
	LD(string s1, string s2) : b(s1, s2) {

		int** matrix = b.getMatrix();
		int rows = b.getRows();
		int cols = b.getCols();

		for (int j = 0; j < cols; j++) {
			*(*(matrix + 0) + j) = j;
		}

		for (int i = 0; i <= rows; i++) {
			*(*(matrix + i) + 0) = i;
		}

	}
	int find_LD_distance() {

		//int** matrix = b.getMatrix();
		int rows = b.getRows();
		int cols = b.getCols();

		int one = 0, two = 0, three = 0;

		for (int i = 1; i <= rows; i++)
		{
			for (int j = 1; j <= cols; j++) {

				if (min(i, j) == 0)
				{
					//*(*(matrix + i) + j) = max(i, j);
					b.setVal(i, j, max(i, j));
				}
				else
				{
					one = min(i - 1, j) + 1;
					two = min(i, j - 1) + 1;
					three = min(i - 1, j - 1) + 1;

					//*(*(matrix + i) + j) = min(one, two, three);
					b.setVal(i, j, min(one, two, three));
				}

			}
		}

		//return *(*(matrix + rows) + cols);
		return b.getVal(rows, cols);

	}
};



int main()
{
	LD ld("cat", "cap");
	cout << ld.find_LD_distance() << endl;

	return 0;
}