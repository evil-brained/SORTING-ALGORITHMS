#include<iostream>
using namespace std;
void merge(int arr[],int p,int q,int r)
{
	int b[100];//a duplicate array to store the elements in sorted order
	int i=p;
	int j=q+1;
	int k=p;
	while(i<=q && j<=r)
	{
		if(arr[i]<=arr[j])
		{
			b[k]=arr[i];
			i++;
		}
		else
		{
			b[k]=arr[j];
			j++;
		}
		k++;
	}
	if(i>q)
	{
		while(j<=r)
		{
			b[k]=arr[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=q)
		{
			b[k]=arr[i];
			i++;
			k++;
		}
	}
	for(i=p;i<=r;i++)//copying elements from duplicate array to the orignal array after sorting
	{
		arr[i]=b[i];
	}
}
void mergeSort(int arr[], int l, int r) 
{
  if (l < r) 
  {
    
    int m = (l + r) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);// Merge the sorted subarrays
  }
}
void printArray(int arr[], int size) 
{
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
}
int main() 
{
  int arr[] = {85, 24, 63, 45, 17, 31, 96, 50};
  int size = sizeof(arr) / sizeof(arr[0]);
  mergeSort(arr, 0, size - 1);
  cout << "Sorted array: \n";
  printArray(arr, size);
  return 0;
}
