#include <iostream>

using namespace std;

int ReadTotalSales()
{
     int TotalSales;
    cout<<"enter the TotalSales :"<<endl;
    cin>>TotalSales;
    return TotalSales;
}

   float CalculateCommision(float TotalSales)
    {

        if(TotalSales>=1000,000)
        return 1/100;

        else if(TotalSales>=5000,00)
        return 2/100;

        else if(TotalSales>=1000,00)
        return 3/100;

        else if(TotalSales>=5000,0)
        return 5/100;

        else
        return 0/100;
    }

float GetCmmissinPrecentage(float TotalSales)
{

    return  CalculateCommision(TotalSales)*TotalSales;

}

int main()
{
   int TotalSales=ReadTotalSales();
   cout<<"commission is:"<<CalculateCommision(TotalSales)<<endl;
   cout<< " Total commission is: "<<GetCmmissinPrecentage(TotalSales);
    return 0;
}
