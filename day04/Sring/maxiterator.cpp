#include <iostream>
// #include<string>

using namespace std;

int main()
{
    string word;
    cout << "enter the word";
    getline(cin, word);
    int count = 0;
    int maxChar = 0;
    int result;

    int n = word.length();
    for (int i = 0; i < n; i++)
    {
        if (word[i] == word[i + 1])
        // if(str.at(i) == str.at(i+1) <-- use;

        {
            count++;

            while (maxChar < count)
            {
                maxChar = count;
             
                count = 0;
                   maxChar;
               

            }
        }
    }

    //  cout << "repeated character continuesly is  =" <<maxChar;
    cout << "maximum character is = " << maxChar+1;

    return 0;
}