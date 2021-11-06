#include<stdio.h>
int main()
{
    float c, f;
    printf("Enter Celcius Value: ");
    scanf("%f",&c);
    f = (c*1.8)+32;
    printf("Farenheit value : %f\n",f);
    return 0;
}
