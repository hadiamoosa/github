#include <iostream>
#include <cmath>
using namespace std;
float calculateheight(float distance,float degrees);


main(){
float degree;
float base;
float height;
float distance;

cout<< "Enter base: ";
cin>>base;
cout<<"Enter angle: ";
cin>>degree;

calculateheight(base,degree);
height=calculateheight(base,degree);
cout<<height<< "height is";
}
float calculateheight(float distance,float degrees)
{
float  radians;
radians=57.2958;

float angle;
float height;

radians=degrees/radians;

angle=tan(radians);

height=angle * distance;

return height;





}

