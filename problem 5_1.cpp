#include <iostream>

using namespace std;
struct stInfo
{
    int age;
    bool HasDrivingLicnese;
     bool HasRecommendation;
};

 stInfo ReadInfo()
 {
    stInfo info;
    cout<<"enter your age :"<<endl;
    cin>>info.age;

     cout<<"Do you have driver licnese :"<<endl;
    cin>>info.HasDrivingLicnese;

     cout<<"Do you a Recommendation  :"<<endl;
    cin>>info.HasRecommendation;
     return info;
 }


  bool isAccepted( stInfo info)
  {
      if(info.HasRecommendation)
      {
          return 1;
      }
     else
     {
       return (info.age>22 &&info.HasDrivingLicnese);
     }

  }


   void PrintResult( stInfo info)
   {
      if(isAccepted(info))
     {

      cout<<"Hired"<<endl;  }

     else
     {
        cout<<"Rejected"<<endl;
     }

   }



int main()
{
    PrintResult(ReadInfo());
    return 0;
}
