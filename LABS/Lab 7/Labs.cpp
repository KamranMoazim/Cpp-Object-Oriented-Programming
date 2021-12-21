#include <iostream>
#include <ctime>
//#include "Poly.h"

using namespace std;


class Polynomial {
private:
    int degree;
    int* coef;
public:
    Polynomial() {
        degree = 0;
        coef = NULL;
    }
    Polynomial(int d) {
        degree = d;
        coef = new int[degree + 1];
        for (int i = 0; i < degree+1; i++)
        {
            coef[i] = 0;
        }
    }
    Polynomial(const Polynomial& p) {
        if (coef != NULL)
        {
            delete[] coef;
            coef = NULL;
        }
        if (coef == NULL)
        {
            degree = p.degree;
            coef = new int[degree + 1];
            for (int i = 0; i < degree + 1; i++)
            {
                coef[i] = p.coef[i];
            }
        }
    }
    int* getCoef() {
        return coef;
    }
    int getDegree() {
        return degree;
    }
    void setCoef(int coefVal, int loc) {
        coef[loc] = coefVal;
    }
    void setDegree(int d) {
        degree = d;
        if (coef != NULL) {
            delete[] coef;
            coef = NULL;
        }
        if (coef == NULL)
        {
            coef = new int[degree + 1];
            for (int i = 0; i < degree + 1; i++)
            {
                coef[i] = 0;
            }
        }
    }
    void setPolynomial(int coefVal, int loc, int d=0) {
        if (coef != NULL)
        {
            coef[loc] = coefVal;
        }
        else if(coef == NULL)
        {
            degree = d;
            coef = new int[degree + 1];
            for (int i = 0; i < degree + 1; i++)
            {
                coef[i] = 0;
            }
            coef[loc] = coefVal;
        }
    }
    void display() {
        //for (int i = 0; i < degree+1; i++)
        for (int i = degree; i >= 0; i--)
        {
            cout << coef[i] << "x^" << i << "\t";
        }
        cout << endl;
    }
    ~Polynomial() {
        delete[] coef;
        coef = NULL;
    }

    friend Polynomial operator + (const Polynomial& pL, const Polynomial& pR) {
        Polynomial temP;
        if (pL.degree > pR.degree)
        {
            //cout << "pL.degree : " << pL.degree << endl;
            //cout << "pR.degree : " << pR.degree << endl;
            //temP.setDegree(pL.degree);
            temP.degree = pL.degree;
            temP.coef = new int[pL.degree + 1];
            for (int i = 0; i < pR.degree + 1; i++)
            {
                temP.coef[i] = pR.coef[i];
            }
            for (int i = 0; i < pL.degree + 1; i++)
            {
                temP.coef[i] += pL.coef[i];
            }
        }
        else
        {
            //cout << "pL.degree : " << pL.degree << endl;
            //cout << "pR.degree : " << pR.degree << endl;
            //temP.setDegree(pR.degree);
            temP.degree = pL.degree;
            temP.coef = new int[pL.degree + 1];
            for (int i = 0; i < pL.degree + 1; i++)
            {
                temP.coef[i] = pL.coef[i];
                //cout << "pL.coef[i] : " << temP.coef[i] << endl;
            }
            for (int i = 0; i < pR.degree + 1; i++)
            {
                temP.coef[i] += pR.coef[i];
                //cout << "pR.coef[i] : " << temP.coef[i] << endl;
            }
        }
        temP.display();
        return temP;
    }
    Polynomial& operator = (const Polynomial& p) {
        if (coef != NULL)
        {
            delete[] coef;
            coef = NULL;
        }
        if (coef == NULL)
        {
            degree = p.degree;
            coef = new int[degree + 1];
            for (int i = 0; i < degree + 1; i++)
            {
                coef[i] = p.coef[i];
            }
        }
        return *this;
    }
    friend void operator += (Polynomial& pL, const Polynomial& pR) {
        if (pL.degree >= pR.degree)
        {
            for (int i = 0; i < pL.degree + 1; i++)
            {
                if (i <= pR.degree)
                {
                    pL.coef[i] += pR.coef[i];
                }
            }
        }
        else
        {
            Polynomial tP = pL;

            if (pL.coef != NULL)
            {
                delete[] pL.coef;
                pL.coef = NULL;
            }
            if (pL.coef == NULL)
            {
                //pL.setDegree(pR.degree);
                pL.degree = pR.degree;
                pL.coef = new int[pR.degree + 1];
                for (int i = 0; i < pR.degree; i++)
                {
                    pL.coef[i] = pR.coef[i];
                }
                for (int i = 0; i <= tP.degree; i++)
                {
                    pL.coef[i] += tP.coef[i];
                }
            }
        }
    }
    friend bool operator == (Polynomial& pL, const Polynomial& pR) {
        bool cond = false;
        if (pL.degree == pR.degree)
        {
            for (int i = 0; i < pL.degree; i++)
            {
                if (pL.coef[i] != pR.coef[i])
                {
                    cond = false;
                    break;
                }
                else
                {
                    cond = true;
                }
            }
        }
        return cond;
    }
    friend bool operator > (Polynomial& pL, const Polynomial& pR) {
        bool cond = true;
        if (pL.degree > pR.degree)
        {
            cond = true;
        }
        else if (pL.degree < pR.degree)
        {
            cond = false;
        }
        else if (pL.degree == pR.degree)
        {
            cond = pL == pR;
        }
        return cond;
    }
};




int main()
{

    int size = 0, tempVal = 0;
    cout << "Enter highest degree for polynomial 1 : ";
    cin >> size;
    Polynomial p1(size);
    for (int i = 0; i < size+1; i++)
    {
        cout << "enter coef for x^" << i << " ";
        cin >> tempVal;
        p1.setPolynomial(tempVal, i);
    }
    p1.display();
    cout << "Enter highest degree for polynomial 2 : ";
    cin >> size;
    Polynomial p2(size);
    for (int i = 0; i < size + 1; i++)
    {
        cout << "enter coef for x^" << i << " ";
        cin >> tempVal;
        p2.setPolynomial(tempVal, i);
    }
    p2.display();
    Polynomial p3 = p1;
    p3.display();
    bool res = p2 == p3;
    cout << "p2 == p3 " << res << endl;
    res = p3 > p3;
    cout << "p2 > p3 " << res << endl;
    //Polynomial p3;
    p3 = p1 + p2;
    //p3 += p1;
    //p3.display();
    ////cout << "Fine" << endl;
    cout << "=======================" << endl;




    ////cout << "Fine" << endl;



    ////cout << "Fine" << endl;

    Polynomial p6(2), p7(4);
    p6.setPolynomial(2, 2);
    p6.setPolynomial(5, 1);
    p6.setPolynomial(5, 0);

    p7.setPolynomial(2, 3);
    p7.setPolynomial(6, 2);
    p7.setPolynomial(6, 1);
    p7.setPolynomial(9, 0);
    // 
    //p1.display();
    //p2.display();
    ////p3 = p1 + p2;
    ////p3.display();
    ////p2 += p1;
    ////p2.display();
    p6 += p2;
    p6.display();
    //bool res = p1 == p2;
    //cout << res << endl;
    //res = p2 > p1;
    ////res = p1 > p2;
    //cout << res;

    return 0;
}

