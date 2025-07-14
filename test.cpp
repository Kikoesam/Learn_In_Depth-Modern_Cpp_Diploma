#include <iostream> 
using namespace std;

// enter code __> cin 1-7 cout days without switch with enum

void func (int a)
{
  static int x = 10;
  x++;
  cout<<x;
}

int main ()
{
   
    func (10);  
    func (10);  

    return 0;
}

