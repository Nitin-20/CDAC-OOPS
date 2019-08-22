#include<iostream>
using namespace std;
//Binary Equivalent of the number using recursion.
int main()
{
	int n;
	cin>>n;
	int bin(int n);
	cout<<bin(n);
	return 0;
}
int bin(int n)
{
	int r;
	if(n==0)
		return 0;
	else
		return ((n%2)+10*bin(n/2));
}
