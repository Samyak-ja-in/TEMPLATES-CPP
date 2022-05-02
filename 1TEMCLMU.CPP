#include<iostream.h>
#include<conio.h>
template <class x,class y>
class student
{x name;
y rollno;
public:
student(x X,y Y)
{name=X;
rollno=Y;}
void showdata()
{cout<<"name="<<name<<"  Rollno="<<rollno;}
};
void main()
{
char name[20];
int rollno;
cin>>name>>rollno;
student <char*,int> s1(name,rollno);
s1.showdata();
getch();
}