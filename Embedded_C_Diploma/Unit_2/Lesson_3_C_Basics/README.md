> [!NOTE]
>
><details> 
> 
>![Challenge](https://img.shields.io/badge/Note_1-Completed-brightgreen)
>
><summary> ¯\_(͠≖ ͜ʖ͠≖)_/¯ </summary>
>
> #### Implicit and Explicit Type Conversion
> -***Implicit*** (type promotion) : is done automatically by the compiler to avoid the loss of data but signs can be lost (when signed is
implicitly converted to unsigned)
> -***Explicit*** (type casting) : Degrading the variable 
> ```c
> double x;
> printf("add the value of this x : ");
> scanf("%lf", &x); // WHY & ? ⌯⌲ scanf() needs the memory address of the variable to store the input
> //if you want to scanf a double you need to add the %lf not %d (for integers)
> printf("the value of the x is : %d", int(x));
> ```
>```css
> Output :add the value of this x :4.53
>        :the value of the x is : 4
>```
 </details>

> [!NOTE]
>
><details> 
> 
>![Challenge](https://img.shields.io/badge/Note_2-Completed-brightgreen)
>
><summary> ¯\_( ͡° ͜ʖ ͡°)_/¯ </summary>
>
> #### postfix and prefix  
>| Type              | Syntax | Description                       | Returned Value         |
>|-------------------|--------|-----------------------------------|------------------------|
>| Pre-Increment     | `++x`  | 1.Increment first, 2.then return  | New (after increment)  | 
>| Post-Increment    | `x++`  | Return first, then increment      | Old (before increment) |
> 💡 **Best Practice:** Always avoid using `x++` and `++x` {on the same variable within a single expression} because it leads to undefined behavior
 </details>

 > [!NOTE] inline / conditional operator ( ternary operator ) 
>
><details> 
> 
>![Challenge](https://img.shields.io/badge/Note_3-Completed-brightgreen)
>
><summary> ¯\_( ͡° ͜ʖ ͡°)_/¯ </summary>
>
> #### ternary operator
>```c
>(condition) ? expression_if_true : expression_if_false;
>```
>- condition → something that’s either true or false
>- ? → separates the condition from what to do if it’s true
>- : → separates what to do if it’s false
>```c
>#include <stdio.h> 
>//give me the grade type 
> int grade;
> char choice;
> int main()
>{
>    printf("give me the grade: ");
>    scanf("%d",&grade );
>    printf("Grade: %s",(grade >= 90) ? "A":
>                       (grade >= 80) ? "B": 
>                       (grade >= 70) ? "C":
>                       (grade >= 60) ? "D": "F");
>
>    return 0;
>}
>```
>Let’s say score = 85.
>1. Check first condition:
>`(score >= 90)` → false
>→ go to the false branch: ``(score >= 80) ? "B" : ...``
>2. Check second condition:
>`(score >= 80)` → true
>→ result is "B"
 </details>

| Format / Escape | Purpose  | Used In     | Example Use   | Notes / Output Insight |
|------------------|----------|-------------|----------------------------------------|----------------------------|
| `\n`|        New line              | `printf()`  | `printf("Line 1\nLine 2");`            | Moves cursor to next line              |
| `\t`|        Horizontal tab        | `printf()`  | `printf("Hello\tWorld");`              | Adds space (tab) between words         |
| `\\`|        Backslash character   | `printf()`  | `printf("\\");`                        | Prints: `\`                            |
| `\"`|        Double quote          | `printf()`  | `printf("\"Hello\"");`                 | Prints: `"Hello"`                      |
| `%d` / `%i`| Signed decimal integer|    Both     | `scanf("%d", &num); printf("%d", num);`| Input/output for `int` values          |
| `%x` / `%X`| Unsigned hexa (lower/UPPER)  | `printf()`  | `printf("%x", 255);`            | Prints: `ff` or `FF`                   |
| `%u`| Unsigned decimal integer     |    Both     | `scanf("%u", &x);`                     | `unsigned int` only                    |
| `%f` | Float (fixed-point)         |    Both     | `scanf("%f", &num); printf("%f", num);`| For `float` values                     |
| `%lf`| Double (larger real numbers)|    Both     | `scanf("%lf", &d);`                    | For `double` only                      |
| `%c` | Single character            |    Both     | `scanf(" %c", &ch);`                   | Don't forget leading space in `scanf()`|
| `%s` | String (char array)         |    Both     | `scanf("%s", str);`                    | Stops at whitespace                    |
| `%*c`| Skip a character            | `scanf()`   | `scanf("%*c");`                        | Useful for clearing buffer             |
| `%*d`| Read but ignore an int      | `scanf()`   | `scanf("%*d");`                        | Ignores value                          |
| `*` with `%`| Width control        | `printf()`  | `printf("%*c", 5, 'A');`               | Dynamic padding                        |

> [!WARNING]
> <details> 
> 
>![Challenge](https://img.shields.io/badge/Example_1-Completed-informational)
>
><summary>⚠️MASSIVE EXAMPLE IS COMING⚠️</summary>
>
>```c
>#include <stdio.h>
>int main()
>{
>unsigned char x=0;
>printf("Variable width control:\n");
>//Variable width control:
>printf("right-justified variable width: '%*c'\n", 5, 'x');
>printf("left-justified variable width : '%*c'\n", -5, 'x');
>/*
>  right-justified variable width: '    x'
>  left-justified variable width : 'x    '
>*/
>int r = printf("Strings:\n");
>printf("(the last printf printed %d characters)\n", r);
>/*
>  Strings:
>  (the last printf printed 9 characters) 
>*/
>
>/* WHY r RETURNS 9 ? 
>   printf() returns the number of characters it printed
>   The string is: "Strings:\n" — how many visible characters?
>   S t r i n g s : \n
>   ↓ ↓ ↓ ↓ ↓ ↓ ↓ ↓ ↓
>   1 2 3 4 5 6 7 8 9
>   \n is just 1 character, not 2. So the total = 9 characters.
>   ✅ That’s why r = 9.
>*/
>const char* s = "Hello";
>printf("\t[%10s]\n\t[%-10s]\n\t[%s]\n\t[%-10.*s]\n\t[%-*.*s]\n",  s, s, s,
>    4, s, 
>    10, 4, s);
>/*
>       [     Hello]
>       [Hello     ]
>       [Hello]
>       [Hell      ]
>       [Hell      ]
>*/
>
>/*
>[%10s]	    Right-align s in a 10-character wide field	           [ Hello]
>[%-10s]	    Left-align  s in a 10-character wide field	           [Hello ]
>[%s]	    Just print the string as-it-is	                       [Hello]
>[%-10.*s]	Left-align and limit to .* chars (4 in this case)      [Hell  ]
>[%-*.*s]	Full dynamic width/precision: %-width.precision.string [Hell  ] if width=10, prec=4
>*/
>printf("Characters:\t%% %%\n", 65);
>//      % % 
>/* %% = print a literal %
>   The 65 is not printed, because there is no format specifier for it
>*/
>printf("Integers\n");
>printf("Decimal:\t%i %d %.6i %i %.0i %+i %u\n", 1, 2, 3, 0, 0, 4, -1);
>/* Integers
>   Decimal: 1 2 000003 0 +4 4294967295
>*/
> 
>/* 
>   %.0i ➜ Precision = 0 with 0 → prints nothing
>   %u   ➜ Prints unsigned value (in the memory) 
>           which is the -1 or 4294967295 in binary (2³²-1) given 32 bit processor
>*/
>printf("Hexadecimal:\t%x %x %X %#x\n", 5, 10, 10, 6);
>// Hexadecimal: 5 a A 0x6         ➜ %#x	Hexadecimal with 0x prefix
>printf("Octal:\t%o %#o %#o\n", 10, 10, 4);
>// Octal:       12 012 04         ➜ %#0	Octal       with 0  prefix
>printf("Floating point\n");
>printf("Rounding:\t%f %.0f %.32f\n", 1.5, 1.5, 1.5);
>/* Floating point
>   Rounding: 1.5  
>*/
>printf("Padding:\t%05.2f %.2f %5.2f\n", 1.5, 1.5, 1.5);
>printf("Scientific:\t%E %e\n", 1.5, 1.5);
>printf("Special values:\t 1/0=%g\n", 0.0/0.0, 1.0/0.0);
>printf("C_trick:\t %d %d %d \n", ++x,x,x++);
>printf("C_trick:\t%d %d %d \n",x++,++x,x);
>return 0;
>}
>```
></details> 


// add emojis
// do the img well
// finish the massive example