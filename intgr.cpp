int main() {
	// your code goes here
	int n,i,j,a=1;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(a<=n)
			{
				cout<<a++<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
