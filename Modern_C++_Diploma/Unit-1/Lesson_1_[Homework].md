# 🎓 Homework: Lesson_1
---
### 📘 Problem N1: [Write C++ Program to Print a Sentence]
---

#### 🧪 Code Implementation
```cpp
#include <iostream> 
#include <string>
using namespace std;

int main()
{

  string str;
  cout<<"Enter a whole Sentence"<<endl;
   getline(cin, str);
   cout<<str;

  return 0;
}
```
#### 🖥️ Code Output
```json
input  --> i Love Learn-in-depth 
Output --> i Love Learn-in-depth 
```


--- 
### 📘 Problem N2, N3: [Write C++ Program to Print an Integer Entered by a User, Add them]
---

#### 🧪 Code Implementation
```cpp
#include <iostream> 
using namespace std;

int num_1 ;
int num_2 ; 

int main()
{

  cout<<"Enter the first number"<<endl;
  cin >>num_1; 
  cout<<"Enter the second number"<<endl;
  cin >>num_2; 
  cout<< num_1 + num_2;

  return 0;
}
```
 #### 🖥️ Code Output
```ini
input -->
Enter the first number
5
Enter the second number
6
Output --> 11
```
--- 
### 📘 Problem N4: [Write C++ Program to Multiply two Floating Point Numbers]
---

#### 🧪 Code Implementation
```cpp
#include <iostream> 
using namespace std;

float num_1 ;
float num_2 ; 

int main()
{

  cout<<"Enter the first number"<<endl;
  cin >>num_1; 
  cout<<"Enter the second number"<<endl;
  cin >>num_2; 
  cout<< num_1 * num_2;

  return 0;
}
```
 #### 🖥️ Code Output
```ini
input -->
Enter the first number
2.4
Enter the second number
1.1
Output --> 2.640000
```
 --- 
### 📘 Problem N4: [Write C++ Program to Multiply two Floating Point Numbers]
---

#### 🧪 Code Implementation
```cpp
#include <iostream> 
using namespace std;

float num_1 ;
float num_2 ; 

int main()
{

  cout<<"Enter the first number"<<endl;
  cin >>num_1; 
  cout<<"Enter the second number"<<endl;
  cin >>num_2; 
  cout<< num_1 * num_2;

  return 0;
}
```
 #### 🖥️ Code Output
```ini
input -->
Enter the first number
2.4
Enter the second number
1.1
Output --> 2.640000
```
 --- 

### 📘 Problem N5: [Write C++ Program to Find ASCII Value of a Character]

#### 🧠 Objective

---

#### 🧪 Code Implementation
```cpp
#include <iostream> 
using namespace std;

char Character ;

int main()
{

  cout<<"Enter a character :"<<endl;
  cin >> Character;  
  cout<< "ASCII value of the Character = "<<int(Character);

  return 0;
}
```
 #### 🖥️ Code Output
```ini
input -->
Enter a character : &
Output --> 38
```
 --- 
### 📘 Problem N6: [Write Source Code to Swap Two Numbers]
---

#### 🧪 Code Implementation
```cpp
#include <iostream> 
using namespace std;

float num_1 ;
float num_2 ;
float temp ;
int main()
{

  cout<<"Enter the first num : "<<endl;
  cin >> num_1;  
  cout<<"Enter the second num : "<<endl;
  cin >> num_2;  
  temp  = num_1;     //temp = 1.20   & num_1 = 1.20
  num_1 = num_2;     //num_1 = 2.45  & num_2 = 2.45
  num_2 = temp ;     //num_2 = 1.20  & temp = 1.20
// so the left-side is the one being assigned to the value of the right-side 
  cout<<"After swapping, value of the first num = " <<num_1 <<endl;
  cout<<"After swapping, value of the second num = " <<num_2 <<endl;

  return 0;
}
```
 #### 🖥️ Code Output
```ini
input -->
Enter the first num : 1.20
Enter the second num : 2.45
Output --> 
After swapping, value of the first num = 2.45
After swapping, value of the second num = 1.20
```


EX7:
it is an interview trick

Write Source Code to Swap Two Numbers without temp variable.



