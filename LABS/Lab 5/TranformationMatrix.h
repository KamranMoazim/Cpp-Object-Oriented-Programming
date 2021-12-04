#ifndef TRANSFORMATIONMATRIX_H
#define TRANSFORMATIONMATRIX_H

#include "Point.h"

using namespace std;

class TransformationMatrix {
private:
    double** matrix;
    int r;
    int c;
    Point p;
public:
    TransformationMatrix(double** mat = NULL, double x = 0, double y = 0) {

        int cols, rows;
        cout << "Enter Number of Cols : ";
        cin >> cols;
        c = cols;
        cout << "Enter Number of Rows : ";
        cin >> rows;
        r = rows;

        p.setX(x);
        p.setY(y);

        matrix = new double* [r];
        for (int i = 0; i < r; i++)
        {
            *(matrix + i) = new double[c];
        }


        if (mat == NULL)
        {
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++) {
                    *(*(matrix + i) + j) = 0;
                }
            }
        }
        else
        {
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++) {
                    *(*(matrix + i) + j) = *(*(mat + i) + j);
                }
            }
        }
    }
    void setPoints(double x, double y) {
        p.setX(x);
        p.setY(y);
    }
    Point getPoints() {
        return p;
    }
    double* multiply() {
        double* vec = p.getVec();
        double* res = new double[r];
        double sum = 0;
        for (int j = 0; j < r; j++)
        {
            for (int k = 0; k < c; k++)
            {
                sum += matrix[j][k] * vec[k];
            }
            res[j] = sum;
            sum = 0;
        }
        return res;
    }
    void showMat(double* res) {
        for (int j = 0; j < r; j++)
        {
            cout << res[j];
            cout << endl;
        }
    }
    void function(char f) {

        switch (f)
        {
        case 's':
            double s = 0;
            cout << "Enter s : ";
            cin >> s;

            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++) {
                    if (i == j)
                    {
                        *(*(matrix + i) + j) = s;
                    }
                    else {
                        *(*(matrix + i) + j) = 0;
                    }
                }
            }

            double* res1 = multiply();
            showMat(res1);


            break;
        case 'h':
            double s1 = 0;
            cout << "Enter sh : ";
            cin >> s1;

            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++) {
                    if (i == j)
                    {
                        *(*(matrix + i) + j) = s1;
                    }
                    else {
                        *(*(matrix + i) + j) = 1;
                    }
                }
            }

            double* res2 = multiply();
            showMat(res2);
            break;
        case 'r':

            *(*(matrix + 0) + 0) = cos(p.getX() / p.getY());
            *(*(matrix + 0) + 1) = -sin(p.getX() / p.getY());
            *(*(matrix + 1) + 0) = sin(p.getX() / p.getY());
            *(*(matrix + 1) + 1) = cos(p.getX() / p.getY());

            double* res3 = multiply();
            showMat(res3);
            break;
        default:
            break;
        }

    }
    ~TransformationMatrix() {
        for (int i = 0; i < r; i++)
        {
            delete[] *(matrix + i);
        }
        delete[] matrix;
    }
};

#endif