#include <iostream>
#include<string>
using namespace std;

enum Day { MONDAY , TUESDAY , WEDNESDAY ,THURSDAY, FRIDAY , SATURDAY , SUNDAY };


int main(){
Day day;
cout<<"enter the day"<<endl;
// std::cin>>day;
switch (day)
{
case MONDAY:
    cout<<"Monday";
    break;

    case TUESDAY:
    cout<<"TUESDAY";
    break;

    case WEDNESDAY:
    cout<<"WEDNESDAY";
    break;

    case THURSDAY:
    cout<<"THURSDAY";
    break;
    
    case FRIDAY:
    cout<<"FRIDAY";
    break;
    
    case SATURDAY:
    cout<<"SATURDAY";

    break;
    
    case SUNDAY:
    cout<<"SUNDAY";
    break;


default:
cout<<"you not enter the day";
    break;
}


return 0;
}