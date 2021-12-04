#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include "RetailItem.cpp"

using namespace std;


int main() {

    char dict[] = "Items";

    RetailItem items[3] = {
        {dict, 4, 4.5},
        {dict, 6, 6.5},
        {dict, 8, 8.5}
    };

    cout << "\tDescription\tUnits On Hand\tPrice" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "Item #" << i + 1;
        cout << "\t" << items[i].getDescription();
        cout << "\t\t" << items[i].getUnitOnHand();
        cout << "\t\t" << items[i].getPrice() << endl;
    }



    return 0;
}

