/*Define a class in C++ with following description:
Private Members
A data member Flight number of type integer
A data member Destination of type string
A data member Distance of type float
A data member Fuel of type float
A member function CALFUEL() to calculate the value of Fuel as per the following
criteria
 Distance Fuel
 <=1000 500
 more than 1000 and <=2000 1100
 more than 2000 2200
Public Members
A function FEEDINFO() to allow user to enter values for Flight Number,
Destination, Distance & call function CALFUEL() to calculate the quantity of Fuel
A function SHOWINFO() to allow user to view the content of all the data members */

#include<iostream>
using namespace std;
class flight
{
    private:
int Flighr_number;
char Destination[20];
float Distance,Fuel;

 int CALFUEL()
{
    if(Distance<=1000)
    {
        Fuel=500;
    }
    else if(Distance<=2000)
    {
        Fuel=1100;
    }
    else
    {
         Fuel=2200;

    }
}
public:
void FEEDINFO()
{
    cout<<"Enter the flight number";
    cin>>Flighr_number;
    cout<<"\nEnter the Destination";
    cin>>Destination;
    cout<<"\nEnter the Distance";
    cin>>Distance;
    CALFUEL();

}

void SHOWINFO()
{
    cout<<"\n Flight number is:"<<Flighr_number;
    cout<<"\nDestination is:"<<Destination;
    cout<<"\nDistance is:"<<Distance;
    cout<<"\n Fuel is:"<<Fuel;
}
};
int main()
{
    flight f;
    f.FEEDINFO();
    f.SHOWINFO();
}
