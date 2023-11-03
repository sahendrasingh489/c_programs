// program showing the concept of switch control statement

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int code,a,b;
    cout<<"Enter values of a and b : ";
    cin>>a>>b;

    cout<<"\n--Select Code --\n";
    cout<<"1 for add\n";
    cout<<"2 for sub\n";
    cout<<"3 for exit\n";

    cout<<"Enter code : ";
    cin>>code;

    switch(code){
        case 1 : cout<<"sum : "<<a+b<<endl;
                    break;
        case 2 : cout<<"sub : "<<a-b<<endl;
                    break;
        case 3 : cout<<"Visit Again";
                    exit(0);
        default : cout<<"Invalid selection";
                    break;
    }
}