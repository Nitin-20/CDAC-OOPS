#include<iostream>
using namespace std;
//sort an array.
int sort(int a[],int n)

{
	int temp;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>=a[j])
			{	temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
	}

	for(int i=0;i<n;i++)
	{
	cout<<a[i]<<"\t";
	}
}
int main()
{	int n;
	cin>>n;
	int a[n];
	cout<<"Enter elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,n);
	
	return 0;
}
