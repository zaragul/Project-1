/*7. Write a program to calculate the square and cube of first ten even numbers.*/

#include<iostream.h>
#include<conio.h>
void main()
{
float i;
for (i=2;i<=20; i=i+2)
{
cout<<"Square of "<<i<<" = "<<(i*i)<<" \tCube of "<<i<<" = "<<(i*i*i)<<endl;
}
getch();
}

