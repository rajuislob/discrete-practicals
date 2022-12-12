//practical9
#include <iostream>
using namespace std;
void pra(int arr[],int n)
{
	cout<<"[ ";
	for(int f=0;f<n-1;f++)
	{
		cout<<arr[f]<<" , ";
	}
	cout<<arr[n-1]<<" ]";
}
void insorta(int arr[],int n)
{
	int i,j,key,c_p;
	for(i=1;i<n;i++)
	{
		c_p=0;
		key=arr[i];
		j=i-1;
		pra(arr,n);
		cout<<" -> ";
		while(j>=0 && arr[j] > key)
		{
			c_p++;
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1]=key;
		pra(arr,n);
		cout<<endl;
	}
}
void insortd(int arr[],int n)
{
	int i,j,key,c_p;
	for(i=1;i<n;i++)
	{
		c_p=0;
		key=arr[i];
		j=i-1;
		pra(arr,n);
		cout<<" -> ";
		while(j>=0 && arr[j] < key)
		{
			c_p++;
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1]=key;
		pra(arr,n);
		cout<<endl;
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
		cout<<"insertion sort in ascending order "<<endl;
		insorta(arr,n);
	}
	else if(choice==2){
		cout<<"insertion sort in desending order "<<endl;
		insortd(arr,n);
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
