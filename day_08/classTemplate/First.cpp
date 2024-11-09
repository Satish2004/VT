
// class template using template variable====>



#include <iostream>
#include <vector>
using namespace std;
template <typename T>
class Box
{
private:
    T value;

public:
    Box(T value)
    {
        this->value = value;
    }

    T getValue()
    {
        return this->value;
    }
};

int main()
{
Box<int> intBox = Box<int>(123);
cout<<"Integer value : "<<intBox.getValue()<<endl;

Box<double> doubleBox = Box<double>(123.34);
cout<<"double value : "<<doubleBox.getValue()<<endl;

Box<string> stringBox = Box<string>("hello world");
cout<<"String value : "<<stringBox.getValue()<<endl;



    return 0;
}