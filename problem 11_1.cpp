#include <iostream>

using namespace std;

enum enMarks{pass=1,fail=2};

int  readMarks(int& mark1,int& mark2,int& mark3)
{
    cout<<"enter the mark 1 :"<<endl;
    cin>>mark1;


    cout<<"enter the mark 2 :"<<endl;
    cin>>mark2;


    cout<<"enter the mark 3 :"<<endl;
    cin>>mark3;
}
float sumMarks(int mark1,int mark2,int mark3)
{

    return (float)mark1+mark2+mark3;


}
float averageMarks(int mark1,int mark2,int mark3)
{
    return (float)sumMarks(mark1,mark2,mark3)/3;

}

enMarks checkMarks(float averageMarks)
{
    if( averageMarks>=50)
    {

        return enMarks::pass;
    }
    else {

        return enMarks::fail;
    }

}

void printMarks(float averageMarks)
{
    cout<<"your Average is :"<<averageMarks<<endl;

    if(checkMarks(averageMarks)== enMarks::pass)
    {
        cout<<"you Passed"<<endl;
    }
   else {
    cout<<"you Failed"<<endl;
   }

}

int main()
{
  int mark1,mark2,mark3;
  readMarks(mark1,mark2,mark3);
  printMarks(averageMarks(mark1,mark2,mark3));
  return 0;
}
