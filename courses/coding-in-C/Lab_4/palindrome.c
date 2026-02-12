/*
*   introduction to pointers & arrays
*   checking for palindromes
*
*/


#include <stdio.h>
#include <string.h>

int main()
{
    //Section 1:

    char str_section1[100] = "Curly bird catches the worm";
    char (*p_str_section1)[100] = &str_section1;

    (*p_str_section1)[0] = 'E';
    (*p_str_section1)[1] = 'a';
    
    printf("\nSection 1:\n\tpointer: %s", *p_str_section1);
    printf("\n\tstring:  %s\n", str_section1);

    char c_input_section1[30];

    printf("\nSatz eingeben:\t ");
    fgets(c_input_section1, sizeof(c_input_section1), stdin);
    c_input_section1[1] = 'c';
    printf("\n%s", c_input_section1);


    //Section 2:

    return 0;
}