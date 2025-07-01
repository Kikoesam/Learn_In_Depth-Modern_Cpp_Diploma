#include < library >


### Why <> instead of ""? `Interview Question`

```cpp
#include <iostream>     // Tells the compiler to include the standard I/O library
#include "MyHeader.hpp" // Tells the compiler to look for this file in your current folder or project --> Typically used for your own custom headers.
```

`;` is put to end a statement, but it isn't needed in :

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
union Objects 
{
  string name;
  string shape;
  int color ;

};//--> and don't forget the semicolon

int main()
{
  Objects Orange;
  Orange.name  = "Orange";
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
  Fridge,          	 // 0
  Washing_Machine,  	 // 1
  Microwave,     	 // 2
  Oven,           	 // 3
  Television,     	 // 4
  Heater,         	 // 5
  AC,                    // 6
}; 

int main()
{
Devices TV = Television;
cout<<TV;
return 0;
}
```
Output --> 4

4. - [x] **`Typedef`**

to Nickname the variable 
```cpp
typedef unsigned long long ULL;
int main ()
{
ULL KIX = 5;
cout<< KIX ;
return 0;
}
```
Output --> 5

## ✅ Tasks
+ Write  A Combined Example
```CPP
typedef enum
{
	red,
	green,
	blue, //--> you don't need the last comma    
} Pixels;

typedef struct
{
	int width;
	int height;
	Pixels color;
} Photo;

int main()
{
Photo p1 = {1920, 1080, blue} ; //don't forget the ;
cout<<p1.color<<endl;
cout<<p1.width;
return 0;
}
```
Output --> 2
           1920
	   
5. - [x] **`auto`**
is used to automatically deduce the type of the variable based on the value assigned
```CPP
int main()
{
   auto var1(20);
   auto var2(20.1);
   auto var3(20.2f);
   auto var4(20l);
   auto var5(20ull);

   cout<< "the size of Var1 = "<<sizeof(var1)<<"bytes"<<endl;
   cout<< "the size of Var2 = "<<sizeof(var2)<<"bytes"<<endl;
   cout<< "the size of Var3 = "<<sizeof(var3)<<"bytes"<<endl;
   cout<< "the size of Var4 = "<<sizeof(var4)<<"bytes"<<endl;
   cout<< "the size of Var5 = "<<sizeof(var5)<<"bytes" ;
}
```
Output -->
the size of Var1 = 4bytes

the size of Var2 = 8bytes

the size of Var3 = 4bytes

the size of Var4 = 4bytes

the size of Var5 = 8bytes


<details>
<summary> 🔍👓🔎 </summary>
	
## How to Cout a whole sentence?:
	
```cpp
#include <string>
int main ()
{
String str;
getline(cin, str);
cout<< str;
return 0;
}
```

Input  --> Kixawi The Smartest Software Engineer Everrrrrrrrrrrrrrrrrrrrrrr

Output --> Kixawi The Smartest Software Engineer Everrrrrrrrrrrrrrrrrrrrrrr
</details>


## LOOPS:
5. - [x] **`For Loop`**

```cpp




```
