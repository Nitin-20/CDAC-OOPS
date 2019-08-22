#include<iostream>
using namespace std;
//take characters as input and print as string.
int main()
{
	int n;
	cin>>n;
	char ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<ar[i];
	}
return 0;
}


