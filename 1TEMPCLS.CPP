#include<iostream.h>
#include<conio.h>
template <class T>
class Rectangle
{
T len,wid;
public:
Rectangle(T a,T b)
{len=a;wid=b;}
T area()
{return(len*wid);}
T perimeter();};
template <class T>
T Rectangle<T>::perimeter()
{return(2*(len+wid));}

void main()
{clrscr();
int n;
cout<<"int->1    float->2     double->3\n";
cin>>n;
cout<<"Enter length and width ";
if(n==1)
{int len,wid;
cin>>len>>wid;
Rectangle <int> r1(len,wid);
cout<<"area="<<r1.area()<<"  Perimeter="<<r1.perimeter();}
if(n==2)
{float len,wid;
cin>>len>>wid;
Rectangle <float> r1(len,wid);
cout<<"area="<<r1.area()<<"  Perimeter="<<r1.perimeter();}
if(n==3)
{double len,wid;
cin>>len>>wid;
Rectangle <double> r1(len,wid);
cout<<"Area="<<r1.area()<<"   Perimeter="<<r1.perimeter();}
getch();
}