#include <stdio.h>

int main()
{

    int a;
    a = 6;
    printf("run the farist c progrem %d", a);


    return 0;
}

// ❌ Invalid Variable Names in C (Will cause compilation errors)

/*
    int 123number;    // Error: Cannot start with a digit
    int my-variable;  // Error: Cannot use hyphens (-)
    int first name;   // Error: Cannot contain spaces
    int user@mail;    // Error: Cannot use special characters (@, $, %, etc.)
    int int;          // Error: Cannot use reserved keywords (int, for, return, etc.)
    int price$;       // Error: Symbol ($) is not allowed
    int float;        // Error: 'float' is a reserved keyword

*/

/* 
 * C Programming Keywords (Reserved Words)
 * --------------------------------------
 * These names cannot be used as variable, function, or any other identifier names.
 * 
 * Data Types & Specifiers:
 * int, float, double, char, void, short, long, signed, unsigned
 * 
 * Control Flow & Loops:
 * if, else, switch, case, default, for, while, do, break, continue, goto
 * 
 * Storage Classes & Qualifiers:
 * auto, register, static, extern, const, volatile
 * 
 * User-Defined Types & Others:
 * struct, union, enum, typedef, sizeof, return
 */