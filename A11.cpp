#include<iostream>
using namespace std;
//accept n numbers user and multiply by 2 & display result.
int multi(int a[],int n)
        {
		

                for(int j=0;j<n;j++)
		{              
		       	cout<<(a[j]*2)<<"\t";
		}
               /* for(i=0;i<n;i++)
                        cout<<a[i];*/
		return 0;
        }


int main()
{
	int n;
	cin>>n;
	    int a[n];

	for(int i=0;i<n;i++)
	{	
		cin>>a[i];
	}	
	multi(a,n);
	return 0;
}

