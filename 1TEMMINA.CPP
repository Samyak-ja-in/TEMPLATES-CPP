//To find minimum value present in array by using function template.
//HERE MIN FUNCTION ONLY FIND MIN ELEMENT OF ARRAY IT DOES'NT SORT THE ARRAY.
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
/*cout<<"\n array is";
for( i=0;i<n;i++)      //ONLY USED FOR DEBUGGIN THE CODE
cout<<a[i]<<"\n"; */
 for( i=0;i<n;i++)
  {
    if(a[i]<a[i+1])
     {if((i+1)<n)//important step agar ye nhi to min element garbage value
     swap(a[i],a[i+1]);}//se compare ho jata h aur error aa jaaati h.
  }
 /* cout<<"\n after swapping array is";
  for(i=0;i<n;i++)      //ONLY USED FOR DEBUGGING THE CODE.
  cout<<a[i]<<"\n"; */
 cout<<"minimum element of entered array is"<<a[n-1];
}
void main()
{  clrscr();
   int p;
  cout<<"\nenter 1 for integer array\nenter 2 for float array\n";
  cin>>p;
  if(p==1)
  {getarray(p);}
  else
  if(p==2)
  {float q=1.7;
  getarray(q);}
getch();
}

