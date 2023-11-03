// program showing the concept of string

#include<iostream>
#include<string.h>
using namespace std;

void getUpperCase(char str[]){
   int length = strlen(str);
   for(int i=0;i<length;i++){
    if(str[i]>=97 && str[i]<=122)
        str[i]-=32;
   }
   cout<<"String in upper case : "<<str<<endl;
}
int main(){
    char str[50];
    cout<<"Enter string : ";
    cin.getline(str,50);   
    getUpperCase(str);
}