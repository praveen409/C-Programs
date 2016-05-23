#include<iostream>
using namespace std;

void print(int *p)
    {
    int x;
    cout<<"Enter your number for add:\n";
    cin>>x;
    *p=*p+x;
    }
int main()
  {
     
  int sum=0;
  print(&sum);
  cout<<"The sum is "<<sum<<"\n";
  print(&sum);
  cout<<"The sum is "<<sum<<"\n";
  return 0;
  }
