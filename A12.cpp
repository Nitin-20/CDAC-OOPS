#include<iostream>
using namespace std;
//find min max.
int sort(int a[],int n)

{
        int temp;
        for(int i=0;i<n;i++)
        {
                for(int j=i+1;j<n;j++)
                {
                        if(a[i]>=a[j])
                        {       temp=a[i];
                                a[i]=a[j];
                                a[j]=temp;
                        }

                }
        }

    	cout<<"min:"<<a[0]<<"\t"<<"second min:"<<a[1]<<"\t"<<"second max:"<<a[n-2]<<"\t"<<"max:"<<a[n-1];
}
int main()
{       int n;
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

