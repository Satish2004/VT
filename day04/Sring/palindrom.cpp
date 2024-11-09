#include <iostream>
#include <cstring>
using namespace std;

bool isPelindromFun(char word[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <end)
    {  // also we find using swap method
    // char temp = str[i];
        
        if (word[start] != word[end])
        {
            cout << word << " is Not valid palidrom" << endl;
             start++;
            end++;
            return false;
           
        }
        cout << word << " is valid palindrom" << endl;
        return true;
        
    }

    
}
int main()
{
    char word[50];
    cout << "Enter your word =";
    cin.getline(word, 50);
    isPelindromFun(word, strlen(word));
    
    return 0;
}