/*Define a class batsman with the following specifications:
Private members:
bcode 4 digits code number
bname 20 characters
innings, notout, runs integer type
batavg it is calculated according to the formula –
 batavg =runs/(innings-notout)
calcavg() Function to compute batavg
Public members:
readdata() Function to accept value from bcode, name, innings, notout
and invoke the function calcavg()
displaydata() Function to display the data members on the screen*/

#include<iostream>
using namespace  std;
class batsman
{
    private:
    int bcode,innings,notout,runs,batavg;
    char bname[20];

    int calcavg()
    {
        
        batavg=runs/(innings-notout);
        return batavg;
       
    }
    public:
     void readdata();
     void displaydata();
    
};

void batsman:: readdata()
{
    cout<<"\nenter the bcode:";
    cin>>bcode;
    if( bcode>999 && bcode<=9999)  
       {
        
         cout<<"\nenter the name:";
         cin>>bname;
         cout<<"\nenter the innings";
         cin>>innings;
         cout<<"\nenter notout innings";
         cin>>notout;
         cout<<"enter the runs";
         cin>>runs;
      
       }else
       {
        cout<<"invalid bcode"; 
       } 

 calcavg();

}
void batsman::displaydata()
{
    cout<<"\nbcode is:"<<bcode;
    cout<<"\nname is:"<<bname; 
    cout<<"\ninnings are:"<<innings; 
    cout<<"\notout innings are:"<<notout<<endl;
    cout<<"\n runs are:"<<runs;
    cout<<"batting avrage is:"<<batavg;
   
}
int main()
{
    batsman b;
    b.readdata();
    b.displaydata();
}



