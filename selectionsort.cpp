#include<iostream>
using namespace std;
int a[]={2,5,3,1,4,7,9,8,6};
int main()
{
	int j;
	int n=9;
	for(int i=0;i<n;i++)
	{
		int min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		int temp=a[i];
		a[i]=a[min];
		a[min]=temp;
		for(int k=0;k<n;k++)
		    cout<<a[k]<<" ";
	}
	
}
