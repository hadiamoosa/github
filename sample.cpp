#include <iostream>
using namespace std;
int sum(int num1,int num2);
main(){
int num1;
int num2;
int total;
cout<<"Enter number 1: ";
cin>>num1;
cout<< "Enter number2: ";
cin>>num2;
total=sum(num1,num2);
cout<< "Sum is: " <<total<<endl;

}
int sum(int num1,int num2)
{

int result=num1+num2;
return result;

}
