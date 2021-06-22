#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g;
printf("Enter values of a and b:");
scanf("%d %d",&a,&b);
c=a+b;
printf("\nAddition is %d",c);
d=a-b;
printf("\nSubtraction is %d",d);
e=a*b;
printf("\nMultiplication is %d",e);
f=a/b;
printf("\nDivision is %d",f);
g=a%b;
printf("\nRemainder is %d",g);
return 0 ;
}
