#include<iostream>
#include<cmath>
using namespace std;
//Finding the roots of the Equation.
float root(float a,float b,float c);
int main()
{
	int y1,y2,b,a,c;
	cin>>a>>b>>c;
	cout<<"value of a"<<a;
	cout<<"value of b"<<b;
	cout<<"value of c"<<c;
	root(a,b,c);
//	y2=root(a,b,c);
	
	return 0;
}
float root(float a,float b,float c)
{
	float d,y,x,y1,y2;
	d=b*b-4*a*c;
	
	x=-b+sqrt(d);
	y1=x/(2*a);
	cout<<"\n"<<y1;
	x=-b-sqrt(d);
	y2=x/(2*a);
	cout<<"\t"<<y2;
	return 0;
	}


