#include <iostream>
using namespace std;
int main()
{
    int n,c,i;
    cin>>n;
    c=n;
    for(i=1;i<n;i++)
    c=c*i;
    cout<<c;
    return 0;
}
