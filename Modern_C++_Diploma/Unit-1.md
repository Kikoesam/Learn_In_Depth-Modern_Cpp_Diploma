*#Include* : tells the preprocessor to literally copy the content of another file (usually a header file)
semicolon is put to end a statement but it isn't needed in :
- Declaration blocks : Function Definitions 
- Preprocessor lines like #include <iostream>

how do to :
- type a struct : 
declare it as a function :
struct Objects 
{
  string name;
  string shape;
  int color ;

} ;--> and don't forget the semicolon

then declare it in the main function 
Objects Orange;
Orange.name  = Orange ;
Orange.shape = Circular;
Orange.color = Red ;