#include <iostream>

using namespace std;
struct stInfo
{
    int age;
    bool HasDrivingLicnese;

};

 stInfo ReadInfo()
 {
    stInfo info;
    cout<<"enter your age :"<<endl;
    cin>>info.age;

     cout<<"Do you have driver licnese :"<<endl;
    cin>>info.HasDrivingLicnese;
     return info;
 }

   void PrintResult( stInfo info)
   {
       if(info.age>22 &&info.HasDrivingLicnese)
       {

       cout<<"Hired"<<endl;   }
       else
        cout<<"Rejected"<<endl;
   }



int main()
{
    PrintResult(ReadInfo());
    return 0;
}
