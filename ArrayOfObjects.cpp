#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setData(void)
    {
        salary = 1000;
        cout << "Enter Id of This Employee" << endl;
        cin >> id;
    };
    void getData(void)
    {
        cout << "The Id of the Employee is " << id << endl;
    };
};

int main()
{
    Employee mycompany[3];

    for (int i = 0; i < 3; i++)
    {
        mycompany[i].setData();
        mycompany[i].getData();
    };

    return 0;
}