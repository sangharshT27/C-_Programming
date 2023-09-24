/*Define a class student with the following specification
Private members of class student
admno integer
sname 20 character
eng. math, science float
total float
ctotal() a function to calculate eng + math + science with float return
type.
Public member function of class student
Takedata() Function to accept values for admno, sname, eng, science and
invoke ctotal() to calculate total.
Showdata() Function to display all the data members on the screen.*/

#include<iostream>
using namespace std;
class student
{
    private :
    int admno;
    char sname[20];
    float eng_marks,science_marks,math_marks,total_marks;
    float ctotal()
    {
        float ctotal;
        ctotal=eng_marks+math_marks+science_marks;
        return ctotal;
    }

    public: 
     void Takedata();
     void invoke_cototal();
     void showdata();
};
void student::Takedata()
{
    cout<<"Entet the admission number"<<endl;
    cin>>admno;
    cout<<"enter the student name";
    cin>>sname;
    cout<<"enter the english marks ";
    cin>>eng_marks;
    cout<<"enter the science marks";
    cin>>science_marks;
    cout<<"enter the math marks";
    cin>>math_marks;
    ctotal();
}
void student::invoke_cototal()
{

    total_marks=eng_marks+science_marks+math_marks;
    
    
  // cout<<"total marks is:"<<total_marks;
}
void student::showdata()
{
    cout<<"\nadmission no:"<<admno<<endl;
    cout<<"\nname is:"<<sname;
    cout<<"\nmarks of english"<<eng_marks;
    cout<<"\nmarks of science"<<science_marks;
    cout<<"\nmarks of math"<<math_marks;
    cout<<"\n total marks"<<total_marks;
    


}
int main()
{
    student s;
    s.Takedata();
    s.invoke_cototal();
    s.showdata();
}


