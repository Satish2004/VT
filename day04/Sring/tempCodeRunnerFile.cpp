#include <iostream>
#include<cstring>
#include<string>
 using namespace std;

 bool isReverse(char word[], int n){
    int start =0;
    int end =n-1;
    
      while(start<=end){
        // jb tak start chhotta hai  end se tb tk swaap krte jao
      swap(word[start], word[end]);
        start++;
        end++;
      }
      cout<<"your reverse number is ="<<word<<endl;
         return true;


        
    }

 


int main(){

char word[60];
cout<<"your word =";
cin.getline(word , 60);

isReverse(word , strlen(word));
return 0;
}