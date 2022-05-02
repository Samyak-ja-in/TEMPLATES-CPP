#include<conio.h>
#include<iostream.h>
template <class X>
void swap(X p)
{
X a;
X b;
X temp;
cout<<"Enter a and b ";
cin>>a>>b;
cout<<"\na="<<a<<"\nb="<<b;
temp=a;
a=b;
b=temp;
cout<<"\nAfter swapping";
cout<<"\na="<<a<<"\nb="<<b;
cout<<"\n"<<sizeof(a)<<"\n"<<sizeof(b);
}
void main()
{
clrscr();
int n;
cout<<"Enter 1 for int and 2 for float 3 for double ";
cin>>n;
while(n)
{if(n==1)
{int a=1;
swap(a);break;}
if(n==2)
{float b=3.2;
swap(b);break;}
if(n==3)
{double c=3.44;
swap(c);break;}
else
{cout<<"Enter a good value";
cin>>n;}
}
getch();
}