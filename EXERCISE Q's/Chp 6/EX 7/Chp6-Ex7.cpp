#include <iostream>

//#include "Angle.cpp"
#include "Ship.cpp"

using namespace std;


int main()
{
    //char quit = 'n', dire;
    //int deg;
    //double min;
    //Angle* myAngle;    
    //myAngle = new Angle(149, 34.8, 'W');
    ////myAnlge(149, 34.8, 'W');
    //myAngle->showAngle();
    //cout << "Wants to try with other Inputs ? (y/n) : ";
    //cin >> quit;
    //while (quit == 'y' || quit == 'Y')
    //{
    //    cout << "Enter Degrees : ";
    //    cin >> deg;
    //    cout << "Enter Minutes : ";
    //    cin >> min;
    //    cout << "Enter Direction : ";
    //    cin >> dire;
    //    myAngle->inputAngle(deg, min, dire);
    //    myAngle->showAngle();
    //    cout << "Wants to try with other Inputs ? (y/n) : ";
    //    cin >> quit;
    //}

    Angle* myShipsAngles;
    int no_of_angles = 1;
    myShipsAngles = new Angle[no_of_angles + no_of_angles];

    Ship* myShips;
    myShips = new Ship[no_of_angles];

    char dire;
    int deg;
    double min;
    
    for(int i=0; i < no_of_angles + no_of_angles; i+=2)
    {
        cout << "For Latitude : " << endl;
        cout << "Enter Degrees : ";
        cin >> deg;
        cout << "Enter Minutes : ";
        cin >> min;
        cout << "Enter Direction : ";
        cin >> dire;
        (myShipsAngles + i)->inputAngle(deg, min, dire);

        cout << "For Longtitude : " << endl;
        cout << "Enter Degrees : ";
        cin >> deg;
        cout << "Enter Minutes : ";
        cin >> min;
        cout << "Enter Direction : ";
        cin >> dire;
        (myShipsAngles + (i+1))->inputAngle(deg, min, dire);

    }

    int k = 0, l = 1;
    for (int i = 0; i < no_of_angles; i++)
    {
        (myShips + i)->storeShipLocation((myShipsAngles + k), (myShipsAngles + l));
        k += 2;
        l += 2;
    }
    // k   l
    // 0   1
    // 2   3
    // 4   5

    for (int i = 0; i < no_of_angles + no_of_angles; i+=2)
    {
        //(myShipsAngles + i)->showAngle();
        //(myShipsAngles + (i+1))->showAngle();
        (myShips + i)->getShipLocation();
    }

    
    return 0;
}
