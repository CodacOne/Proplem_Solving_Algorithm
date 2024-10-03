#include <iostream>
#include <cmath>
using namespace std;

struct stTaskDuration
 {  int  NumberOfDays,NumberOfMinutes,NumberOfHours,NumberOfSecondes;

};


float ReadPositiveNumber(string message)
{
    float number;
    do{
        cout<<message<<endl;
    cin>>number;

    }while(number<=0);

    return number;
}


stTaskDuration SecondsToTaskDuration(int TotalSeconds )
{
    stTaskDuration TaskDuration;

    const int SecondsPerDays=60*60*24;
    const int SecondsPerHours=60*60;
    const int SecondsPerMinut=60;

    int Remainder=0;
    TaskDuration.NumberOfDays=floor(TotalSeconds/SecondsPerDays);
    Remainder=TotalSeconds%SecondsPerDays;
    TaskDuration.NumberOfHours=floor(Remainder/SecondsPerHours);
     Remainder=Remainder%SecondsPerHours;
      TaskDuration.NumberOfMinutes=floor( Remainder/SecondsPerMinut);
      Remainder=Remainder%SecondsPerMinut;
      TaskDuration.NumberOfSecondes= Remainder;

      return TaskDuration;
}



void printTaskDurationDetails( stTaskDuration TaskDuration )
{
    cout<<"\n";
    cout<<TaskDuration.NumberOfDays<<":"<<TaskDuration.NumberOfHours<<":"<<
    TaskDuration.NumberOfMinutes<<":"<<TaskDuration.NumberOfSecondes<<endl;


}


int main()
{
   int TotalSeconds=ReadPositiveNumber("please Enter total secon :");
   printTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));
    return 0;
}
