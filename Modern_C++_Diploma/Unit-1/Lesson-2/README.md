## Functions :

1. [x] **`Function Syntax`**
 ```cpp
/*Type : the type of value you want to get which will be the value of a*/ int /*name*/ Adder (/*parameter list or arguments*/ int x, int y)

{
//Task Of the Function
  int sum;
  x + y = sum;
//return value ⇢ (if you don't want the function to return a value you can just put【void】as the【type】of the function)
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
Output → 5 3

</details>


---



# 📘 Key Programming Concepts

| 🧠 Concept            | 🔍 Definition                                                                 | ✅ Benefit                                                                 |
|----------------------|--------------------------------------------------------------------------------|---------------------------------------------------------------------------|
| 🔹 Linear Programming | Writing code line by line without structure.                                  | ❌ Hard to maintain, test, or scale. Not reusable.                        |
| 🔹 Structured Programming | Uses control structures (`if`, `for`, `while`, especially `functions`) for clarity.     | ✅ Clean, readable, and maintainable code.                                |
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

3. [x] _**`Function Definition & Declarition `**_

> [!IMPORTANT]
>```cpp
>
>/* 
>function Prototype - declarition
>1- <You can declare the function above>
>{This is a promise to the compiler: a function with this name, return type, and parameter >list exists}
>telling the compiler --> Trust me, I’ll define this later
>
>Then The linker will link the function call with its definition
>*/
>void func();
>
>int main ()
>{
>
>  return 0;
>}
>
>/* 
>function Definition 
>This is the actual body of the function — where logic lives.
>1- <Must be above the main function> 【The definition must be above the function call】
>because the compiler compiles the code line by line
>so the compiler must see the function definition first so when it sees its declaration {in the main function} it can return back to the line where the function is
>2- <One Definition Rule> function must be definied for only one time
>*/
>void func()
>{
>
>}   
>
>
>```
## 1️⃣ Types of Variables in C++
🔍 _**Mutability refers to whether a variable's value can be changed after it is created.**_


| Type            | Description                                                                 | Lifetime               | Scope                    | Mutability  |
|------------------|------------------------------------------------------------------------------|-------------------------|---------------------------|-------------|
| `local`         | Declared inside a function                                                   | Until function returns the value {ends}  | Function only             | ✅ Mutable  |
| `global`        | Declared outside any function                                                | Entire program          | All files (if not `static`) | ✅ Mutable |
| `const`         | Cannot change after initialization                                           | Same as declared scope  | Local or global           | ❌ Immutable |
| `static (local)`| Keeps its value between function calls                                       | Entire program          | Function only             | ✅ Mutable  |




> [!NOTE]
> ### 🧠 Understanding `inline` Functions in C++
>
> #### 🔹 What is `inline`?
> - The `inline` keyword is a _**compiler hint**_ suggesting that the function's **code should be expanded in-place** where it’s called {the compiler replaces function calls with instructions directly} instead of performing a regular function call 
>-  No function call, no return — just the actual code pasted inline
>  ```cpp
> inline int add(int a, int b) { return a + b; }
> int result = add(2, 3); // becomes: int result = 2 + 3; ➻ Intermediate Representation (IR)
> ```
>
> #### 🚀 Why Use `inline`? (Optimization Goal)
> - Skips _**function call overhead**_ :
>   - No register save
>   - No stack frame
>   - No jump and return
> - 〚Every function call costs more instructions to be done rather than doing the simple function〛
> 
> #### 🔄 Inline & Function Overloading
> - `inline` works with **overloaded functions**.
> - The compiler still resolves the **best match** using matching rules.
> - It can choose to inline one overload and not another depending on size or complexity.
>
>>> 🔍 **Function Overloading:** allows us to define two or more functions with the same name as long as they have different parameter list (in either the number or types of parameters) 
---


<details>
<summary> ¯\_(͠≖ ͜ʖ͠≖)_/¯ </summary>

### ***`Function Default Arguments`***
```cpp
int Volume (int x, int y, int z = 1 /* Default argument*/)
{
  int Volume;
  Volume = x * y * z;
  return Volume;
}

int main()
{
  cout<<Volume(2, 5); // passed 2 arguments to a 3 parameters function
  return 0;
}
```
</details>

---
 




> #### 🔹 Name Mangling

> #### 🔹 Deleted Functions (`= delete`)


> [!NOTE]
>  : 
 

> [!WARNING]
> Do NOT pass uninitialized pointers to functions!
 
> [!IMPORTANT]
> This is important information for your code.

> [!CAUTION]
> Be cautious when using raw pointers in modern C++.
> 💡 **Note:** This is a note block.
>
> ⚠️ **Warning:** Dangerous code ahead.
> 🚀 **Tip:** Prefer `const T&` for large objects.
 
