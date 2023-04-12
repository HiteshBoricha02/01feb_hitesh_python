// find triangle
#include<stdio.h>
void main()
{
    float area;
    float base;
    float height;
    printf("enter a base of triangle:");
    scanf("%f",&base);
    printf("enter a height of triangle:");
    scanf("%f",&height);
    area = (height*base)/2;
    printf("area of triangle is %f:",area);

}