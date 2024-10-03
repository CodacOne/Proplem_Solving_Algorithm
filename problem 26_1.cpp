#include <iostream>

using namespace std;

int Readnumber(int n){

  cout<<"enter the number :"<<endl;
  cin>>n;
  return n;


}

void PrintFrom1ToN_UsingWhile(int n)
{  int i=1;

   cout<<"Range pranted using while statment :"<<endl;
    while(i<=n)
    {
       cout<<i<<endl;
        i++;
    }


}

void  PrintFrom1ToN_UsingDo_While(int n)
{  int i=1;

   cout<<"Range pranted using dowhile statment :"<<endl;
    do{
        cout<<i<<endl;
        i++;

    }while(i<=n);

}

 void  PrintFrom1ToN_UsingFor(int n)
 {

     cout<<"Range pranted using For statment :"<<endl;
     for(int i=1;i<=n;i++)
     {

         cout<<i<<endl;
     }

 }

int main()
{
 int n=Readnumber(n);
   PrintFrom1ToN_UsingWhile(n);
  PrintFrom1ToN_UsingDo_While(n);
     PrintFrom1ToN_UsingFor(n);
    return 0;
}
