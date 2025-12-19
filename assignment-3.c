•	TASK 1 — POINTER CONCEPTS
•	A normal variable stores a value directly.
•	1. Difference between normal variable and a pointer
•	A pointer stores the memory address of another variable.
int x = 10;        // normal variable
int *p = &x;       // pointer storing address of x
•	x → stores 10
•	p → stores address of x
•	*p → accesses value at that address 10
________________________________________
2. Difference between declaration and Definition
•	Declaration: tells the compiler about the variable
•	Definition: allocates memory
int a;        // variable declaration & definition
int *ptr;     // pointer declaration
ptr = &a;     // pointer definition (assignment)
•	& → address-of operator
•	* → dereferencing operator
________________________________________
3. Dereferencing a Pointer
Dereferencing means accessing or modifying the value at the stored address.
int num = 5;
int *p = &num;

*p = 20;   // modifies num
________________________________________
4. When Pointers Are Preferred
•	When modifying data inside functions
•	When working with arrays and dynamic memory
Examples:
•	Swapping variables
•	Passing large data structures to functions
________________________________________
5. Risks of Using Pointers
•	Dangling pointers
•	Null pointer dereferencing
•	Memory leaks
________________________________________
6. Difference between Call by Value and Call by Reference
// Call by value
void change(int x) {
    x = 20;
}

// Call by reference
void change(int *x) {
    *x = 20;
}
•	Call by value → original unchanged
•	Call by reference → original modified
________________________________________
7. When to Use Each
•	Call by value: when data must not change
•	Call by reference: when function must update data
________________________________________
TASK 2 — Display Address of a Variable
#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Value stored in ptr (address): %p\n", ptr);
    printf("Address of num: %p\n", &num);
    printf("Value accessed using *ptr: %d\n", *ptr);

    return 0;
}
________________________________________
 TASK 3 — Modify Value Using Pointer
#include <stdio.h>

int main() {
    int count = 10;
    int *pCount = &count;

    *pCount = 25;

    printf("Updated value of count: %d\n", count);

    return 0;
}
________________________________________
 TASK 4 — Add Two Numbers Using Pointers
#include <stdio.h>

int main() {
    int num1 = 5, num2 = 7;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int sum;

    sum = *ptr1 + *ptr2;

    printf("Sum: %d\n", sum);

    return 0;
}
________________________________________
 TASK 5 — Swap Two Numbers Using Pointers
#include <stdio.h>

void swapNumbers(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10, b = 20;

    printf("Before swap: a = %d, b = %d\n", a, b);

    swapNumbers(&a, &b);

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
________________________________________
 TASK 6 — Difference between Pass by Value and Pass by Reference
#include <stdio.h>

void incrementByValue(int x) {
    x++;
}

void incrementByReference(int *x) {
    (*x)++;
}

int main() {
    int num = 10;

    incrementByValue(num);
    printf("After pass by value: %d\n", num);

    incrementByReference(&num);
    printf("After pass by reference: %d\n", num);

    return 0;
}
Expected Output
After pass by value: 10
After pass by reference: 11
________________________________________

Task 7: Find Maximum of Two Numbers Using Pointers
Objective:
Use pointers to compare two numbers.
#include <stdio.h>

int main() {
    int a = 15, b = 25;
    int *p1 = &a;
    int *p2 = &b;

    if (*p1 > *p2)
        printf("Maximum: %d\n", *p1);
    else
        printf("Maximum: %d\n", *p2);

    return 0;
}
________________________________________

