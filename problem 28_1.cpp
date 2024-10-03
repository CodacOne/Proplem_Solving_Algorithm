#include <iostream>

using namespace std;

enum enOddOrEven{odd=1,even=2};



int Readnumber(int n){

  cout<<"enter the number :"<<endl;
  cin>>n;
  return n;
}

enOddOrEven CheckOddOrEven(int n)
{
    if(n%2!=0)
    return enOddOrEven::odd;

    else
         return enOddOrEven::even;
}


void PrintFrom1ToN_UsingWhile(int n)
{  int i=1,sum=0;

   cout<<"sum Odd pranted using while statment :"<<endl;
    while(i<=n)
    {
       if(CheckOddOrEven(i)==enOddOrEven::odd)
       {
         sum+=i;
       }
        i++;
    }
 cout<<"sum"<<sum<<endl;

}


void  PrintFrom1ToN_UsingDo_While(int n)
{  int i=1,sum=0;

   cout<<"sum Odd pranted using dowhile statment :"<<endl;
    do{
         if(CheckOddOrEven(i)==enOddOrEven::odd) {
        sum+=i;  }
        i++;

    }while(i<=n);
    cout<<"sum"<<sum<<endl;
}

 void  PrintFrom1ToN_UsingFor(int n)
 {
   int sum=0;
     cout<<"sum Odd pranted using For statment :"<<endl;
     for(int i=1;i<=n;i++)
     {
       if(CheckOddOrEven(i)==enOddOrEven::odd)
       {
           sum+=i;
       }

     }
   cout<<"sum"<<sum<<endl;
 }

int main()
{
 int n=Readnumber(n);
   PrintFrom1ToN_UsingWhile(n);
  PrintFrom1ToN_UsingDo_While(n);
     PrintFrom1ToN_UsingFor(n);
    return 0;
}
