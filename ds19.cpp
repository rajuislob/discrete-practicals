//practical19
#include <iostream>
using namespace std;
int main()
{
    char charr[50], choice;
    int v, i, j, p = 0, sum = 0, flag = 0, c = 0;

    cout << "Enter number of vertices for a adjancency matrix of undirected graph \n";
    cin >> v;

    int arr[v][v], arr1[v];
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

    cout << "\n THE ADJANCY MATRIX : \n ";
    for (int m = 0; m < v; m++)
    {
        cout << endl;
        for (int n = 0; n < v; n++)
            cout << arr[m][n] << " ";
    }

    for (i = 0; i < v; i++)
    {
        sum = 0;
        for (j = 0; j < v; j++)
        {
            sum += arr[i][j];
        }
        arr1[i] = sum;
    }

    for (i = 0; i < v; i++)
    {
        cout << "\n THE DEGREE OF " << (char)(97 + i) << " -- " << arr1[i] << endl;
    }

    for (i = 0; i < v; i++)
    {
        if ((arr1[i] % 2) != 0)
        {
            cout << "\n There is no euler circuit exist \n";
            flag = 1;
            c++;
        }
    }

    if (flag == 0)
        cout << "\n There is euler circuit \n ";

    if (c == 2)
        cout << "\n  There is a euler path \n ";
    else
        cout << "\n There is no euler path \n";

    return 0;
}
