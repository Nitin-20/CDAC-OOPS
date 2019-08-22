#include<iostream>
using namespace std;
//sum of four digit using loop.
int main()
{
	int n,n1,i,sum=0;
	cin>>n;
	for(i=0;i<=n;i++)
	{
		n1=n%10;
	       sum=sum+n1;
	       n=n/10;
	       
	}
	cout<<sum;
	return 0;
}
