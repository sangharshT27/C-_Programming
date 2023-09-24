/*Define a class REPORT with the following specification:
Private members :
adno 4 digit admission number
name 20 characters
marks an array of 5 floating point values
average average marks obtained
GETAVG() a function to compute the average obtained in five subject
Public members:
READINFO() function to accept values for adno, name, marks. Invoke the
function GETAVG()
DISPLAYINFO() function to display all data members of report on the screen.
You should give function definitions.*/ 
#include<iostream>
using namespace std;
class REPORT
{
    private:
    char name[20];
    int adno;
    float average;
    float marks[5];

    float GETAVG()
   {
       float sum = 0;
        for (int i = 0; i < 5; i++) 
        {
            sum += marks[i];
        }
        average = sum / 5;

   }
   public:
void READINFO()
{
    cout<<"enter the name ";
    cin>>name;
    cout<<"Enter the admission no";
    cin>>adno;
    if(adno>999 && adno<=9999)
       {
            cout<<adno;

            cout<<"\nenter the marks";
            for (int i = 0; i < 5; i++) 
            {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
            } 

            GETAVG();
           
       }
       else
       {
            cout<<"enter 4 digit admission number";
       }
       
}

void DISPLAYINFO()
{
    cout<<"\nname is:"<<name;
    cout<<"\nnadmission no is:"<<adno;
    cout<<"\n average marks are:"<<average;
}

};
int main()
{
    REPORT R;
    R.READINFO();
    R.DISPLAYINFO();
    
}