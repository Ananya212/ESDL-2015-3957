#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter value of a and b";
cin>>a>>b;
cout<<"value of a is"<<a;
if (a<0||b<0)
{
  cout<<"enter valid value";
}
cout<<"value of b is"<<b;
c=a+b;
cout<<"End value is"<<c;
return 0;
}
