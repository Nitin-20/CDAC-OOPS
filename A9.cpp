#include<iostream>
using namespace std;
//take characters as input and print as string.
//int *p;
//p=new ar[n];
int main()
{
	char ar[100];
	string s;
	int n;
	cout<<"Enter size";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(int i=0;i<n;i++)
	{
		s=s+ar[i];
	}

cout<<s<<endl;
return 0;
}


