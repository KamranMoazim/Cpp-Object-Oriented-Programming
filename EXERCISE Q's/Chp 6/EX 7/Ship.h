#ifndef SHIP_H
#define SHIP_H

#include "Angle.cpp"

// my SHIP Class Declaration

class Ship {
private:
    int shipNo;
    Angle* shipLocationLatitude;
    Angle* shipLocationLongtitude;
public:
    static int shipCount;
    Ship();
    Ship(Angle*, Angle*);
    void storeShipLocation(Angle*, Angle*);
    void getShipLocation();
};

#endif