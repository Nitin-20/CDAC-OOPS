#include<iostream>
using namespace std;
// find the area of circle,square & rectangle.
#define PI 3.14
	float circle(float  r);
        int square(int a);
        int rect(int l,int b);

int main()
{
	int r,l,a,b;
	cout<<"Enter radius of circle";
	cin>>r;
	cout<<"Enter length of square";
	cin>>a;
	cout<<"Enter length & breadth of square";
        cin>>l>>b;
	
	cout<<"area of circle"<<circle(r);
	cout<<endl;
	cout<<"area of square"<<square(a);
	cout<<endl;
	cout<<"area of rectangle"<<rect(l,b);
	cout<<endl;

}
float circle(float r)
{
	if(r==0)
		return 0;
	else 
		return (PI*r*r);
}
int square(int a)
{
	if(a==0)
		return 0;
	else
		return (a*a);

}
 int rect(int l,int b)
{
	if(l==0||b==0)
		return  0;
	else
		return (l*b);
}
