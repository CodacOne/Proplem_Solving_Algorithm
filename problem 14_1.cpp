#include <iostream>

using namespace std;

int ReadNum(int& num1,int& num2)
{
    cout<<"enter the num 1 :"<<endl;
    cin>>num1;

     cout<<"enter the num 2 :"<<endl;
    cin>>num2;



}
 int  myswap(int& num1,int& num2)
 {
     int t=num1;
     num1=num2;
     num2=t;



 }

 void  Printnumbers(int num1,int num2)
 {
     cout<<"num1="<<num1<<"\t"<<"num2="<<num2<<endl;



 }

int main()
{
    int num1,num2;
    ReadNum(num1,num2);
     cout<<"before the Swap"<< endl;
    Printnumbers(num1,num2);
    myswap( num1,num2);
    cout<<"after the Swap"<< endl;
    Printnumbers(num1,num2);
    return 0;
}
