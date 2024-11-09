// how to make a pair of template in the template class--->

#include <iostream>
#include <vector>
using namespace std;

template <typename T1, typename T2>
class Pair
{

private:
    T1 a;
    T2 b;

public:
    Pair(T1 a, T2 b)
    {
        this->a = a;
        this->b = b;
    }

    T1 getValue1()
    {
        cout<<a*b;
        
        // return this -> b;
    }

    T2 getValue2()
    {
        // return this ->a;
        cout<<a+b;
    }


    
    // T3 getValue3()
    // {
    //     // return this ->a;
    //     return this->b= a+b;
    // }
    
    // T4 getValue4()
    // {
    //     // return this ->a;
    //     return this->b= a+b;
    // }
};
int main()
{
    Pair<int, double> intDoublePair = Pair<int, double> (10,20.5);
    cout<<"First Value: "<<intDoublePair.getValue1()<<endl;
     cout<<"second Value: "<<intDoublePair.getValue2()<<endl;
    
    //   Pair<string ,char>stringCharPair = Pair<string,char> ("template", 'c');
    //   cout<<"First Value: "<<stringCharPair.getValue1()<<endl;
    //  cout<<"second Value: "<<stringCharPair.getValue2()<<endl;
    return 0;
}