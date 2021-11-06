#include<stdio.h>
int main()
{
    char upper;
    printf("\nEnter A Uppercase Letter : ");
    scanf("%c",&upper);
   // lower = tolower(upper);
    printf("\nLowercase letter is: %c\n",tolower(upper));
/*
    char lower;
    printf("\nEnter A Lowercase Letter : ");
    scanf("%c",&lower);
   // upper = toupper(lower);
    printf("\nUpperrcase letter is: %c\n",toupper(lower));
*/
    return 0;
}
