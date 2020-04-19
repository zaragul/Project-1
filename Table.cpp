/*1. Write a program to print the multiplication table of a number entered from the keyboard.*/

#include<iostream.h>
#include<conio.h>
void main()
{
int i, n;
cout<<"Enter any number : ";
cin>>n;
for (int i=1; i<=10; i++)
cout<<"\n\t"<<n<<" x "<<i<<" = "<<n*i<<endl;
getch();
}
