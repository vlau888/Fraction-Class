//FractionTest.cpp - Main File
#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
    Fraction r1(3,4);
    r1.print();
    r1.printFloat();
    cout << " " << endl;
    
    Fraction r2(5,6);
    r2.print();
    r2.printFloat();
    cout << " " << endl;
    
    cout <<"Addition: " << endl;
    Fraction ans = r1.add(r2);
    ans.print();
    ans.printFloat();
    cout << " " << endl;
    
    cout <<"Subtraction: " << endl;
    ans = r1.sub(r2);
    ans.print();
    ans.printFloat();
    cout << " " << endl;
    
    cout <<"Multiplication: " << endl;
    ans = r1.mult(r2);
    ans.print();
    ans.printFloat();
    cout << " " << endl;
    
    cout <<"Division: " << endl;
    ans = r1.divide(r2);
    ans.print();
    ans.printFloat();
    cout << " " << endl;
    
    return 0;
};
