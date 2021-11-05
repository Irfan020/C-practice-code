#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter any character = ");
    scanf("%c",&ch);
    printf("\nASCII Value for this Character = %d\n",ch);

    int num;
    printf("\nEnter any ASCII Value = ");
    scanf("%d",&num);
    printf("\nThe character for this ASCII value is = %c\n",num);

    return 0;
}
