#include <iostream>

using namespace std;

void ReadNumbers(int& num1,int& num2,int& num3)
{
    cout<<"enter the number 1:"<<endl;
     cin>>num1;

     cout<<"enter the number 2:"<<endl;
     cin>>num2;

     cout<<"enter the number 3:"<<endl;
     cin>>num3;


}
 int SumOf3Numbers(int num1,int num2,int num3)
 {
     return num1+num2+num3;



 }


 void PrintNumbers(int total)
 {
     cout<<total;


 }


int main()
{
   int num1,num2,num3;
   ReadNumbers(num1,num2,num3);
   PrintNumbers(SumOf3Numbers(num1,num2,num3));
    return 0;
}
