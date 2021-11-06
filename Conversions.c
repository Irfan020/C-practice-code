#include<stdio.h>
int main()
{
    int num, n,m;
    printf("\n Enter Decimal Value : ");
    scanf("%d",&num);
    printf("\n Octal Value for decimal input : %o\n",num);
    printf("\n Hexadecimal Value for decimal input : %x\n",num);

    printf("\n Enter Octal Value : ");
    scanf("%o",&n);
    printf("\n Decimal Value for octal input : %d\n\n",n);
    printf("\n Hexadecimal Value for octal input: %x\n",n);

    printf("\n Enter Hexadecimal Value : ");
    scanf("%x",&m);
    printf("\n Decimal Value for Hexadecimal input: %d\n\n",n);
    printf("\n  Octal Value for Hexadecimal input: %o\n\n",n);


    getch();
}
