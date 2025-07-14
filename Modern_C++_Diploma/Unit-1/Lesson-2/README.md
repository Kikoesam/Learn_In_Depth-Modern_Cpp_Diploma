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

1. [x] **`Function Definition & Declarition `*

!!! Example _**Example**_

    ```cpp
    /* 
    function Prototype - declarition
    1- <You can declare the function above>
    {This is a promise to the compiler: a function with this name, return type, and parameter list exists}
    telling the compiler --> Trust me, I’ll define this later

    Then The linker will link the function call with its definition
    */
    void func();

    int main ()
    {

      return 0;
    }

    /* 
    function Definition 
    This is the actual body of the function — where logic lives.
    1- <Must be above the main function> 【The definition must be above the function call】
    because the compiler compiles the code line by line
    so the compiler must see the function definition first so when it sees its declaration {in the main function} it can return back to the line where the function is
    2- <One Definition Rule> function must be definied for onlt one time
    */
    void func()
    {

    }   


    ```
## 1️⃣ Types of Variables in C++
🔍 _**Mutability refers to whether a variable's value can be changed after it is created.**_


| Type            | Description                                                                 | Lifetime               | Scope                    | Mutability  |
|------------------|------------------------------------------------------------------------------|-------------------------|---------------------------|-------------|
| `local`         | Declared inside a function                                                   | Until function returns the value {ends}  | Function only             | ✅ Mutable  |
| `global`        | Declared outside any function                                                | Entire program          | All files (if not `static`) | ✅ Mutable |
| `const`         | Cannot change after initialization                                           | Same as declared scope  | Local or global           | ❌ Immutable |
| `static (local)`| Keeps its value between function calls                                       | Entire program          | Function only             | ✅ Mutable  |




<details>
<summary> ¯\_(͠≖ ͜ʖ͠≖)_/¯ </summary>
	
</details>








!!! note "Important"
    This is an informational block.

!!! tip "Pro Tip"
    Useful advice for the reader.

!!! warning "Caution"
    Be careful with ambiguous overloads.

!!! danger "Watch Out"
    This can cause runtime crashes or undefined behavior.

!!! info "Extra"
    Here’s some extra context or curiosity.
    
!!! info "Extra"
    Here’s some extra context or curiosity.
> ⚠️ **Warning:** Dangerous code ahead.

## 🧠 Concept Title Here

!!! note "Definition"
    A short explanation of the concept.

!!! tip "Use Case"
    When and where to apply it.

!!! example "Example"
    ```cpp
    void greet() {
        cout << "Hello";
    }
    ```

!!! warning "Common Pitfall"
    Do NOT pass uninitialized pointers to functions!

!!! info "Extra Insight"
    `const T&` allows passing temporaries safely.

> 💡 **Note:** This is a note block.
>
> ⚠️ **Warning:** Dangerous code ahead.
> 🚀 **Tip:** Prefer `const T&` for large objects.