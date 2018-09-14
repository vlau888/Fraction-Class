//Fraction.h - Header File
#include <iostream>
using namespace std;

class Fraction
{
public:
    int *reducedForm (int num, int denmon);
    Fraction (int = 0, int = 0);
    Fraction add (const Fraction&);
    Fraction sub (const Fraction&);
    Fraction mult (const Fraction&);
    Fraction divide (const Fraction&);
    void print();
    void printFloat();
private:
    int num;
    int denom;
};
