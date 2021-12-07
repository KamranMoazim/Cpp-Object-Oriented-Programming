#include <iostream>

using namespace std;

void addTwoArrays(int ar1[3][3], int ar2[3][3], int ar3[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++) {
            ar3[i][j] = ar1[i][j] + ar2[i][j];
        }
    }
}

void subtractTwoArrays(int ar1[3][3], int ar2[3][3], int ar3[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            ar3[i][j] = ar1[i][j] - ar2[i][j];
        }
    }
}

void multiplyTwoArrays(int ar1[3][3], int ar2[3][3], int ar3[3][3]) {
    int tempSum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++)
            {
                ar3[i][j] += ar1[i][k] * ar2[k][j];
            }
        }
    }
}

void displayArray(int ar[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << ar[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int array2D1[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int array2D2[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int array2D3[3][3] = {  };

    addTwoArrays(array2D1, array2D2, array2D3);

    displayArray(array2D1);
    cout << endl;

    displayArray(array2D2);
    cout << endl;

    displayArray(array2D3);
    cout << endl;

    subtractTwoArrays(array2D1, array2D2, array2D3);

    displayArray(array2D3);
    cout << endl;

    multiplyTwoArrays(array2D1, array2D2, array2D3);

    displayArray(array2D3);
    cout << endl;



    // 1D Arrays    ******************************************************************  --------------------->
    //int* array1D;
    //int cols;
    //cout << "Enter Number of Cols : ";
    //cin >> cols;
    //array1D = new int[cols];
    //for (int i = 0; i < cols; i++)
    //{
    //    *(array1D+i) = i + 1;
    //    cout << *(array1D + i) << "\t";
    //}
    //delete[]array1D;

    // 2D Arrays    ******************************************************************  --------------------->
    //int** array2D;
    //int cols, rows;
    //cout << "Enter Number of Cols : ";
    //cin >> cols;
    //cout << "Enter Number of Rows : ";
    //cin >> rows;
    //array2D = new int* [rows];
    //for (int i = 0; i < rows; i++)
    //{
    //    *(array2D+i) = new int[cols];
    //}
    //
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++) {
    //        *(*(array2D + i) + j) = j + 1;
    //        cout << *(*(array2D + i) + j) << "\t";
    //    }
    //    cout << endl;
    //}
    //for (int i = 0; i < rows; i++)
    //{
    //    delete[] *(array2D + i);
    //}
    //delete[] array2D;

    // 3D Arrays    ******************************************************************  --------------------->
    //int*** array3D;
    //int cols, rows, tables;
    //cout << "Enter Number of Cols : ";
    //cin >> cols;
    //cout << "Enter Number of Rows : ";
    //cin >> rows;
    //cout << "Enter Number of Tables : ";
    //cin >> tables;
    //array3D = new int** [tables];
    //for (int i = 0; i < tables; i++)
    //{
    //    *(array3D + i) = new int*[rows];
    //}
    //for (int i = 0; i < tables; i++)
    //{
    //    for (int j = 0; j < rows; j++)
    //    {
    //        *(*(array3D + i) + j) = new int[cols];
    //    }
    //}
    //for (int i = 0; i < tables; i++)
    //{
    //    for (int j = 0; j < rows; j++)
    //    {
    //        for (int k = 0; k < cols; k++) {
    //            *(*(*(array3D + i) + j) + k) = k + 1;
    //            cout << *(*(*(array3D + i) + j) + k) << "\t";
    //        }
    //        cout << endl;
    //    }
    //    cout << endl;
    //}
    //for (int i = 0; i < tables; i++)
    //{
    //    for (int j = 0; j < rows; j++)
    //    {
    //        delete[] *(*(array3D + i) + j);
    //    }
    //}
    //for (int i = 0; i < tables; i++)
    //{
    //    delete[] *(array3D+i);
    //}
    //delete[] array3D;

    // Transpose Arrays    ******************************************************************  --------------------->
    //const int rows = 3;
    //const int cols = 4;
    //int matrix[rows][cols] = {
    //    {1,2,3,4},
    //    {2,5,6,7},
    //    {4,8,9,0}
    //};
    //int TransMatrix[cols][rows];
    //for (int i = 0; i < rows; ++i) 
    //{
    //    for (int j = 0; j < cols; ++j) 
    //    {
    //        TransMatrix[j][i] = matrix[i][j];
    //    }
    //}
    //for (int i = 0; i < cols; i++)
    //{
    //    for (int j = 0; j < rows; j++)
    //    {
    //        cout << TransMatrix[i][j] << "\t";
    //    }
    //    cout << endl;
    //}


    return 0;
}
