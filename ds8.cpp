//practical8
#include <iostream>
using namespace std;

void bubblesorta(int arr[],int n)
{
	int c_p;
	for(int i=0;i<n-1;i++)
	{
		c_p=0;
		for(int j=0;j<n-i-1;j++)
		{
			c_p++;
			if(arr[j]>arr[j+1])
			{
				cout<<"[ ";
				for(int k=0;k<n;k++)
				{
					cout<<arr[k]<<" , ";
				}
				cout<<" ] -> ";
				swap(arr[j],arr[j+1]);
				cout<<"[ ";
				for(int k=0;k<n;k++)
				{
					cout<<arr[k]<<" , ";
				}
				cout<<" ] "<<endl;
			}
		}
		cout<<"no of comparisons in pass "<<i+1<<"is : "<<c_p<<endl;
	}
}
void bubblesortd(int arr[],int n)
{
	int c_p;
	for(int i=0;i<n-1;i++)
	{
		c_p=0;
		for(int j=0;j<n-i-1;j++)
		{
			c_p++;
			if(arr[j]<arr[j+1])
			{
				cout<<"[ ";
				for(int k=0;k<n;k++)
				{
					cout<<arr[k]<<" , ";
				}
				cout<<" ] -> ";
				swap(arr[j],arr[j+1]);
				cout<<"[ ";
				for(int k=0;k<n;k++)
				{
					cout<<arr[k]<<" , ";
				}
				cout<<" ] "<<endl;
			}
		}
		cout<<"no of comparisons in pass "<<i+1<<"is : "<<c_p<<endl;
	}
}
int main()
{
	int n,choice;
	char c;
	cout<<"enter size of array : ";
	cin>>n;
	int arr[n];
	cout<<"enter array to sort "<<endl;
	for(int q=0;q<n;q++)
	{
		cout<<"enter value at "<<q<<" : ";
		cin>>arr[q];
		cout<<endl;
	}
	
	do{
	cout<<"press 1 to sort in assending order ,press 2 to print in decending order "<<endl;
	cin>>choice;
	if(choice==1){
		cout<<"bubble sort in assending order "<<endl;
		bubblesorta(arr,n);
	}
	else if(choice==2){
		cout<<"bubble sort in desending order "<<endl;
		bubblesortd(arr,n);
	}
	else
	{
		cout<<"wrong choice entered";
	}
	cout<<"do you want to continue y/n"<<endl;
	cin>>c;
}
while(c=='y');
	return 0;
}
