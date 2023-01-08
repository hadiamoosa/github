#include <iostream>
using namespace std;
bool isSymmetrical(int num); 
main()
{
	bool isTrue;
   	int num;


         cout<< "Enter 3 digit number: ";
	 cin>>num;

         isTrue = isSymmetrical(num);
         if (isTrue == true)
   { cout<<"Number is symmetrical"<<endl;
} 
       if (isTrue != true)
{cout<<"Number is non symmetrical";

}
}

bool isSymmetrical(int num)

{
  int q1 ,q2,r1;
  q1=num/10;
   r1=num%10;
   q2=q1/10;
    if (r1 == q2)
{    return true ;
}

	if (r1!=q2)
	{
  return false;
  }
 return 0;
}
    



