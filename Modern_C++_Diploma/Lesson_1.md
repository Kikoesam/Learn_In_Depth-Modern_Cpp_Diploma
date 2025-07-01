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

Input   --> Kixawi The Smartest Software Engineer Everrrrrrrrrrrrrrrrrrrrrrr

Output --> Kixawi The Smartest Software Engineer Everrrrrrrrrrrrrrrrrrrrrrr
</details>


## LOOPS:
1. - [x] **`For Loop`**

```cpp
for
(
   int i = 0;  // 1-initialization of the variable
    i < 10     // 2-checking the condition, 5- check the condition again
    i++        // 4-increment of the variable (1) by 1
)
{
cout<<"Ker0seen"; // 3- implementing the body, 6-If the condition is true --> implement the body if not then break of the loop
}
```
Output --> Ker0seenKer0seenKer0seenKer0seenKer0seenKer0seenKer0seenKer0seenKer0seen

<details>
<summary> C++ 11 Trick 🎩 </summary>


## How to Type *Range-based For Loop*?:

```cpp
Int array1 [5] [1, 2, 3, 4, 5];
for(/*datatype: */auto /* Variablename: */ Kixawi : /* Collection : */ array1)
{
cout<< /* Variablename: */ Kixawi ;
}
```

Output -->  12345
</details>

2. - [x] **`While Loop`**

```cpp
int    i = 0;               // 1- Initialization before the loop
while (i < 5)              // 2- Condition check: if true → execute body, else → exit
{
    cout << "Ker0seen ";  // 3- Loop body gets executed
    i++;                 // 4- Increment variable → eventually breaks the loop
}
// 5- After each iteration → re-check the condition (Step 2)
```

Output → Ker0seen Ker0seen Ker0seen Ker0seen Ker0seen


<details> 
<summary> Infinite Loop Danger! 💀 </summary>

```cpp
int i = 0;
while (i < 5)
{
    cout << "Ker0seen ";
    // i++; ← ⚠️ Forgot this? The loop will never end!
}
```
-💡 Always make sure the variable inside the condition is changing during each iteration!

</details> 

3. - [x] **`Do-While Loop`**

```cpp
int i = 0;
do
{
    cout << "Ker0seen "; // 1- Executes the body at least once
    i++;                 // 2- Increment
} while (i < 3);         // 3- Condition check AFTER the body

```
Output → Ker0seen Ker0seen Ker0seen

## CONDITIONS:

1. - [x] **`If-Else Condition`**

```cpp
int score = 85;

if (score >= 90)
{
    cout << "Grade: A";
}
else if (score >= 80)
{
    cout << "Grade: B";
}
else
{
    cout << "Keep trying!";
}


```
Output → Grade: B

2. - [x] **`Switch Condition`**

```cpp
int option = 2;

switch (option)
{
    case 1:
        cout << "Play Game";
        break;
    case 2:
        cout << "Load Game";
        break;
    case 3:
        cout << "Quit";
        break;
    default:
        cout << "Invalid Option";
        break; //  ⚠️ Don’t Forget Break!
}



```
Output → Grade: B
