#include<iostream>
using namespace std;
void revstring(char &arr)
{
 
 int i,l=0;char *ptr=&arr;
 for(i=0;*(ptr+i)!='\0';i++)
    {
    l++;
    }
 for(i=l-1;i>=0;i--)
    {
    cout<<*(ptr+i); 
    }
}
int main()
  {
  char arr[]={"Programming language..."};
  cout<<arr<<"\n  "<<&arr<<"\n "<<&arr[1]<<"\n";
  revstring(arr[0]);
  return 0;
  }
