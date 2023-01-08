#include <iostream>
using namespace std;
int maximum(int num1,int num2);

main(){
int num1;
int num2;
int greater;
cout<<"Enter number 1: ";
cin>>num1;
cout<< "Enter number2: ";
cin>>num2;
greater=maximum(num1,num2);
cout<< greater << "is greater! "<<endl;
}

int maximum(int num1,int num2) 
{
	if(num1>num2)
	{
	return num1;
	}
	if(num2>num1)
	{  return num2;
	}

return 0;
}