#include <iostream>
// #include<string>

using namespace std;

int main()
{
    string word;
    cout << "enter the word";
    getline(cin, word);
    int count = 0;
    int maxChar=0;


    int n = word.length();
    for (int i = 0; i < n; i++)
    {
        if (word[i] == word[i + 1])
        // if(str.at(i) == str.at(i+1) <-- use;

        {
            count++;
        }
        

    }
    cout << "repeated character continuesly is  =" << count;
    //  cout << "repeated character continuesly is  =" <<maxChar;


    return 0;
}