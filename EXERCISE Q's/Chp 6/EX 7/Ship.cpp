#include <iostream>
#include "Ship.h"

using namespace std;

int Ship::shipCount = 0;

Ship::Ship() {
	cout << "EMPTY SHIP CONS CALLED" << endl;
	shipCount += 0;
	shipNo = 0;
	shipLocationLatitude = nullptr;
	shipLocationLongtitude = nullptr;
}

Ship::Ship(Angle* lat, Angle* longt) {
	cout << "FILLED SHIP CONS CALLED" << endl;
	shipCount += 1;
	shipNo = shipCount;
	shipLocationLatitude = lat;
	shipLocationLongtitude = longt;
}

void Ship::storeShipLocation(Angle* lat, Angle* longt) {
	cout << "STORE-SHIP-LOCATIONS CALLED" << endl;
	shipCount += 1;
	shipNo = shipCount;
	shipLocationLatitude = lat;
	shipLocationLongtitude = longt;
}

void Ship::getShipLocation(){
	cout << "Ship No : " << shipNo << endl;
	cout << "Ship Latitude : ";
	shipLocationLatitude->showAngle();
	cout << "Ship Longtitude : ";
	shipLocationLongtitude->showAngle();
}
