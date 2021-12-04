#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Circle.cpp"

using namespace std;


int main() {
    
    
    double r, x, y;
    Circle c1;

    cout << "Enter Radius : ";
    cin >> r;
    cout << "Enter Origin X : ";
    cin >> x;
    cout << "Enter Origin Y : ";
    cin >> y;

    c1.setRadius(r);
    c1.setOriginX(x);
    c1.setOriginY(y);

    cout << "Circle Area is " << c1.getArea() << endl;
    cout << "Circle Circumference is " << c1.getCircumference() << endl;
    cout << "Circle Diameter is " << c1.getDiameter() << endl; 
    

    Circle cirs[4];
    bool concentrics = true;
    
    cirs[0].setRadius(12);
    cirs[0].setOriginX(23);
    cirs[0].setOriginY(53);
    
    cirs[0].setRadius(23);
    cirs[1].setOriginX(23);
    cirs[1].setOriginY(53);

    cirs[0].setRadius(34);
    cirs[2].setOriginX(23);
    cirs[2].setOriginY(53);

    cirs[0].setRadius(45);
    cirs[3].setOriginX(23);
    cirs[3].setOriginY(13);

    double x = cirs[0].getOriginX(), y = cirs[0].getOriginY();

    for (int i = 1; i < 4; i++)
    {
        if (x == cirs[i].getOriginX() && y == cirs[i].getOriginY())
        {
            x = cirs[i].getOriginX();
            y = cirs[i].getOriginY();
        }
        else
        {
            concentrics = false;
            break;
        }
    }

    if (concentrics)
    {
        cout << "Circles are concentrics" << endl;

    }

    return 0;
}









