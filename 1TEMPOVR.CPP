#include<conio.h>
#include<iostream.h>
template <class T>
void display( T x)
{
 cout<<"\ndata type\n entered value is ";
 cout<<x;
}
void display(int y)
{
 cout<<"\ninteger type\nentered value is ";
 cout<<y;
}
void main()
{
clrscr();
int n;
cout<<"\n enter 1 for int type\nenter 2 forfloat type\nenter3 forchar type\n";
cin>>n;
if(n==1)
{int a;
cout<<"enter value of a";
cin>>a;
display(a);}
else
if(n==2)
{float a;
cout<<"enter value of a";
cin>>a;
display(a);}
else
if(n==3)
{char a;
cout<<"enter value of a";
cin>>a;
display(a);}
getch();
}
