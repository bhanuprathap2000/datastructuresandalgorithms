//In C++, we can change the way operators work for user-defined types like objects and structures. This is known as operator overloading.

#include <iostream>

using namespace std;

class Complex
{
   
public:
 float real, imag;
    Complex(float real = 0,float imag=0){
        this->real = real;
        this->imag = imag;
    }
    // Overloading the + operator as member function we can as well do this using the friend keyword. write the code somewhere else.
    Complex operator+(const Complex &c){ //this method will be called when this operator is is used with the objects of this class are passed as parameters and the result is returned
        Complex temp;
        temp.real = this->real + c.real;
        temp.imag = this->imag + c.imag;
        return temp;
    }


};

        int main()
    {

        Complex c1(2,3);
        Complex c2(3,4);
        Complex c3;
        c3 = c1 + c2;// this is like c3 = c1.operator+(c2) behind the scene
        cout<<"Sum of two complex numbers is: "<<c3.real<<"+"<<c3.imag<<"i"<<endl;
        return 0;
    }