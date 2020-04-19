/*Write a program that calculates the total grade for N classroom exercises as a percentage. Use the Decimal Format class to output the value as a percent. The user should input the value for N followed by each of the N scores and totals. Calculate the overall percentage (sum of the total points earned divided by the total points possible) and output it using the Decimal Format class. Sample input and output are shown below.*/

#include<iostream.h>
#include<conio.h>
void main()
{
float n,i,sums=0,sump=0,s,p;
cout<<"How many exercises to input? ";
cin>>n;
for (i=1; i<=n; i++)
{
cout<<"Score received for exercise "<<i<<" : ";
cin>>s;
sums=sums+s;
cout<<"Total points possible for exercise "<<i<<" : ";
cin>>p;
sump=sump+p;
}
cout<<"Your total is "<<sums<<" out of "<<sump<<" or "<<(sums/sump)*100<<"%";
getch();
}



