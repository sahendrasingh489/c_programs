// program showing the concept of class
#include<iostream>
using namespace std;
class Demo{
    public:
        void add(int a,int b){
            cout<<"Addition : "<<a+b<<endl;
        }
        void sub(int a,int b){
            cout<<"Subtraction : "<<a-b<<endl;
        }
        void mul(int a,int b){
            cout<<"Multiplication : "<<a*b<<endl;
        }
};
int main(){
    int a,b;
    cout<<"Enter values of a and b : ";
    cin>>a>>b;
    Demo obj;
    obj.add(a,b);
    obj.sub(a,b);
    obj.mul(a,b);
}