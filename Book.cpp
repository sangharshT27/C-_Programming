/*Define a class BOOK with the following specifications :
Private members of the class BOOK are
BOOK NO integer type
BOOKTITLE 20 characters
PRICE float (price per copy)
TOTAL_COST() A function to calculate the total cost for N number of copies
where N is passed to the function as argument.
Public members of the class BOOK are
INPUT() function to read BOOK_NO. BOOKTITLE, PRICE
PURCHASE() function to ask the user to input the number of copies to be
purchased. It invokes TOTAL_COST() and prints the total cost to
be paid by the user.
Note : You are also required to give detailed function definitions.*/
#include<iostream>
using namespace std;
class Book
{
    private:
    int BOOK_NO;
    char BOOKTITLE[20];
    float PRICE;

   float TOTAL_COST(int numberofcopies)
    {
         return numberofcopies*PRICE;
    }

    public:
    void INPUT()
    {
      cout<<"\nEnter the Book No";
      cin>>BOOK_NO;
      cout<<"\n Enter the Booktitle";
      cin>>BOOKTITLE;
      cout<<"\nEnter the Price";
      cin>>PRICE;
     
    }
    void PURCHASE()
    {
        cout<<"\nBook No is:"<<BOOK_NO;
        cout<<"\nBooktitile is:"<<BOOKTITLE;
        cout<<"\nprice is:"<<PRICE;
        int numberofcopies;
         cout<<"\nenter the number of copies";
        cin>>numberofcopies;
        if(numberofcopies<=0)
        {
            cout<<"noofcopies should be greater than zero";
        }
        else{
                  float totalcost=TOTAL_COST(numberofcopies);
            }

        cout<<"Total cost paid by user is:"<<TOTAL_COST(numberofcopies);

    }
    
};

int main()
{

    Book b;
    b.INPUT();
    b.PURCHASE();
}
