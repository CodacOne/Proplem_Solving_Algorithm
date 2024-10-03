#include <iostream>

using namespace std;

struct stPiggyBankContent
{
int penny,nickle,dime,quarter,dollar;

};


stPiggyBankContent ReadstPiggyBankContent()
{
     stPiggyBankContent PiggyBankContent ;

     cout<<"Please enter a Total Pennies :"<<endl;
     cin>>PiggyBankContent.penny;


     cout<<"Please enter a Total nickles :"<<endl;
     cin>>PiggyBankContent.nickle;



     cout<<"Please enter a Total dime:"<<endl;
     cin>>PiggyBankContent.dime;

      cout<<"Please enter a Total quarter:"<<endl;
     cin>>PiggyBankContent.quarter;


     cout<<"Please enter a Total dollars :"<<endl;
     cin>>PiggyBankContent.dollar;

    return PiggyBankContent;
}
int CalculateTotalPennies(stPiggyBankContent PiggyBankContent)
{
    int Total=0;

    Total=PiggyBankContent.penny*1+PiggyBankContent.nickle*5
    +PiggyBankContent.dime*10+PiggyBankContent.quarter*25+PiggyBankContent.dollar*100;
    cout<<"Total Pennies =";
    return Total;

}

int main()
{
 int TotalPennies =CalculateTotalPennies(ReadstPiggyBankContent());
 cout<<"TotalPennies"<<TotalPennies<<endl;
 cout<<"TotalDolars"<<(float)TotalPennies/100<<endl;
    return 0;
}
