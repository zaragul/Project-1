/*Write a program to generate a Fibonacci series up till 200. Here are the first few terms of the series: 1 1 2 3 5 8 13 21 34 55. Each term is found by adding the two previous ones: 1+1 is 2, 1+2 is 3, 2+3 is 5, 3+5 is 8, and so on.*/

#include<iostream.h>
#include<conio.h>
void main()
{
int i,n=1;
int sum=1;
cout<<sum<<"\t"<<n<<"\t";
for(i=1;sum<=200;i++)
{
sum=sum+n;
n=(sum-n);
cout<<sum<<"\t";
}
getch();
}



