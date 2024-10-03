#include <iostream>
#include <cmath>
using namespace std;

int ReadCircumference()
{  float L;
    cout<<"enter the Circumference:"<<endl;
    cin>>L;
   return L;


}
 float CircleAreaAlongTheCircumference(float L)
 {
     float area, PI=3.14;

     area=pow(L,2)/(4*PI);
     return area;

 }

 void  PrintResults(float area)
 {
     cout<<"the area is :"<<area<<endl;



 }

int main()
{

    PrintResults(CircleAreaAlongTheCircumference(ReadCircumference()));
    return 0;
}
