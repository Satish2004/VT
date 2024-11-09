#include <iostream>
#include<cstring>
void toUpperCAse(char word[], int n){
    for(int i =0; i<n; i++){
        char ch = word[i];
        if(ch >='A' && ch<='Z'){
            continue;
        }
        else{
           word[i]=  ch -'a'+'A';
        }
    }
}

using namespace std;
int main(){
char word[] ="satish";
toUpperCAse(word, strlen(word));
cout<<word;
return 0;
}