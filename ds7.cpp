//practical7
#include <iostream>
#include<algorithm>
using namespace std;
int binsc(int arr[],int li, int ri, int num)
{
	int mi = (li + ri)/2;
	if(ri>=li)
	{
		if(arr[mi] == num)
		{
			return mi;
		}
		if(arr[mi]>num)
		{
			return binsc(arr,li,mi-1,num);
		}
		else
		{
			return binsc(arr,mi+1,ri,num);
		}
	}
	return -1;
}
int main()
{
	int n,num;
	cout<<"enter size of array ";
	cin>>n;
	cout<<endl;
	int arr[n];
	cout<<"enter array values"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"at index "<<i<<" : ";
		cin>>arr[i];
		cout<<endl;
	}
	cout<<"number to be searched ";
	cin>>num;
	cout<<endl;
	sort(arr,arr+n);
	int result =binsc(arr,0,n-1,num);
	if(result == -1)
	{
		cout<<"not found";
	}
	else
	{
		cout<<num<<" found at index :"<<result;
	}
	return 0;
}
