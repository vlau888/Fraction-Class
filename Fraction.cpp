//Fraction.cpp - CPP File
#include <iostream>
#include <iomanip>
#include "Fraction.h"
using namespace std;

int *Fraction::reducedForm (int numerator, int denominator)
{
    int a = numerator, b = denominator, c;
    int *ans = new int[2];
    while (a != 0)
    {
        c = a;
        a = b % a;
        b = c;
    }
    ans[0] = numerator / b;
    ans[1] = denominator / b;
        return ans;
        }
        
Fraction::Fraction(int anum, int adenom)
{
        int *reduced = reducedForm(anum, adenom);
        num = reduced[0];
        denom = reduced[1];
        delete reduced;
}
        
Fraction Fraction::add(const Fraction & r2)
{
        int numerator = (num * r2.denom) + (r2.num * denom);
        int denominator = denom * r2.denom;
        Fraction sum(numerator, denominator);
        return sum;
}
        
Fraction Fraction::sub(const Fraction & r2)
{
        int numerator = (num * r2.denom) - (r2.num * denom);
        int denominator = denom * r2.denom;
        Fraction sum(numerator, denominator);
        return sum;
}
    
Fraction Fraction::mult(const Fraction & r2)
{
        int numerator = (num * r2.num);
        int denominator = denom * r2.denom;
        Fraction sum(numerator, denominator);
        return sum;
}

Fraction Fraction::divide(const Fraction & r2)
{
        int numerator = num * r2.denom;
        int denominator = denom * r2.num;
        Fraction sum(numerator, denominator);
        return sum;
}
        
void Fraction::print()
{
        cout << num << "/" << denom << endl;
}

void Fraction::printFloat()
{
        double f = (double) num / denom;
        cout << fixed << setprecision(3) << f << endl;
}
