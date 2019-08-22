#include<iostream>
using namespace std;
//sum of 4 digits using recurssion.
int main()
	{ int n;
	cin>>n;
 int sum(int n);
	int r=sum(n);
	cout<<r;
	return 0;
	}
int sum(int n)

{
	if(n==0)
		return 0;
	else 
 		return(n%10+sum(n/10));
}
