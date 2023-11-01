// program to find out area

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
 double r,area;
 const double PI = 3.14;
 
 cout<<"Enter radius : ";
 cin>>r;

 area = PI * r * r;
 cout<<"Area of circle : "<<area<<endl;
 cout<<"Area of circle : "<<setprecision(3)<<area<<endl;
 cout<<"Area of circle : "<<fixed<<setprecision(3)<<area<<endl;
}
