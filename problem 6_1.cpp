#include <iostream>

using namespace std;

struct stInfoName{

  string firstName;
  string lastName;

};



  stInfoName readFullName()
 {   stInfoName info;
     cout<<"pls,enter the first name :"<<endl;
     cin>>info.firstName;

      cout<<"pls,enter the last name :"<<endl;
     cin>>info.lastName;

     return info;

 }


 string getFullName(stInfoName info)
 {
    string fullName;
     fullName=info.firstName+" "+info.lastName;
      return fullName;
 }



 void printFullName(string fullName)
 {
     cout<<"your full name is :"<<fullName<<endl;


 }



int main()
{
   printFullName(getFullName(readFullName()));
    return 0;
}
