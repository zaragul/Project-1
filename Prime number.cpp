/*8. Write a program to calculate whether the number entered is prime or not.*/

#include<iostream.h>
#include<conio.h>
void main()
{
int i,n,c=0;
cout<<"Enter a number : ";
cin>>n;
for (i=2;i<=(n/2); i++)
{
if(n%i==0)
c=c+1;
}
if (c!=0)
cout<<"The number you entered is not prime.";
else if(c==0)	
cout<<"The number you entered is prime.";
getch();
}


