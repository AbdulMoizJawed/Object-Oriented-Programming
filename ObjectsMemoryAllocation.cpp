#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; };
    void setPrice(void);
    void displayPrice(void);
};
void Shop::setPrice(void)
{
    cout << "Enter Id Of Your Item # " << counter + 1 << endl;
    cin >> itemId[counter];

    cout << "Enter Price Of Your Item" << endl;
    cin >> itemPrice[counter];
    counter++;
};

void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
};

int main()
{
    Shop myShop;
    myShop.initCounter();
    myShop.setPrice();
    myShop.setPrice();
    myShop.setPrice();
    myShop.displayPrice();

    return 0;
}