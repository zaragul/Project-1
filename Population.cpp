/*The population of a town A is less than the population of town B. However, the population of town A is growing faster than the population of town B. Write a program that prompts the user to enter the population and growth rate of each town. The program outputs after how many years the population of town A will be greater than or equal to the population of town B and the populations of both the towns at that time. (A sample input is: Population of town A=5000, growth rate of town A=4%, population of town B=8000, and growth rate of town B=2%.)*/

#include<iostream.h>
#include<conio.h>
void main()
{
int pa,pb;
float gra,grb, y=1;
cout<<"Population of town A : ";
cin>>pa;
cout<<"Growth rate of town A : ";
cin>>gra;
cout<<"Population of town B : ";
cin>>pb;
cout<<"Growth rate of town B : ";
cin>>grb;
if (pa<pb&&gra>grb)
{
	while (pa<pb)
	{
	pa=((gra/100)*pa)+pa;
	pb=((grb/100)*pb)+pb;
   y++;
	}
   cout<<"Years = "<<y;
   cout<<"\nPopulation of town A = "<<pa;
   cout<<"\nPopulation of town B = "<<pb;
}
else
cout<<"Invalid data.";
getch();
}


