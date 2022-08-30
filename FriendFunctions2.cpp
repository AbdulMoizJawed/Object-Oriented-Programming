#include <iostream>
using namespace std;

// class Y;

// class X{
//     int data;
//     public:
//     void setValue(int value){
//         data = value;
//     };
//     friend void add(X, Y);
// };

// class Y{
//     int num;
//     public:
//     void setValue(int value){
//         num = value;
//     };
//     friend void add(X, Y);

// };

// void add (X o1, Y o2){
//     cout<<"summing data of X and Y object gives: "<< o1.data + o2.num <<endl;
// };
class C2;
class C1
{
    int value1;
    friend void exchange(C1 & ,C2&);

public:
    void indata(int a)
    {
        value1 = a;
    }
    void display(void)
    {
        cout << value1;
    }
};


class C2
{
    int value2;
    friend void exchange(C1 & ,C2&);


public:
    void indata(int a)
    {
        value2 = a;
    }
    void display(void)
    {
        cout << value2;
    }
};

void exchange(C1 &x , C2 &y){
    int tmp = x.value1;
    x.value1 = y.value2;
    y.value2 = tmp;
}

int main()
{
    // X a1;
    // a1.setValue(3);
    // Y b1;
    // b1.setValue(10);
    // add(a1,b1);


    C1 oc1;
    C2 oc2;

    oc1.indata(22);
    oc2.indata(16);
    exchange(oc1,oc2);


    cout<<" the value after exchange c1 ";
    oc1.display();
    cout<<" the value after exchange c2 ";
    oc2.display();

    return 0;
}