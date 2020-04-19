/*Write a program to find a squareroot of a number using Babylonian algorithm.*/

#include<iostream.h>
#include<conio.h>
void main()
{
double g,n,r,sg;
int i;
cout<<"Enter a number : ";
cin>>n;
g=n/2;
for (i=1; i<=15; i++)
{
r=n/g;
sg=(g+r)/2;
g=sg;
}
cout<<"Squareroot of "<<n<<" = "<<sg<<endl;
getch();
}


