#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Bag20.cpp"

using namespace std;

int main() {

    Bag20 bg1, bg2;

	int cond = 0, inp = 0;

	cout << "Enter fro bag1" << endl;
	cout << "Enter Number : ";
	cin >> inp;
	bg1.insert(inp);

	while (cond < 20 && inp != -1)
	{
		cout << "Enter Number : ";
		cin >> inp;
		cond++;

		if (inp != -1)
		{
			bg1.insert(inp);
		}
	}

	cond = 0, inp = 0;

	cout << "Enter fro bag2" << endl;
	cout << "Enter Number : ";
	cin >> inp;
	bg2.insert(inp);

	while (cond < 20 && inp != -1)
	{
		cout << "Enter Number : ";
		cin >> inp;
		cond++;

		if (inp != -1)
		{
			bg2.insert(inp);
		}
	}


	cout << "Contens of Bag1 are ";
	bg1.show();
	cout << endl;
	cout << "Contens of Bag2 are ";
	bg2.show();
	cout << endl;

	cout << "Enter the index at which value should be found : ";
	cin >> inp;
	cout << bg1.elementAt(inp);

	cout << "Enter for frquesncy : ";
	cin >> inp;
	cout << bg1.findFrequency(inp);

    return 0;
}







