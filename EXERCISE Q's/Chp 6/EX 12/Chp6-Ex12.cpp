#include <iostream>

using namespace std;

struct fractionIn {
    char userOpra;
    int a;
    int b;
    int c;
    int d;
};
struct fractionOut {
    double origDenom;
    double origNumer;
    double denom;
    double numer;
    double gcd;
};

class Fractions {
private:
    fractionIn inp;
    fractionOut out;
public:
    Fractions(fractionIn input){
        inp.a = input.a;
        inp.b = input.b;
        inp.c = input.c;
        inp.d = input.d;
        inp.userOpra = input.userOpra;
    }
    //void addition(fractionIn inp, fractionOut out) {
    void addition() {
        out.origNumer = (inp.a * inp.b + inp.b * inp.c);
        out.origDenom = (inp.b * inp.d);
    }
    //void subtraction(fractionIn inp, fractionOut out) {
    void subtraction() {
        out.origNumer = (inp.a * inp.b - inp.b * inp.c);
        out.origDenom = (inp.b * inp.d);
    }
    //void multiplicatio(fractionIn inp, fractionOut out) {
    void multiplication() {
        out.origNumer = (inp.a * inp.c);
        out.origDenom = (inp.b * inp.d);
    }
    void multiplication(double a, double b, double c, double d) {
        double gc = gcd((a * c), (b * d));
        cout << (a * c) / gc << "/" << (b * d) / gc << "\t";
    }
    //void division(fractionIn inp, fractionOut out) {
    void division() {
        out.origNumer = (inp.a * inp.d);
        out.origDenom = (inp.b * inp.c);
    }

    void gcd() {
        double nume = out.origNumer;
        double denom = out.origDenom;
        double temp;
        while (nume != 0)
        {
            if (nume < denom)
            {
                temp = nume;
                nume = denom;
                denom = temp;
            }
            nume = nume - denom;
        }
        // gcd ---> Greatest Common Divisor
        out.gcd = denom;
        // to covert fraction to lowest form
        out.origNumer = out.origNumer / out.gcd;
        out.origDenom = out.origDenom / out.gcd;
    }
    double gcd(double nume, double denom) {
        double temp;
        while (nume != 0)
        {
            if (nume < denom)
            {
                temp = nume;
                nume = denom;
                denom = temp;
            }
            nume = nume - denom;
        }
        return denom;
    }

    void showAllCombinations() {

        // for printing most top line
        cout << "\t";
        for (int i = 1; i <= out.origDenom - 1; i++)
            cout << i << "/" << out.origDenom << "\t";
        cout << endl;

        for (int i = 1; i <= out.origDenom - 1; i++)
        {
            out.numer = i;
            out.denom = out.origDenom;
            
            // for printing most left line
            cout << i << "/" << out.origDenom << "\t";

            for (int i = 1; i <= out.origDenom - 1; i++)
            {
                //cout << i << "/" << out.origDenom << "\t";
                multiplication(out.numer, out.denom, i, out.origDenom);
            }
            cout << endl;
        }
    }
};





int main()
{
    ////int a, b, c, d;
    //fractionIn inp;
    ////double numer, denom;
    //fractionOut out;

    //char opera = '/';;

    //cout << "Enter a/b operator c/d : ";
    //cin >> inp.a >> opera >> inp.b >> inp.userOpra >> inp.c >> opera >> inp.d;

    //cout << inp.a << endl;
    //cout << inp.b << endl;
    //cout << inp.userOpra << endl;
    //cout << inp.c << endl;
    //cout << inp.d << endl;
    
    fractionIn frIn;
    frIn.a = 1;
    frIn.b = 2;
    frIn.c = 1;
    frIn.d = 3;
    frIn.userOpra = '/';

    Fractions fr(frIn);

    fr.multiplication();

    fr.gcd();

    fr.showAllCombinations();
    
    return 0;
}
