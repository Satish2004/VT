#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<string> Usa;

    Usa.push_back("south calfornia");
    Usa.push_back("NEW yORK");
    Usa.push_back("iNDiana");
    Usa.push_back("Minnesota");
    Usa.push_back("Oregon");

    for (int i = 0; i < Usa.size(); i++)
    {
        cout << Usa[i] << " " << endl;
    }

    

//   return 0;
}