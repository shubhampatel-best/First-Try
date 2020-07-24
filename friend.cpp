#include<iostream>
using namespace std;

class Complex
{
    private:
        int real,imag;
        friend Complex sumComplex(Complex,Complex);
    public:
        Complex(void);
        Complex(int,int);
        void display();
};

Complex::Complex()
{
    real = 0;
    imag = 0;
}

Complex::Complex(int a,int b)
{
    real = a;
    imag = b;
}

void Complex::display()
{
    cout<<"Complex Number is: "<<real<<"+"<<imag<<"j."<<endl;
}

Complex sumComplex(Complex c1,Complex c2)
{
    Complex c3;
    c3 = Complex((c1.real+c2.real),(c1.imag+c2.imag));
    return c3; 
}

int main()
{
    Complex c1(10,5);
    Complex c2(5,8);
    // Complex c2 = Complex(5,8);
    c1.display();
    c2.display();

    Complex c3 = sumComplex(c1,c2);
    cout<<"The sum of Complex numbers is: "<<endl;
    c3.display();
    return 0;
}

/*

Complex sumComplex(Complex c1,Complex c2)
{
    Complex c3;
    c3 = Complex((c1.real+c2.real),(c1.imag+c2.imag));
    return c3; 
}

*/