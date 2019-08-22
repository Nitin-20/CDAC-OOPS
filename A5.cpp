#include<iostream>
using namespace std;
//the running sum of the n numbers.
int main()
{
	int n;
	cin>>n;
	int run(int n);
	cout<<run(n);	
	return 0;

}
int run(int n)
{
	if(n==0)
		return 0;
	else return(n+run(n-1));
}

