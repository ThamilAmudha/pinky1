
#include <iostream>
using namespace std;
int main()
{
    int n=0,i,j,c=0;
   char a[100],b[100];
   cin>>a;
   for(i=0;a[i]!='\0';i++)
   {
   n++;
   }
   for(j=0;a[j]<n;j++)
   {
   b[j]=a[n-j-1];
   if(b[j]!=a[j])
   {
       c++;
   }
   }
    if(c==0)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}
