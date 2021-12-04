//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "RetailItem.h"

using namespace std;


RetailItem::RetailItem(char* d, int u, double p) {
    setDescription(d);
    setUnitOnHand(u);
    setPrice(p);
}
void RetailItem::setDescription(char* d) {
    if (strlen(d) > 0) {
        description = new char[strlen(d)+1];
        strcpy(description, d);
    }
    else {
        description = NULL;
        cout << "Invalid String!" << endl;
    }
}
void RetailItem::setUnitOnHand(int u) {
    if (u > 0) {
        unitOnHand = u;
    }
    else {
        unitOnHand = 0;
        cout << "Invalid Units Count!" << endl;
    }
}
void RetailItem::setPrice(double p) {
    if (p > 0.0) {
        price = p;
    }
    else {
        price = 0;
        cout << "Invalid Price!" << endl;
    }
}
char* RetailItem::getDescription() {
    return description;
}
int RetailItem::getUnitOnHand() {
    return unitOnHand;
}
double RetailItem::getPrice() {
    return price;
}

