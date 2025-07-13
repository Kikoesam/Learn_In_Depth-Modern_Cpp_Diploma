#include <iostream> 
using namespace std;

// enter code __> cin 1-7 cout days without switch with enum


enum days 
{

  saturday = 1,
  sunday,
  monday,
  tuesday,
  wednesday,
  thursday,
  friday

};

int main ()
{


int x;
cout<<"Enter the Number Of the Day"<<endl;
cin>>x;


for ( enum days i = saturday; i < 8; i= (days)((int)i + 1))
{
  if ( x == i )
  {
    cout<<
  }
}

}
