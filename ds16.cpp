//practical16
#include <iostream>
using namespace std;

int main()
{
    char choice;
    int v = 0;
    int flag = 0, q;
    cout << "enter the number of vertices of undirected graph";
    cin >> v;
    int ar[v][v]={0};
    for (int i = 0; i <=v/2+1; i++)
    {
        for (int j = 0; j < v; j++)
        {
        	if(i<=j){
            	cout << "\n How many edge from " << char(96+ i+1 ) << " to " << char(96+j+1) << " - ";
            	cin >> ar[i][j];
            	ar[j][i]=ar[i][j];
        	}
        }
    }
    cout << "the adjancy matrix of graph is \n";
    for (int k = 0; k < v; k++)
    {
        for (int l = 0; l < v; l++)
        {
        	if(ar[k][l]>0)
        	{
        		ar[k][l]=1;
			}
	}
    for (int k = 0; k < v; k++)
    {
        cout << endl;
        for (int l = 0; l < v; l++)
            cout << ar[k][l] << " ";
    }

    for (int p = 0; p < v; p++)
    {
        cout << endl;
        for (int q = 0; q < v; q++)
        {
        	if(p==q){
        		if (ar[p][q] == 1)
                {
                    flag = 1;
                    break;
                }
			}
			if ((p != q) && (p < q))
            {
                if (ar[p][q] != 1)
                {
                    flag = 1;
                    break;
                }
            }
        }
    }

    if (flag == 1)
    {
        cout << "this is a not complete graph\n";
    }
    else
    {
        cout << "this is a complete graph\n";
    }
    return 0;
}
}

