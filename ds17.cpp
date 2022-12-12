//practical17s
#include <iostream>
using namespace std;

int main()
{
	int v;
	cout<<"enter no of vertrx in graph ";
	cin>>v;
	cout<<endl;
	int arr[v][v]={0};
	int tg=0;
	cout<<"press 1 to enter directed graph , press 2 to enter un directed graph"<<endl;
	cin>>tg;
	if(tg==1)
	{
		cout<<"enter edeges for the graph "<<endl;
		for(int i=0;i<v;i++)
		{
			for(int j=0;j<v;j++)
			{
				int e;
				cout<<"enter no of edges from vertex "<<i+1<<" to vertex "<<j+1<<" : ";
				cin>>e;
				cout<<endl;
				arr[i][j]=e;
			}
		}
	}
	else if(tg==2)
	{
		cout<<"enter edeges for the graph "<<endl;
		for (int i = 0; i <=v/2+1; i++)
    {
        for (int j = 0; j < v; j++)
        {
        	if(i<=j){
            	cout << "\n How many edge from " << char(96+ i+1 ) << " to " << char(96+j+1) << " - ";
            	cin >> arr[i][j];
            	arr[j][i]=arr[i][j];
        	}
        }
    }
	}
	
	cout<<"matrix representation of entered graph "<<endl;
	for(int i=0;i<v;i++)
	{
		for(int j=0;j<v;j++)
		{
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<"in degree and out degree for each vertex "<<endl;
	for(int i=0;i<v;i++)
	{
		int in=0,out=0;
		for(int j=0;j<v;j++)
		{
			if(arr[i][j]>0)
			{
				out+=arr[i][j];
			}
			if(arr[j][i]>0)
			{
				in+=arr[j][i];
			}
		}
		cout<<"in degree of vertex : "<<(char)(97+i)<<" is : "<<in<<endl;	
		cout<<"out degree of vertex : "<<(char)(97+i)<<" is : "<<out<<endl<<endl;	
	}
	return 0;
}
