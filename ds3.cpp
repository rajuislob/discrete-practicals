//practical3
#include <iostream>
using namespace std;
class ss
{
	public :
		int n1;
		int *arr1;
		int **arr;
		
		void get_set1_size()
        {
            cout<<"enter size of the set :";
            cin>>n1;
            arr1= new int[n1];
            arr=new int *[n1];
            for(int i=0;i<n1;i++)
		    {
		        arr[i] = new int[n1];
		    }
            cout<<endl;
   		}
        void get_set1_elements()
        {
            cout<<"enter elements in set"<<endl;
            for(int i=0;i<n1;i++)
            {
                cin>>arr1[i];
            }
            cout<<endl;
        }
        void inar()
		{
		    
		    for(int i=0;i<n1;i++)
		    {
		        for(int j=0;j<n1;j++)
		        {
		            arr[i][j]=0;
		        }
		    }
		}
        void get_op()
        {
            int f;
            cout<<"no of op";
            cin>>f;
            while(f--)
            {
                int a,b;
                cin>>a>>b;
                for(int i=0;i<n1;i++)
                {
                    for(int j=0;j<n1;j++)
                    {
                        if((arr1[i]==a)&&(arr1[j]==b))
                        {
                            arr[i][j]=1;
                        }
                    }
                }
            }
        }
		void show_m_r()
		{
			cout<<"relation matrix"<<endl<<"   ";
			for(int i=0;i<n1;i++)
			{
				cout<<arr1[i]<<"   ";
			}
			cout<<endl;
			for(int i=0;i<n1;i++)
			{
				cout<<arr1[i]<<"  ";
				for(int j=0;j<n1;j++)
				{
					cout<<arr[i][j]<<"   ";
				}
				cout<<endl;
			}
		}
		bool is_r()
		{
			bool g=true;
			for(int i=0;i<n1;i++)
			{
				for(int j=0;j<n1;j++)
				{
					if(i==j)
					{
						g=g && (arr[i][j] == 1);
					}
				}
			}
			return g;
		}
		bool is_s()
		{
			bool g=true;
			for(int i=0;i<n1;i++)
			{
				for(int j=0;j<n1;j++)
				{
					g=g && (arr[i][j] == arr[j][i]);
				}
			}
			return g;
		}
		bool is_t()
		{
			bool g=true;
			for(int i=0;i<n1;i++)
			{
				for(int j=0;j<n1;j++)
				{
					for(int k=0;k<n1;k++)
					{
						if(arr[i][j] == 1 && arr[j][k] == 1)
						{
							g= g && (arr[i][k] == 1) ;
						}
					}
				}
			}
			return g;
		}
		bool is_as()
		{
			bool g=true;
			for(int i=0;i<n1;i++)
			{
				for(int j=0;j<n1;j++)
				{
					if(arr[i][j]==1 && arr[j][i]==1 && i != j)
					{
						g=false;
						return g;
					}
					else
					{
						g=true;
					}
				}
			}
			return g;
		}
		
							
};
int main()
{
	ss obj;
	obj.get_set1_size();
	obj.get_set1_elements();
	obj.inar();
	obj.get_op();
	obj.show_m_r();
	if(obj.is_s())
	{
		cout<<endl<<"relation is symmetric"<<endl;
	}
	else
	{
		cout<<endl<<"relation is not symmetric"<<endl;
	}
	if(obj.is_r())
	{
		cout<<endl<<"relation is reflexive"<<endl;
	}
	else
	{
		cout<<endl<<"relation is not reflexive"<<endl;
	}	
	if(obj.is_t())
	{
		cout<<endl<<"relation is transitive"<<endl;
	}
	else
	{
		cout<<endl<<"relation is not transitive"<<endl;
	}
	if(obj.is_as())
	{
		cout<<endl<<"relation is anti symmetric"<<endl;
	}
	else
	{
		cout<<endl<<"relation is not anti symmetric"<<endl;
	}		
	return 0;
}
