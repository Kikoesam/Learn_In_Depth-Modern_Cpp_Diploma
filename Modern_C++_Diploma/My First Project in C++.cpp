#include <iostream> 
// why <> instead of ""?
// #include <iostream>      Tells the compiler to include the standard I/O library
// #include "MyHeader.hpp"  Tells the compiler to Look for this file in your current folder or project --> Typically used for your own custom headers.
using namespace std;
struct Person 
{
    string name;
    int age;
    float height;
};

union Fruit 
{
    int color;
    char name;
};

int main () 
 {
    Fruit Orange;
    Orange.color = 22;
    cout<<Orange.color<<endl;
    Orange.name = 'O';
    cout<<Orange.name<<endl;
    cout<<Orange.color<<endl;

    // what is the diff between : \n and endl
    return 0;
}