#include <iostream>
#include <cmath>
using namespace std;

int ReadNum(float& A,float& d)
{
    cout<<"enter the num 1 :"<<endl;
    cin>>A;

     cout<<"enter the num 2 :"<<endl;
    cin>>d;


}
 float RectangleAreaBySideAndDiagonal(float A,float d)
 {
     float area;
     area=A*sqrt(pow(d,2)-pow(A,2));
     return area;

 }

 void  Printnumbers(float area)
 {
     cout<<"the area is :"<<area<<endl;



 }

int main()
{
    float A,d;
    ReadNum( A,d);
    Printnumbers(RectangleAreaBySideAndDiagonal( A,d));
    return 0;
}
