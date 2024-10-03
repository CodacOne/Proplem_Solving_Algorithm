#include <iostream>

using namespace std;

enum enDayOfWeek {sat=7,sun=1,mon=2,tue=3,wed=4,thu=5,fri=6};


float ReadPositiveNumber(string message,int from,int to)
{
    float number;
    do{
        cout<<message<<endl;
    cin>>number;

    }while(number<from || number>to);

    return number;
}

enDayOfWeek  ReadDayWeek()
{

    return  (enDayOfWeek) ReadPositiveNumber("please enter day number :??",1,7);
}

string  GetDayOfWeek(enDayOfWeek Day)
{
    switch(Day)
    {
       case  enDayOfWeek ::sat:
         return "Saturday";


       case  enDayOfWeek ::sun:
         return "Sunday";


       case  enDayOfWeek ::mon:
         return "Monday";


       case  enDayOfWeek ::tue:
         return "Tuesday";


       case  enDayOfWeek ::wed:
         return "Wednesday";


       case  enDayOfWeek ::thu:
         return "Thaturday";


       case  enDayOfWeek ::fri:
         return "Friday";
        default :
        return "not a week day";
    }
}


int main()
{
  cout<< GetDayOfWeek(ReadDayWeek());
    return 0;
}
