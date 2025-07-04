## Functions :

1. - [x] **`Function Declaration `**
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

## 🔄 Function Argument Passing Methods

| 🔹 Method        | 🧠 Syntax Example        | 💬 Description                              | ✅ what happens?                             |
|------------------|--------------------------|---------------------------------------------|------------------------------------------------|
| **By Value**     | `void func(int x)`       | Passes a copy  of the data --> _**copy initialization**_ | ``` int a = x``` ⬅ int x = 10  |
| **By Reference** | `void func(int& x)`    | Passes an **alias**, modifies original      | When you want to update the original variable  | When you want to update the original variable  |
| **By Pointer**   | `void func(int* x)`    | Passes **address**, requires dereferencing  | When null or optional values are needed        | When null or optional values are needed        | 

