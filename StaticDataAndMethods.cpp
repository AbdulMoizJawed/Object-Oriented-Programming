#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the Id" << endl;
        cin >> id;
        count++;
    };
    void getData(void)
    {
        cout << "The ID of this Employee is " << id << " and this is employee number " << count << endl;
    };
    static void getCount(void){
        cout<<"The value of count accessing fron the static method is "<< count<<endl;
    };
};

int Employee ::count; // Default value of static variable is 0

int main()
{
    Employee Abdul, Moiz, Jawed;
    // Moiz.id = 3
    Employee::getCount();
    Abdul.setData();
    Abdul.getData();
    Employee::getCount();

    Moiz.setData();
    Moiz.getData();
    Employee::getCount();

    Jawed.setData();
    Jawed.getData();
    Employee::getCount();

    return 0;
}