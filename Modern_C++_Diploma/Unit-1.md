```Cpp
#include <iostream>
// Tells the preprocessor to copy the content of another file (usually a header file)
```
### Why <> instead of ""? `Interview Question`
```Cpp
#include <iostream>     // Tells the compiler to include the standard I/O library
#include "MyHeader.hpp" // Tells the compiler to Look for this file in your current folder or project --> Typically used for your own custom headers.
```

`;` is put to end a statement but it isn't needed in :

- Declaration blocks: Function Definitions, Special Variables
- Preprocessor lines like #include <iostream>

### How To Type Special Variables :
1. - [x] **`Struct`**
```cpp
struct Objects 
{
  string name;
  string shape;
  int color ;

};//--> and don't forget the semicolon

int main()
{
  Objects Orange;
  Orange.name = "Orange";
  Orange.shape = "Circular";
  Orange.color = 22;
  cout<<Orange.Shape<<endl;
}
```
Output --> Orange

2. - [x] **`Union`**

**the same as you type Struct, but the difference is "**
		
| Feature	                      | Struct   | Union |  
|-------------------------------|----------|----------| 
| Memory Allocation             | Each member has its own memory | All members share the same memory [Size of largest member only] | 
| Safety                        | Safer, easier to use	| More dangerous, used in low-level tricks |  

```cpp
Union Objects 
{
  string name;
  string shape;
  int color ;

};//--> and don't forget the semicolon

int main()
{
  Objects Orange;
  Orange.name = "Orange";
  Orange.shape = "Circular";
  Orange.color = 22;
cout<<Orange.name<<endl;
return 0;
}
```
Output --> Orange

3. - [x] **`Enum`**
```cpp
enum Devices
{
  Fridge,           // 0
  Washing_Machine,  // 1
  Microwave,        // 2
  Oven,             // 3
  Television,       // 4
  Heater,           // 5
  AC,               // 6
}; 

int main()
{
Devices TV = Television;
cout<<TV;
return 0;
}
```
Output --> 4

