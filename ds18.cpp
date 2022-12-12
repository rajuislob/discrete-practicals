//practical18
#include <iostream>
using namespace std;
void nopsd(int v,int arr[100][100],int s,int d,int p)
{
	int arr3[100][100],arr2[100][100];
	for(int i=0;i<v;i++)
	{
		for(int j=0;j<v;j++)
		{
			arr2[i][j]=arr[i][j];
		}
	}
	for (int l = 1; l <= p; l++)
        {
            for (int i = 0; i < v; i++)
            {
                for (int j = 0; j < v; j++)
                {
                    arr3[i][j] = 0;
                    for (int k = 0; k < v; k++)
                    {
                        arr3[i][j] += arr[i][k] * arr2[k][j];
                    }
                }
            }
            for (int i = 0; i < v; i++)
            {
                for (int j = 0; j < v; j++)
                {
                    arr2[i][j] = arr3[i][j];
                }
            }
        }
        cout << "\n no of path between vertex : " << s+1 << " and vertex : " << d+1<< "with path length : "<<p<<" is : ";
        cout << arr3[s][d];
    
}

int main()
{
	int v,s,d,p;
	cout<<"enter no of vertrx in undirected graph ";
	cin>>v;
	cout<<endl;
	int arr[100][100]={0};
	cout<<"enter edeges for the graph "<<endl;
	for(int i=0;i<=v/2+1;i++)
	{
		for(int j=i;j<v;j++)
		{
			int e;
			cout<<"enter no of edges from vertex "<<(char)(97+i)<<" to vertex "<<(char)(j+97)<<" : ";
			cin>>e;
			cout<<endl;
			arr[i][j]=e;
			arr[j][i]=e;
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
	cout<<"enter source vertex : ";
	cin>>s;
	s--;
	cout<<endl<<"enter destination vertex : ";
	cin>>d;
	d--;
	cout<<endl<<"enter path length : ";
	cin>>p;
	cout<<endl;
	nopsd(v,arr,s,d,p);
	return 0;
}
	
