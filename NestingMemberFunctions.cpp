#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;
    void chk_bin(void);

public:
    void read(void);
    void onesCompliment(void);
    void display(void);
};

void binary::read(void)
{
    cout << "Enter a Binary Number" << endl;
    cin >> s;
};

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format" << endl;
            exit(0);
        }
    }
};

void binary::onesCompliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }else 
        {
            s.at(i) = '0';
        }
    }
};

void binary::display(void)
{
    cout<<"Displaying the Binary Num"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
};

int main()
{
    // Nesting of Member Functions
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.onesCompliment();
    b.display();

    return 0;
}