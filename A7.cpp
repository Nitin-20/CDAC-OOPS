#include<iostream>
using namespace std;
//factorial series.
int facto(int a);
int main()
{ 
	int a;
	cout<<"Enter any no.";
	cin>>a;
	facto(a);
}
int facto(int a)
{	int fact=1,i;
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
		cout<<fact<<"\t";

	}
		
//	cout<<"factorial is:"<<fact;
	return 0;
}

