#include<iostream.h>
#include<conio.h>
#include<string.h>
template <class X,class Y>
X sum(X num,Y string)
{
X ans;
ans=num+strlen(string);
return(ans);
}
void main()
{clrscr();
int n,i;
float f;
double d;
char string[20];
cout<<"Enter 1 for int 2 for float 3 for double ";
cin>>n;
cout<<"Enter the string";
cin>>string;
cout<<"Enter value of number in format you chose";
if(n==1)
{cin>>i;
cout<<"Integer Sum is "<<sum(i,string);}
if(n==2)
{cin>>f;
cout<<"Float sum is "<<sum(f,string);}
if(n==3)
{//int data;
cin>>d;
cout<<"Double sum is "<<sum(d,string);
//data=sizeof(sum(d,string);
}
getch();
}
