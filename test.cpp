/*Define a class TEST in C++ with following description:
Private Members
TestCode of type integer
Description of type string
NoCandidate of type integer
CenterReqd (number of centers required) of type integer
A member function CALCNTR() to calculate and return the number of centers as
(NoCandidates/100+1)
Public Members
- A function SCHEDULE() to allow user to enter values for TestCode, Description,
NoCandidate & call function CALCNTR() to calculate the number of Centres
- A function DISPTEST() to allow user to view the content of all the data members*/

#include<iostream>
using namespace std;
class test
{
private:
   int Testcode,NoCandidate,CenterReqd, no_ofcenter;
   char Decription[100];
   int CALCNTR()
   {
     
      no_ofcenter=(NoCandidate/100+1);
      return no_ofcenter;

   }
public:
  void SHEDULE();
  void DISPTEST();
    
};

void test::SHEDULE()
{
    cout<<"\nenter the values of Testcode";
    cin>>Testcode;
    cout<<"\nenter the Decription of Test";
    cin>>Decription;
    cout<<"\n enter the NoofCandidate ";
    cin>>NoCandidate;
    CALCNTR();

}

void test::DISPTEST()
{
    cout<<"\nTestcode no is:"<<Testcode;
    cout<<"\nDecription of Test is:"<<Decription;
    cout<<"\nNoofCandidates are :"<<NoCandidate;
    cout<<"\nNoofCenter are:"<<no_ofcenter;

}

int main()
{
 test t;
 t.SHEDULE();
 t.DISPTEST();
}


