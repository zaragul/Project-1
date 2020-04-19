/*4. Write a program to find the sum of the following series: 1+1/2+1/3+………1/45.*/

#include<iostream.h>
#include<conio.h>
void main()
{
float i, sum=0;
for (i=1;i<=45; i++)
sum=sum+(1/i);
cout<<"Sum of the series = "<<sum;
getch();
}


