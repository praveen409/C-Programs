#include<iostream>
using namespace std;
 
int main()
{
int x[3],*ptr,a=10,i;
cout<<"Enter three number:\n";
for(i=0;i<3;i++)
   {
   cin>>x[i];
   }
int &y=x[1];
int &z=x[2];
cout<<"The value is "<<*(x+0)<<y<<z<<"\n";
return 0;
}
