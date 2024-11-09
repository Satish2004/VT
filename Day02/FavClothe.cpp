// #include <iostream>
// using namespace std;
// int main()
// {
//     string color;
//     int result = 0;
//     cout << "Which one is better for me!!" << endl;
//     cin >> color;

//     if (color == "yellow")
//     {
//         result = 1;
//     }
//     else if (color == "Blue")
//     {
//         result = 2;
//     }
//     else if (color == "green")
//     {
//         result = 3;
//     }

//     switch (result)
//     {
//     case 1:
//         cout << "Yellow is not perfect for me";
//         break;
//     case 2:
//         cout << "blue is not perfect for me";
//         break;
//     case 3:
//         cout << "green is  perfect for me";
//         break;
//     default:
//         cout << "invalid color";
//     }
//     return 0;
// }

// // also we done like this in the form of arr[]
// // string color
// // char a = char[0];
// // and then we can initialize using ==> "array of character";


// // case 'R' :
// // print -> "any color"


#include <iostream>
using namespace std;
int main(){
string color;
cout << "Which one is better for me!!" << endl;
    cin >> color;

switch(color[0])
{
    case 'r':
    cout<<"red"<<endl;
    break;

    // we can initialize the multiple color basse on the array
     case 'b':
    cout<<"black"<<endl;  // only for b-> black 
    break;
     case 'y':
    cout<<"yellow"<<endl;
    break; 
    // but in this case having the some problem that when i am put the color as the same letter then code is stuck;


}
return 0;
}

// also use enum data type like an array {monday, tuesday.......};
//with the help of enum we can done!