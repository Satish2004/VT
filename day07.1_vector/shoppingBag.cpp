#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // declarartion and assigning the value:--->

    vector<string> bag;
    vector<int> price;

    // adding the element
    bag.push_back("chocolate1");
    bag.push_back("chocolate12");
    bag.push_back("chocolate123");
    bag.push_back("chocolate1234");

    //  price.push_back(10);
    //     price.push_back(20);
    //     price.push_back(30);
    //     price.push_back(30);

    // for (int i = 0; i < price.size(); i++)
    // {
    //     cout << "enter the" << i << "price =";
    // }

    price.push_back(10);
    price.push_back(20);
    price.push_back(30);
    price.push_back(40);

    int tPrice = 0;
    for (int i = 0; i < price.size(); i++)
    {
        cout << price[i] << " " << endl;
    }

    // print all prices
    for (int i = 0; i < price.size(); i++)
    {
        tPrice += price[i];
    }
    cout << "total price  is =" << tPrice << " " << endl;

    /// print the prices

    return 0;
}
