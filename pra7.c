#include<stdio.h>
int main()
{
float a,b,c;
printf("Enter numbers a and b:");
scanf("%f %f",&a,&b);
c=a;
a=b;
b=c;
printf("\nAfter swapping values of a and b are %f,%f:",a,b);
return 0;
}
