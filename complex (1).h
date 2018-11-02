#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;


class Complex
{
    public:
        Complex(double a,double b);//constructor to set real and imaginary numbers
        Complex(double real_part);//constructor to set real number and imaginary is equal to zero
        Complex();//real and imaginary numbers are equal to zero
        friend ostream& operator<< (ostream& out,const Complex& os); //Print the complex number
        friend istream& operator>>(istream& in,Complex& os); //allow user to input values of complex number
        bool operator== (const Complex com); //True if the complex numbers are equal
        Complex operator+ (const Complex com); //provide a method to add complex number
        Complex operator- (const Complex com); //provide a method to subtract complex numbers
        Complex operator* (const Complex com); //Provide a method to multiply complex numbers
    private:
        double real,imaginary;
};

#endif // COMPLEX_H
