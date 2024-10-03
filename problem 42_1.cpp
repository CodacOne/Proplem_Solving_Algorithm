#include <iostream>

using namespace std;

struct stTaskDuration
 {  int  NumberOfDays,NumberOfMinutes,NumberOfHours,NumberOfSecondes;

};


float ReadPositiveNumber(string message)
{
    float number;
    cout<<message<<endl;
    cin>>number;
    return number;
}

stTaskDuration ReadTaskDuration()
{
    stTaskDuration  TaskDuration ;

  TaskDuration.NumberOfDays =ReadPositiveNumber("please Enter of days");
   TaskDuration.NumberOfHours= ReadPositiveNumber("please Enter of hours");
      TaskDuration.NumberOfMinutes= ReadPositiveNumber("please Enter of minutes");
        TaskDuration.NumberOfSecondes= ReadPositiveNumber("please Enter of secondes");
    return TaskDuration;
}


int TaskDurationInSecondes( stTaskDuration  TaskDuration)
{
    int TotalTaskDurationInSecondes=0;

 TotalTaskDurationInSecondes= TaskDuration.NumberOfDays*24*60*60+ TaskDuration.NumberOfHours*60*60
 + TaskDuration.NumberOfMinutes*60+TaskDuration.NumberOfSecondes;

    cout<<" Total Task Duration In Secondes ="<<endl;
    return  TotalTaskDurationInSecondes;

}

int main()
{
   cout<<TaskDurationInSecondes(ReadTaskDuration());


    return 0;
}
