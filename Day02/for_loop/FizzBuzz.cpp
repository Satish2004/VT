#include <iostream>
using namespace std;
int main()
{
    int num =30;
    
 

    for (int num = 1; num<= 30; num++)
    { 
        
        if (num % 3 == 0 && num % 5 == 0)
     
     
        {
            cout <<num<< " = fizzBuzz"<<endl;;
        
        }


        else if (num % 3 == 0)
        {
            cout<< num<< "= fizz"<<endl;

        }
        else if (num % 5 == 0)
        {
            cout<<num << " = buzz"<<endl;
            
        }
       
      
    }
    return 0;
}