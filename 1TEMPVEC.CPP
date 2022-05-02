//To create a vector class and create two vectors
//to modify value of the vector
//to multiply vector with scalar value
//to display vector in form(10,20,30)
//to find scalar product of two vectors
#include<conio.h>
#include<iostream.h>
template <class T>
class vector
{  private:
    T a[3];
    public:
 vector()
 {
  cout<<"\nenter three values";
  for(int i=0;i<3;i++)
  cin>>a[i];
 }
 void displayvector()
 {
 cout<<"\nvector is";
 cout<<"(";
 for(int i=0;i<3;i++)
 {
 cout<<a[i];
 if(i<2)
 cout<<",";
 }
 cout<<")";
 }
 void modify()
 { int j;
   T r;
  cout<<"enter place you want to modify";
  cin>>j;
  cout<<"\n enter value by which you want to replace it";
  cin>>r;
  a[j-1]=r;
 }
 void scalarmul()
 { T v;
 int i;
 cout<<"\n enter value which you wnat to multiply";
 cin>>v;
 for(i=0;i<3;i++)
 a[i]=a[i]*v;
 }
 T dot(vector M)
 { T sum=0;
 T o;
 for(int i=0;i<3;i++)
  {o=a[i]*M.a[i];
  sum=sum+o;}
  return(sum);
 }
};
void main()
{
clrscr();
 int p;
 cout<<"enter 1 for int type vector\nenter 2 for float type vector\n";
 cin>>p;
 if(p==1)
 {
 vector<int> v1;
 v1.displayvector();
 vector<int> v2;
 v2.displayvector();
 cout<<"\n vector 2 modification";
 v2.modify();
 cout<<"\n after modification";
 v2.displayvector();
 cout<<"\n scalar multiplication of vector 1";
 v1.scalarmul();
 cout<<"\nafter multiplication vector is";
 v1.displayvector();
 cout<<"\n scalar product of entered vectors is";
 cout<<v1.dot(v2);
 }
 else
 if(p==2)
 {
 vector<float> v1;
 v1.displayvector();
 vector<float> v2;
 v2.displayvector();
 cout<<"\n vector 2 modification";
 v2.modify();
 v2.displayvector();
 cout<<"\nscalar multiplication of vector 1";
 v1.scalarmul();
 cout<<"\n after multiplication vector is";
 v1.displayvector();
 cout<<"\n scalar product of entered vectors is";
 cout<<v1.dot(v2);
 }
 getch();
}