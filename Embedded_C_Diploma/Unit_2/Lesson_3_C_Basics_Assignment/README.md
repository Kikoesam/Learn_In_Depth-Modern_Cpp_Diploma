# 🎓 Homework1: Unit_2_Lesson_3
### 📘 Problem N1: [Write C Program to Print a Sentence]
---

#### 🧪 Code Implementation
```c 
#include <stdio.h>
int main()
{
    printf("i love C ");
    return 0;
}
```
#### 🖥️ Code Output
```css
Output --> i love C
```
---
### 📘 Problem N2: [Write C Program to Print a Integer Entered by a User]
---

#### 🧪 Code Implementation
```c 
#include <stdio.h>
int N ;
int main()
{
    printf("Enter a integer: ");
    scanf("%d", N);
    printf("You entered: %d", N);
    return 0;
}
```
#### 🖥️ Code Output
```css
Output --> Enter a integer: 5
           You entered: 5
```
--- 
### 📘 Problem N3: [Write C Program to Add Two Integers]

---

#### 🧪 Code Implementation
```c 
#include <stdio.h>
int N1;
int N2;
int main()
{
    printf("Enter two numbers: ");
    scanf("%d %d", &N1, &N2);
    printf("You entered: %d" , N1 + N2);
    return 0;
}

```
#### 🖥️ Code Output
```css
Output --> Enter two numbers: 5
                              1
           You entered: 6
```
---

---
### 📘 Problem N4: [Write C Program to Multiply two Floating Point Numbers]
---

#### 🧪 Code Implementation
```c 
#include <stdio.h>
float N1;
float N2;
int main()
{
    printf("Enter two numbers: ");
    scanf("%f %f", &N1, &N2);
    printf("You entered: %d" , N1 * N2);
    return 0;
}

```
#### 🖥️ Code Output
```css
Output --> Enter two numbers: 2.5
                              2.5
           You entered: 6.250000
```
--- 
### 📘 Problem N5: [Write C Program to Find ASCII Value of a Character]
---

#### 🧪 Code Implementation
```c 
#include <stdio.h>
char A;
int main()
{
    printf("Enter a character: ");
    scanf("%c", &A);
    printf("ASCII value of %c = %d", A, A );
    return 0;
}
```
#### 🖥️ Code Output
```css
Output --> Enter a character: G
           ASCII value of G = 71
```
--- 
### 📘 Problem N6: [Write Source Code to Swap Two Numbers]
---

#### 🧪 Code Implementation
```c 
#include <stdio.h> 
 float a,b;
 float swapper;
 int main()
{
    printf("Enter value of a: ");
    scanf("%f",&a);
    printf("Enter value of b: ");
    scanf("%f", &b);

    swapper=b;
    b=a;
    a=swapper;
    printf("After swapping, value of a = %.2f\n",a);
    printf("After swapping, value of b = %.2f\n",b);
    //%.2f means print the float till two numbers after the point --> 2.45
    return 0;
}
```
#### 🖥️ Code Output
```css
Output --> Enter value of a: 1.20
           Enter value of b: 2.45
           After swapping, value of a = 2.45
           After swapping, value of b = 1.20
```
--- 
### 📘 Problem N7: ***it is an interview trick*** [Write Source Code to Swap Two Numbers without temp variable]
---



#### 🧪 Code Implementation
```c 
#include <stdio.h> 
 float a,b;
 float swapper;
 int main()
{
    printf("Enter value of a: ");
    scanf("%f",&a);
    printf("Enter value of b: ");
    scanf("%f", &b);

 
    return 0;
}
```
#### 🖥️ Code Output
```css
Output --> Enter value of a: 1.20
           Enter value of b: 2.45
           After swapping, value of a = 2.450000
           After swapping, value of b = 1.200000
```
---
---
--- 
# 🎓 Homework2: Unit_2_Lesson_3
### 📘 Problem N1: [Write C Program to Check Whether a Number is Even or Odd ]
---

#### 🧪 Code Implementation
```c 
#include <stdio.h> 
 int a;
 char choice;
 int main()
{
    do
 {

    printf("Enter an integer you want to check: ");
    scanf("%d",&a);
    if ((a % 2) == 0) 
    /*
    (a % 2  = 0) is wrong because you didn't do 
    1-  Comparison (equal to) checking if the remainder is actually zero instead you put assign operator
    2- you assigned the 2 with 0 you need to compare (a % 2) with 0
    */ 
    {
        printf("%d  is even. \n",a);
    }
    else 
    {
        printf("%d  is odd. \n",a); 
    }
    printf("do you want to redo the program? (y/n): ");
    scanf (" %c", &choice); //The space before %c is important because %c will grab '\n' (the first thing you've entered) right away — you never get a chance to enter 'y' before the program ended
    /* 
    CASE 1 :
        BUFFER: [ '\n', 'k', ... ]
        scanf("%c") → reads '\n'
    CASE 2 :
        BUFFER: [ '\n', 'k', ... ]
        scanf(" %c") → skips '\n' → reads 'k'

    
    */
 }
 while (choice == 'y' || choice == 'Y');
    return 0;
}
```
#### 🖥️ Code Output
```css
Output --> Enter an integer you want to check: 15
           15  is odd. 
           do you want to redo the program? (y/n): Y
           Enter an integer you want to check: 52
           52  is even. 
```
#### 📢 Another Code Implementation
```c 
#include <stdio.h> 
 int a;
 char choice;
 int main()
{
    do
 {

    printf("Enter an integer you want to check: ");
    scanf("%d",&a);
    printf("the number is: %s ", (a % 2 == 0)? "Even": "Odd");
    printf("Do you want to continue? (y/n): ");
    scanf(" %d", &choice);
 
 }
 while (choice == 'y' || choice == 'Y');
    return 0;
}
```
#### 🖥️ Code Output
```css
Output --> the same as above
```
---
### 📘 Problem N2: [Write C Program to Check Vowel or Consonant ]
---

#### 🧪 Code Implementation
```c 
#include <stdio.h>
char letter;

int main()
{
    printf("add the letter: ");
    scanf("%c", &letter);
    printf("%c is %s", letter, (letter == 'i' || letter == 'e'|| letter == 'a'|| letter == 'u' || letter == 'o') ? "Vowel" :
                                                                                                                   "Consonant "
    );
    return 0;
}
```
#### 🖥️ Code Output
```css
Output --> add the letter: i
           i is Vowel
```
--- 
### 📘 Problem N3: [Write C Program to Find the Largest Number Among Three Numbers ]
---

#### 🧪 Code Implementation
```c 
#include <stdio.h>
char letter;

int main()
{
    printf("add the letter: ");
    scanf("%c", &letter);
    printf("%c is %s", letter, (letter == 'i' || letter == 'e'|| letter == 'a'|| letter == 'u' || letter == 'o') ? "Vowel" :
                                                                                                                   "Consonant "
    );
    return 0;
}
```
#### 🖥️ Code Output
```css
Output --> add the letter: i
           i is Vowel
```
---                                                                                 