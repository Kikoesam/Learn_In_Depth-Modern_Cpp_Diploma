#include <iostream> 
using namespace std;

// enter code __> cin 1-7 cout days without switch with enum

int Volume (int x, int y, int z = 1)
{
  int Volume;
  Volume = x * y * z;
  return Volume;
}

int main()
{
  cout<<Volume(3, 3);
  return 0;
}


