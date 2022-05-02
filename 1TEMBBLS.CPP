//SORTING ELEMENTS OF ARRAY IN ASCENDING ORDER
//BUBBLE SORTING
//FUNCTION TEMPLATES
#include<conio.h>
#include<iostream.h>
template<class T>
void getarray(T z)
{ int n;
  int i;
  T a[100];
 cout<<"enter number of elements in array";
 cin>>n;
 cout<<"\n enter elements of array";
 for(i=0;i<n;i++)
 cin>>a[i];
 min(a,n);
}
template<class X>
void swap(X &a,X &b)
{
 X temp=b;
 b=a;
 a=temp;
}
template<class U>
void min(U a[],int n)
{ int i;
 for( i=0;i<n-1;i++)
 {
  for(int j=n-1;i<j;j--)
  {
    if(a[j]<a[j-1])
     {swap(a[j],a[j-1]);}
  }
 }
 cout<<"\nsorted array is";
 for(i=0;i<n;i++)
 {cout<<a[i]<<"\n";}
}
void main()
{  clrscr();
   int p;
  cout<<"\nenter 1 for integer array\nenter 2 for float array \n enter 3 for character \n";
  cin>>p;
  if(p==1)
  {getarray(p);}
  else
  if(p==2)
  {float q=1.7;
  getarray(q);}
  if(p==3)
  {char q='a';
  getarray(q);}
getch();
}