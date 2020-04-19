/*2. Write a program to convert an integer number into its equivalent binary number.*/

#include<iostream.h>
#include<conio.h>
#include<string>
void main()
{
int i,n,l,b,a;
int s[100];
cout<<"Enter a number : ";
cin>>n;
a=n;
for(i=1;a!=1;i++)
{
b=a%2;
a=a/2;
s[i]=b;
l=i;
}
cout<<a;
for (i=l; i>=1; i--)
{
cout<<s[i];
}
getch();
}

