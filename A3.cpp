#include<iostream>
using namespace std;
//fibonacci series using recursion.
int main()
{	int n,p,i=0;
	cin>>n;
	int fib(int n);
	for(p=1;p<=n;p++)
	{	cout<<fib(i);
		i++;
	}
	return 0;
}
int fib(int n)
{
 	if(n==0)
	 return 0;
	else if (n==1)
		return 1;
	else
		return(fib(n-1)+fib(n-2));
}
