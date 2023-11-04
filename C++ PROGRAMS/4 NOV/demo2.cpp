// program showing the concept of class
#include<iostream>
using namespace std;
class Demo{
    private:
        int a,b;
    public:
        void setData(int a,int b){
            this->a=a;
            this->b=b;
        }
        void add(){
            cout<<"Addition : "<<a+b<<endl;
        }
        void sub(){
            cout<<"Subtraction : "<<a-b<<endl;
        }
        void mul(){
            cout<<"Multiplication : "<<a*b<<endl;
        }
};
int main(){
    int a,b;
    cout<<"Enter values of a and b : ";
    cin>>a>>b;
    
    Demo obj;
    obj.setData(a,b);
    obj.add();
    obj.sub();
    obj.mul();
}