## Functions :

1. [x] **`Function Syntax`**
 ```cpp
/*Type : the type of value you want to get which will be the value of a*/ int /*name*/ Adder (/*parameter list or arguments*/ int x, int y)

{
//Task Of the Function
  int sum;
  x + y = sum;
//return value ⇢ (if you don't the function to return a value you can just put【void】as the 【type】of the function)
  return sum
}
```
---
<details>
<summary> Void Example 🕳️ </summary>
	
## We use `void` when we don't need a value from a function, like the code above us ⬆️:
	
```cpp
void Adder (int x, int y)
{
  int sum;
  x + y = sum;
  cout<<sum;
// you can put 【return】or not 
}

```
</details>
---

2.  [x] **` 🔄 Function Argument Passing Methods `**

| 🔹 Method        | 🧠 Syntax Example        | 💬 Description                              | ✅ what happens?                             |
|------------------|--------------------------|---------------------------------------------|------------------------------------------------|
| **By Value**     | `void func(int x)`       | Passes a copy  of the data --> _**copy initialization**_ | ``` int a = x``` ⬅ int x = 10  |
| **By Reference** | `void func(int& x)`    | Passes an **alias**, modifies original      | When you want to update the original variable  | When you want to update the original variable  |
| **By Pointer**   | `void func(int* x)`    | Passes **address**, requires dereferencing  | When null or optional values are needed        | When null or optional values are needed        | 

<details>
<summary> ⚙️ ƒirst ƒunction  </summary>
	
## 📜 Passing by Value & Refrence step by step :
	
```cpp
//3- go through the function and pass values (Copy initialization, Poniter for the value)
int func (int a /*made a copy from x called `a` */, int *ptr /*pointer to an integer, accessing the value at that memory address (in main)*/)
{
  //int a == int x, 
    a++;       // 4- add one to integar a
    *ptr = 5;  // 5- changes x in main to 5
    return a;  
}

//let's go through the code line by line :

int main ()
{
   
    int x = 2;                // 1- assigning x to 2
    int y = func (x, &x);     // 2- y assigned to a value (the value after the function executed)
                              // 6- y = a = 3 
    cout<<x<<" "<<y;          
    return 0;
}
```
</details>


---



# 📘 Key Programming Concepts

| 🧠 Concept            | 🔍 Definition                                                                 | ✅ Benefit                                                                 |
|----------------------|--------------------------------------------------------------------------------|---------------------------------------------------------------------------|
| 🔹 Linear Programming | Writing code line by line without structure.                                  | ❌ Hard to maintain, test, or scale. Not reusable.                        |
| 🔹 Structured Programming | Uses control structures (`if`, `for`, `while`, `functions`) for clarity.     | ✅ Clean, readable, and maintainable code.                                |
| 🔹 Modularity         | Dividing code into small, logical units (like functions or modules).          | ✅ Easier to debug, reuse, and understand.                                |
| 🔹 Reusability        | Writing a function once and calling it many times.                            | ✅ Avoids duplication and promotes efficiency.                            |
| 🔹 Organisability     | Structuring code like a book, with each function acting like a chapter.       | ✅ Improves readability and makes larger codebases manageable.            |


## 🎯 Why Functions?

| 🛠️ Feature          | 💡 Description                                                  |
|---------------------|-----------------------------------------------------------------|
| 🔁 Reuse Logic       | Avoid writing the same code repeatedly.                        |
| 🛠 Maintainability   | Fix or update logic in one place — no need to hunt it down.    |
| 🧩 Modularity        | Focus on one part of the program at a time.                    |
| 📚 Readability       | Code looks cleaner and is easier to follow.                    |
| 🚀 Scalability       | Supports breaking big problems into manageable pieces.         |
---


3. [x] **`Function Definition & Declarition `**
```cpp
// function Prototype - declarition
void func();

int main ()
{

  return 0;
}

// function Definition
void func()
{

}


```

<details>
<summary> ¯\_(͠≖ ͜ʖ͠≖)_/¯ </summary>
	
</details>