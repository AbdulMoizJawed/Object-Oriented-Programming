#include <iostream>
using namespace std;

class complexNumbers
{
    int a, b;

public:
    void setData(int input1, int input2)
    {
        a = input1;
        b = input2;
    }
    void getData(void)
    {
        cout << "the complex number is " << a << " + " << b << "i" << endl;
    }
    void setDataBySumFromOtherObjects(complexNumbers obj1, complexNumbers obj2)
    {
        a = obj1.a + obj2.a;
        b = obj1.b + obj2.b;
    }
};

int main()
{
    complexNumbers x, y, z;
    x.setData(1, 2);
    x.getData();

    y.setData(4, 8);
    y.getData();
    
    z.setDataBySumFromOtherObjects(x, y);
    z.getData();
    
    return 0;
}