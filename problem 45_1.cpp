#include <iostream>

using namespace std;

enum enMonthYear {January=1, February=2, march=3, April=4, May=5, June=6, July=7,
 August=8, September=9, October=10, November=11 ,December=12};


float ReadPositiveNumber(string message,int from,int to)
{
    float number;
    do{
        cout<<message<<endl;
    cin>>number;

    }while(number<from || number>to);

    return number;
}

enMonthYear  ReadMonthYear()
{

    return  (enMonthYear) ReadPositiveNumber("please enter month of year :??",1,12);
}

string  GetMonthWeek(enMonthYear Month)
{
    switch(Month)
    {
       case  enMonthYear ::January:
         return "January";


       case  enMonthYear ::February:
         return "February";


       case  enMonthYear ::march:
         return "march";


       case enMonthYear::April:
         return "April";


       case enMonthYear :: May:
         return " May";


       case  enMonthYear ::June:
         return "June";


       case enMonthYear ::July:
         return "July";

         case enMonthYear ::August:
         return "August";


         case enMonthYear ::September:
         return "September";

         case enMonthYear ::October:
         return "October";

         case enMonthYear ::November:
         return "November";


         case enMonthYear ::December:
         return "December";
        default :
        return "not a month year";
    }
}


int main()
{
  cout<< GetMonthWeek(ReadMonthYear());
    return 0;
}
