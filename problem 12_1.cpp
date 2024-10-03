#include <iostream>

using namespace std;

int ReadNum(int& num1,int& num2)
{
    cout<<"enter the num 1 :"<<endl;
    cin>>num1;

     cout<<"enter the num 2 :"<<endl;
    cin>>num2;


}
 int MaxOf2Numbers(int num1,int num2)
 {
     if(num1>num2)
     {

         return num1;
     }
   else
    {
    return num2;
   }

 }

 void  Printnumbers(int MaxOf2Numbers)
 {
     cout<<"The Numbers Of Max :"<<MaxOf2Numbers<<endl;;



 }

int main()
{
    int num1,num2;
    ReadNum(num1,num2);
    Printnumbers(MaxOf2Numbers(num1,num2));
    return 0;
}
