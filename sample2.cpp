#include <iostream>
using namespace std;
float divide(int num1,int num2);

main(){
int num1;
int num2;
float total2;
cout<<"Enter number 1: ";
cin>>num1;
cout<< "Enter number2: ";
cin>>num2;
total2=divide(num1,num2);
cout<< "divide is: "<<total2<<endl;

}
float divide(int num1,int num2)
{
	float result2=num1/num2;
	return result2; 

}


