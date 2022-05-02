#include<iostream.h>
#include<conio.h>
template <class X,int size>
class Array
{
public:
X a[size];
 void getarray()
 {cout<<"\n enter elements of array\n";
 for(int i=0;i<size;i++)
 cin>>a[i];}
 void displayarray()
 {cout<<"\narray is\n";
 for(int i=0;i<size;i++)
 cout<<a[i]<<" ";}

};
void main()
{
Array <int,5> a1;
a1.getarray();
a1.displayarray();
getch();
}
