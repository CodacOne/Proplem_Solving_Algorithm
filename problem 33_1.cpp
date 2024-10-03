#include <iostream>

using namespace std;

int ReadNumberInRange(int From,int To)
{
     int mark;
     do{

    cout<<"enter the mark :"<<endl;
    cin>>mark;  }   while(mark<=From || mark>To);
    return mark;
}

    char GetGradeLetter(int mark)
    {
        if(mark>=90)
        return 'A';

        else if(mark>=80)
        return 'B';

        else if(mark>=70)
        return 'C';

        else if(mark>=60)
        return 'D';

        else if(mark>=50)
        return 'E';

        else
        return 'F';
    }



int main()
{
  cout<<GetGradeLetter(ReadNumberInRange(0,100));
    return 0;
}
