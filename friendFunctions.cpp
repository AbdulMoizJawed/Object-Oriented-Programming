#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setNumbers(int n1, int n2)
    {
        a = n1;
        b = n2;
    };

    friend Complex sumComplex(Complex o1, Complex o2);
    void printNumbers()
    {
        cout << "your Number is " << a << " + " << b << "i " << endl;
    };
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumbers(o1.a + o2.a, o1.b + o2.b);
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumbers(1, 4);
    c2.setNumbers(5, 8);
    c1.printNumbers();
    c2.printNumbers();

    sum = sumComplex(c1,c2);
    sum.printNumbers();

    return 0;
}