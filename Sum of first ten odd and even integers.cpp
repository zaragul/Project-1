/*6. Write a program to calculate the sum of the first 10 odd numbers and first 10 even numbers.*/

#include<iostream.h>
#include<conio.h>
void main()
{
int i, sum1=0, sum2=0;
for (int i=2; i<=20; i=i+2)
sum1=sum1+i;
for (int i=1; i<=19; i=i+2)
sum2=sum2+i;
cout<<"Sum of Odd integers : "<<sum2;
cout<<"\nSum of Even integers : "<<sum1;
getch();
}


