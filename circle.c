#include<stdio.h>
int main(){
    float radious, area;
    printf("Enter radious value : ");
    scanf("%f",&radious);
    area = 3.1416* radious* radious;
    printf("Area of the circle is : %.2f\n",area);
    return 0;
}
