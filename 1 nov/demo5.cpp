// program to swap two numbers

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter values of a and b : ";
    cin>>a>>b;

    cout<<"Before Swapping : "<<endl;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout<<"After Swapping : "<<endl;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;
}

/*
a = 4 (100)
b = 5 (101)

    a = a ^ b
    b = a ^ b
    a = a ^ b

    a = a ^ b
       100^101

       100
      ^101
      -----
    a =001

    b = a ^ b
      001 ^ 101

      001
     ^101
     -----     
    b=100

    a = a ^ b
       001^ 100

       001
      ^100
      ----
     a=101
 
 a = 101 (5)
 b = 100 (4)
*/
