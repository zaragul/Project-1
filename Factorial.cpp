/*3. Write a program to find out the factorial of an integer.
Formula to find the factorial of an integer is: n*(n-1) *(n-2) *………. -1.*/

#include<iostream.h>
#include<conio.h>
void main()
{
int i, n, fact=1;
cout<<"Enter any number : ";
cin>>n;
cout<<"\nFactorial of "<<n<<" = ";
for (i=n; i>=1; i--)
{fact=fact*i;
cout<<i<<" x ";
}
cout<<"\b\b\b = "<<fact;
getch();
}


