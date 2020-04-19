/*Write a program that takes both the initial size of a green crud population (in pounds) and a few days as input, and that outputs the number of pounds of green crud after that many days. Assume that the population size is the same for 4 days and then increases every fifth day. Your program should allow the user to repeat this calculation as often as desired.*/

#include<iostream.h>
#include<conio.h>
void main()
{
int a,i,is,d,p,fp;
char c='y';
for (i=1; c=='y'||c=='Y'; i++)
{
	cout<<"Enter the initial size of green crud population : ";
	cin>>is;
	cout<<"Enter no. of days : ";
	cin>>d;
   if (d%5==0)
	p=d*2;
   else
   {
   a=(d/5);
   p=a*5*2;
   }
   fp=is+p;
   cout<<"\nNumber of pounds of green crud after "<<d<<" days is "<<fp;
   cout<<"\n\nDo you to repeat this calculation(y/n)?";
   cin>>c;
}
getch();
}

