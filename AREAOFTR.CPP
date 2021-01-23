/* write a c program to find the area of the triangle */
#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,h;

printf("enter b;");
scanf("%f",&b);

printf("enter h;");
scanf("%f",&h);

a=(0.5*b*h);
printf("are of the triangle=%f", a);
getch();
}