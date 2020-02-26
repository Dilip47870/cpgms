#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,area,s;
printf ("enter sides of a triangle: \n");
scanf("%f %f %f",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt (s*(s-a)*(s-b)*(s-c));
printf("area of the triangle is:%f \n sq.units",area);
printf("the perimeter is :%f \n",s);
}
