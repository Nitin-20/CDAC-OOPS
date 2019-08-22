#include<iostream>
using namespace std;
//find the average of n numbers.
int avg(int a[],int n)
{ 	
	int sum=0;
	 for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
	}
	 	sum=sum/n;
		cout<<sum;
}
int main()
{
	int n;
	cin>>n;
	cout<<"Enter number";
	int a[n];
	 for(int i=0;i<n;i++)
        {
                cin>>a[i];
        }
		avg(a,n);
		return 0;
}
