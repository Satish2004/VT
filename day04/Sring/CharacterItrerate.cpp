#include <iostream>
#include <string>
#include <cstring>
void toLowerCAase(char word[], int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = word[i];
        if (ch >= 'a' && ch <= 'z')
        {
            continue;
        } // pos --> means  ch -'a'
          // to finding the lower case we will do ch -'A' +'a'
          // to finding the uper case we will do ch - 'a' +'A'  --> just as an opposite of lower case
        else
        {
            word[i] = ch - 'A' + 'a';
        }
    }
}
void toUpperCAse(char word[], int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = word[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            continue;
        }
        else
        {
            word[i] = ch - 'a' + 'A';
        }
    }
}

using namespace std;
int main()
{

    char word[60];
    cout<<"your string ";
    cin.getline(word, 60);
    // toLowerCAase(word, strlen(word));
    // toUpperCAse(word, strlen(word));
   

    
    cout<<word;

    cout << word;
    return 0;
}
