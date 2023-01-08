#include <iostream>
using namespace std;
char small(char valuea);
char capital(char valueA);
main(){
char alphabet;
char value;
char value2;


cout<< "Enter your character: ";
cin>> alphabet;

value=small(alphabet);
cout<<value;

value2=capital(alphabet);
cout<<value2;
}

char small(char valuea){

if (valuea>='a' && valuea>='z' )
{
return valuea;}
return 0;
}


char capital(char valueA){

if(valueA=='A' && valueA>='Z' )
{

return valueA;
}
return 0;

}


