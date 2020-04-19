/*You are running a courier agency. The weight of a parcel determines the number of stamps that will be needed to send that parcel. For each kilogram, a stamp of $2 is needed. Also, the courier company charges an additional rate depending on where the courier must be delivered. The charges are $20 for delivery within the city of posting, and $40 for delivery anywhere else in the country. Write a computer program to calculate and display the total cost of parcel depending on the weight and delivery location of the parcel.*/

#include<iostream.h>
#include<conio.h>
void main()
{
int w, ch, p, c;
cout<<"Enter the weight of the parcel in kg : ";
cin>>w;
cout<<"\nFor sending parcel within the city enter 1\n\nFor sending parcel anywhere in the country enter 2 : ";
cin>>ch;
if (ch==1)
{
p=20;
c=(w*2)+p;
cout<<"\nCost of parcel = "<<"$"<<c;
}
else if (ch==2)
{
p=40;
c=(w*2)+p;
cout<<"\nCost of parcel = "<<"$"<<c;
}
else
cout<<"\nInvalid input.";
getch();
}


