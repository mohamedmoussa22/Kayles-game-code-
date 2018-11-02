#include "Complex.h"
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


Complex::Complex(double a,double b):real(a),imaginary(b){

}
Complex::Complex(double r):real(r){
    imaginary = 0;

}
Complex::Complex(){
    imaginary = 0;
    real = 0;

}

ostream& operator<< (ostream& out,const Complex& os ){
    out<<os.real;
    if(os.imaginary>=0)
        out<<"+";
    out<<os.imaginary<<"i"<<endl;
    return out;
}

istream& operator>>(istream& in,Complex& os){
    in>>os.real;
    in>>os.imaginary;
    return in;
}

bool Complex:: operator== (const Complex com){
    if(real == com.real && imaginary == com.imaginary)
        return true;
    else
        return false;
}

Complex Complex::operator+ (const Complex com){
    double real_t=0;
    double imaginary_t=0;
    real_t = real+com.real;
    imaginary_t = imaginary+com.imaginary;
    Complex new_com(real_t,imaginary_t);
    return new_com;
}

Complex Complex::operator- (const Complex com){
    double real_t=0;
    double imaginary_t=0;
    real_t = real-com.real;
    imaginary_t = imaginary-com.imaginary;
    Complex new_com(real_t,imaginary_t);
    return new_com;
}

Complex Complex::operator* (const Complex com){
    double real_t=0;
    double imaginary_t=0;
    real_t = real*com.real-imaginary*com.imaginary;
    imaginary_t =  real*com.imaginary+imaginary*com.real;
    Complex new_com(real_t,imaginary_t);
    return new_com;
}

int main(){



return 0;
}
