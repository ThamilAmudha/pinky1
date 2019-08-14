#include <iostream>
using namespace std;

int main() {
	int a,b,c,count,range,temp,i;
	cin>>a>>b>>range;
	if(a>b)
	c=a-b;
	else
	c=b-a;
	count=a+b;
	for(i=0;i<range-2;i++)
	{
		count=count+c;
		cout<<c<<" ";
		temp=c;
		if(c>b)
		{
			c=c-b;
		}
		else
		{
			c=b-c;
		}
		b=temp;
		
	}
	cout<<endl<<count;
	return 0;
}
