#include <iostream>

using namespace std;



float  ReadNumber(string message)
{
    float number;
    cout<<message<<endl;
    cin>>number;
    return number;

}

float SumNumbers()

{   int sum=0,counter=1,number=0;


    do{
      number= ReadNumber("Please Enter Number"+to_string(counter));
      if(number==-99)
      {
          break ;
      }
      sum+=number;
        counter++;
    }  while(number!=-99);

    cout<<"Result=";
    return sum;
}

int main()
{
   cout<<SumNumbers();
    return 0;
}
