// program to swap two numbers

#include<iostream>
using namespace std;

namespace myspace1{
    int a = 100;
    void show(){
        cout<<"a inside myspace1 : "<<a<<endl;
    }
}

namespace myspace2{
    int a = 200;
    void show(){
        cout<<"a inside myspace2 : "<<a<<endl;
    }
}

//using namespace myspace2;
int main(){
   cout<<"a : "<<myspace1::a<<endl;
   cout<<"a : "<<myspace2::a<<endl;

    myspace1::show();
    myspace2::show();
}

