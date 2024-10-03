#include <iostream>

using namespace std;

enum enPassFail{pass=1,fail=2};


float ReadMark(){
   float mark;
cout<<"enter the mark ,plz"<<endl;
cin>>mark;
return mark;


}

enPassFail CheckMark( float mark){
  if(mark>=50){
    return enPassFail::pass;
  }
 else {
    return enPassFail::fail;
 }


}

void PrintResults(float mark)
{ if(CheckMark(mark)==enPassFail::pass)
{
    cout<<"you passed "<<endl;
}
   else {

     cout<<"you failed "<<endl;
   }
}

int main()
{
   PrintResults(ReadMark());
    return 0;
}
