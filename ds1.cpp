//practical1
#include <iostream>
#include<cmath>
using namespace std;

class ar_sr
{
    public :
        int n;
        
        void get_array_size()
        {
            cout<<"enter size of the array :";
            cin>>n;
            cout<<endl;
        }
        int *arr =new int[n];
        void get_array_elements()
        {
            cout<<"enter elements in dynamic array"<<endl;
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }
            cout<<endl;
        }
        void remove_duplicay()
        {
            int i,j,k;
            for (i = 0; i < n; i++) 
            {
                for (j = i + 1; j < n;)
                {
                    if (arr[j] == arr[i])
                    {
                        for (k = j; k < n; k++)
                        {
                            arr[k] = arr[k + 1];
                            
                        }
                        n--;
                    }
                    else{
                        j++;
                    }
                }
            }
        }
        void display_set()
        {
            cout<<"{ ";
            for(int i=0;i<n;i++)
            {
                if(i<n-1)
                {
                    cout<<arr[i]<<" , ";
                }
                else
                {
                    cout<<arr[i];
                }
            }
            cout<<" } "<<endl;
        }
        bool ismember(){
            int f=0,d;
            cout<<"enter element to search"<<endl;
            cin>>d;
            for(int i=0;i<n;i++)
            {
                if(arr[i]==d)
                {
                    f=1;
                }
                else{
                    
                }
            }
            if(f==1)
            {
                cout<<"found"<<endl;
                return true;
            }
            else
            {
                cout<<"not found"<<endl;
                return false;
            }
        }
        void show_cardinality()
        {
        	cout<<"cardinality of set is :"<<n<<endl;
		}
		void power_set()
		{
			int powsize = pow(2,n) ;;
			cout<<" { ";
			for(int i =0;i<powsize;i++)
			{
				cout<<"{ ";
				for(int j=0;j<n;j++)
				{
					int f=pow(2,j);
					if((i & f) != 0)
					{
						cout<<arr[j]<<" ";
					}
				}
				cout<<" } ";
			}
			cout<<" } ";
			
		}
        
};

int main() 
{
    ar_sr obj;
    int j=0,l;
    char q='y';
    obj.get_array_size();
    obj.get_array_elements();
    obj.remove_duplicay();
    obj.display_set();
    obj.show_cardinality();
    do
    {
        cout<<"press 1 to search an element "<<endl;
        cout<<"press 2 to print power set"<<endl;
        cout<<"press 3 to exit"<<endl;
        cin>>j;
        switch(j)
        {
            case 1 :
            	l=obj.ismember();
            	cout<<l;
            	break;
            case 2 :
				obj.power_set();
				break;                
            case 3 :
            	q='z';
            	break;
            default :
                cout<<"entered wrong choice"<<endl;
        }
        if(int(q)==int('y'))
        {
        	cout<<endl<<"do you want to continue y/n ";
        	cin>>q;
        	cout<<endl;
		}
		else
		{
			cout<<"exiciting"<<endl;
		}
    }
    while(int(q)==int('y'));
    return 0;
}
