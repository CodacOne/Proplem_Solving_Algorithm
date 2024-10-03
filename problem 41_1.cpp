#include <iostream>

using namespace std;

float ReadNumberOfHours(string message)
{
    float number;
    cout<<message<<endl;
    cin>>number;
    return number;
}


float ReadHoursToDays(float NumberOfHours)
{
    return NumberOfHours/24;

}

float ReadHoursToWeeks(float  HoursOfDays)
{

    return  HoursOfDays/7;

}

int main()
{
   float NumberOfHours=ReadNumberOfHours(" Please Enter unbers of hours :");
       float   HoursOfDays=ReadHoursToDays(NumberOfHours);
         float   HoursOfWeeks=ReadHoursToWeeks( HoursOfDays);
   cout<<"*****************"<<endl;
   cout<<"Number Of Hours ="<<NumberOfHours<<endl;
   cout<<"Hours Of Days = "<<HoursOfDays<<endl;
  cout<<"Hours Of Weeks="<< HoursOfWeeks<<endl;



    return 0;
}
