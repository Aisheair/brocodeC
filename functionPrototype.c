#include <stdio.h>

void hello(char[], int); // Function Prototype 

int main()
{
    // Function Prototype

    // WHAT IS IT?
    // function declaration w/o a body, before main()
    // Ensures that calls to a function are with the correct arguments

    // IMPORTANT NOTES
    // Many C compilers do not check for parameter matching
    // Missing arguments will result in unexpected bheavior
    // A function prototype causes the compiler to flag an error if arguments are missing

    // ADVANTAGES
    // 1.Easier to navigate a program w/ main() at the top
    // 2. Helps with debugging
    // 3. commonly used in header files

    char name[] = "bro";
    int age = 21;

    hello(name, age);

    return 0;
}

void hello(char name[], int age)
{
    printf("\nhello %s", name);
    printf("\nyou are %s years old", name);
}