//practical2
#include <iostream>
#include <set>
#include<cmath>
using namespace std;
class ss
{
	public :
		int n1;
		int n2;
		int n;
		int *arr1 = new int[n1];
		int *arr2 = new int[n2];
		int *arr = new int[n];
		int u;
		int *uarr=new int[u];
		void get_set1_size()
        {
            cout<<"enter size of the 1st set :";
            cin>>n1;
            cout<<endl;
        }
        void get_set2_size()
        {
            cout<<"enter size of the 2nd set :";
            cin>>n2;
            cout<<endl;
        }
        void get_set1_elements()
        {
            cout<<"enter elements in 1st set"<<endl;
            for(int i=0;i<n1;i++)
            {
                cin>>arr1[i];
            }
            cout<<endl;
        }
        void get_set2_elements()
        {
            cout<<"enter elements in 2nd set"<<endl;
            for(int i=0;i<n2;i++)
            {
                cin>>arr2[i];
            }
            cout<<endl;
        }
        void remove_duplicay_set_1()
        {
            int i,j,k;
            for (i = 0; i < n1; i++) 
            {
                for (j = i + 1; j < n1;)
                {
                    if (arr1[j] == arr1[i])
                    {
                        for (k = j; k < n1; k++)
                        {
                            arr1[k] = arr1[k + 1];
                            
                        }
                        n1--;
                    }
                    else{
                        j++;
                    }
                }
            }
        }
        void remove_duplicay_set_2()
        {
            int i,j,k;
            for (i = 0; i < n2; i++) 
            {
                for (j = i + 1; j < n2;)
                {
                    if (arr2[j] == arr2[i])
                    {
                        for (k = j; k < n2; k++)
                        {
                            arr2[k] = arr2[k + 1];
                            
                        }
                        n2--;
                    }
                    else{
                        j++;
                    }
                }
            }
        }
        void display_set_1()
        {
            cout<<"{ ";
            for(int i=0;i<n1;i++)
            {
                if(i<n1-1)
                {
                    cout<<arr1[i]<<" , ";
                }
                else
                {
                    cout<<arr1[i];
                }
            }
            cout<<" } "<<endl;
        }
        void display_set2()
        {
            cout<<"{ ";
            for(int i=0;i<n2;i++)
            {
                if(i<n2-1)
                {
                    cout<<arr2[i]<<" , ";
                }
                else
                {
                    cout<<arr2[i];
                }
            }
            cout<<" } "<<endl;
        }
        bool check_arr1_subset_of_ar2_part1()
        {
        	int i,j;
        	for(i=0;i<n1;i++)
        	{
        		for(j=0;j<n2;j++)
        		{
        			if(arr1[i]==arr2[j])
        			{
        				break;
					}
				}
				if(j==n2)
				{
					return false;
				}
			}
			return true;
		}
		bool check_arr2_subset_of_ar1()
        {
		int i,j;      	
        	for(i=0;i<n2;i++)
        	{
        		for(j=0;j<n1;j++)
        		{
        			if(arr2[i]==arr1[j])
        			{
        				break;
					}
				}
				if(j==n1)
				{
					return false;
				}
			}
			return true;
		}
		void union_set()
		{
			int *u = new int[n1+n2];
			int j=n1;
			int f;
			for(int i=0;i<n1;i++)
			{
				u[i]=arr1[i];
			}
			for(int k=0;k<n2;k++)
			{
				f=0;
				for(int q=0;q<n1;q++)
				{
					if(arr2[k]==arr1[q]){
						f=1;
					}
					else
					{
						//do nothing
					}
				}
				if(f==0)
				{
					u[j]=arr2[k];
					j++;
				}
			}
			cout<<"union of sets"<<endl<<"{  ";
			for(int i=0;i<j;i++)
			{
				cout<<u[i]<<"  ";
			}
			cout<<" }"<<endl;
		}
		void intersection_set()
		{
			int size=min(n1,n2);
			int flag=0;
			int *isa = new int[min(n1,n2)];
			for(int i=0;i<n1;i++)
			{
				for(int j=0;j<n2;j++)
				{
					if(arr1[i]==arr2[j]){
						isa[flag]=arr1[i];
						flag++;
					}
				}
			}
			cout<<"intersection of two sets "<<endl<<"{ ";
			for(int i=0;i<flag;i++)
			{
				cout<<isa[i]<<" ";
			}
			cout<<" }"<<endl;
			
		}
		void get_uarr_size()
        {
            cout<<"enter size of the universal set :";
            cin>>u;
            cout<<endl;
        }
		void get_uarr_elements()
        {
            cout<<"enter elements in universal set"<<endl;
            for(int i=0;i<u;i++)
            {
                cin>>uarr[i];
            }
            cout<<endl;
        }
        void remove_duplicay_set_u()
        {
            int i,j,k;
            for (i = 0; i < u; i++) 
            {
                for (j = i + 1; j < u;)
                {
                    if (uarr[j] == uarr[i])
                    {
                        for (k = j; k < n1; k++)
                        {
                            uarr[k] = uarr[k + 1];
                            
                        }
                        u--;
                    }
                    else{
                        j++;
                    }
                }
            }
        }
        void get_set_size()
        {
            cout<<"enter size of the set :";
            cin>>n;
            cout<<endl;
        }
        void get_set_elements()
        {
            cout<<"enter elements in set"<<endl;
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }
            cout<<endl;
        }
        void remove_duplicay_set()
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
		void compliment()
		{
			int cs[u-n]={0};
			int flag,k=0;
			for(int i=0;i<u;i++)
			{
				flag=0;
				for(int j=0;j<n;j++)
				{
					if(uarr[i]==arr[j]){
						flag=1;
					}
				}
				if(flag==0)
				{
					cs[k]=uarr[i];
					k++;
				}				
			}
			cout<<"compliment of set "<<endl<<"{ ";
			for(int l=0;l<k;l++)
			{
				cout<<cs[l]<<"  ";
			}
			cout<<" }"<<endl;
		}
		void set_difference_12()
		{
			int * setd=new int[n1];
			int ssize=0;
			int size=min(n1,n2);
			int flag=0;
			int f;
			int *isa = new int[min(n1,n2)];
			for(int i=0;i<n1;i++)
			{
				for(int j=0;j<n2;j++)
				{
					if(arr1[i]==arr2[j]){
						isa[flag]=arr1[i];
						flag++;
					}
				}
			}
			size=flag;
			for(int i=0;i<n1;i++)
			{
				f=0;
				for(int j=0;j<size;j++)
				{
					if(arr1[i]==isa[j]){
						f=1;
					}
				}
				if(f==0)
				{
					setd[ssize]=arr1[i];
					ssize++;
				}
			}
			cout<<"is "<<endl<<"{ ";
			for(int i=0;i<ssize;i++)
			{
				cout<<setd[i]<<" ";
			}
			cout<<" }"<<endl;
		}
		void set_difference_21()
		{
			int * setd=new int[n2];
			int ssize=0;
			int size=min(n1,n2);
			int flag=0;
			int f;
			int *isa = new int[min(n1,n2)];
			for(int i=0;i<n1;i++)
			{
				for(int j=0;j<n2;j++)
				{
					if(arr1[i]==arr2[j]){
						isa[flag]=arr1[i];
						flag++;
					}
				}
			}
			size=flag;
			for(int i=0;i<n2;i++)
			{
				f=0;
				for(int j=0;j<size;j++)
				{
					if(arr2[i]==isa[j]){
						f=1;
					}
				}
				if(f==0)
				{
					setd[ssize]=arr2[i];
					ssize++;
				}
				
			}
			cout<<"is "<<endl<<"{ ";
			for(int i=0;i<ssize;i++)
			{
				cout<<setd[i]<<" ";
			}
			cout<<" }"<<endl;
		}
		void sydiference()
		{
			int size=min(n1,n2);
			int flag=0;
			int f1,f2;
			int *isa = new int[size];
			for(int i=0;i<n1;i++)
			{
				for(int j=0;j<n2;j++)
				{
					if(arr1[i]==arr2[j]){
						isa[flag]=arr1[i];
						flag++;
					}
				}
			}
			size=flag;
			int * setd1=new int[n1];
			int ssize1=0;
			for(int i=0;i<n1;i++)
			{
				f1=0;
				for(int j=0;j<size;j++)
				{
					if(arr1[i]==isa[j]){
						f1=1;
					}
				}
				if(f1==0)
				{
					setd1[ssize1]=arr1[i];
					ssize1++;
				}
			}
			cout<<"is "<<endl<<"{ ";
			for(int i=0;i<ssize1;i++)
			{
				cout<<setd1[i]<<" ";
			}
			int * setd2=new int[n2];
			int ssize2=0;
			for(int i=0;i<n2;i++)
			{
				f2=0;
				for(int j=0;j<size;j++)
				{
					if(arr2[i]==isa[j]){
						f2=1;
					}
				}
				if(f2==0)
				{
					setd2[ssize2]=arr2[i];
					ssize2++;
				}
			}
			for(int i=0;i<ssize1;i++)
			{
				cout<<setd2[i]<<" ";
			}
			cout<<" }"<<endl;		
		}
		void cartisian_product_1()
		{
			cout<<"{ ";
			for(int i=0;i<n1;i++)
			{
				cout<<" { ";
				for(int j=0;j<n2;j++)
				{
					cout<<" ("<<arr1[i]<<" , "<<arr2[j]<<") ";
				}
				cout<<" }  ";
			}
		}
		void cartisian_product_2()
		{
			cout<<"{ ";
			for(int i=0;i<n2;i++)
			{
				cout<<" { ";
				for(int j=0;j<n1;j++)
				{
					cout<<" ("<<arr2[i]<<" , "<<arr1[j]<<") ";
				}
				cout<<" }  ";
			}
		}
};
int main()
{
	ss obj;
	int f;
	char c='y';
	int choice;
	do
	{
		cout<<"press 1 : check subset"<<endl;
		cout<<"press 2 : union and intersection of two set"<<endl;
		cout<<"press 3 : compliment of set"<<endl;
		cout<<"press 4 : set difference and symmeric difference "<<endl;
		cout<<"press 5 : cartisian product of sets"<<endl;
		cin>>choice;
		cout<<endl;
		switch(choice)
		{
			case 1 :
				f=0;
				obj.get_set1_size();
				obj.get_set1_elements();
				obj.get_set2_size();
				obj.get_set2_elements();
				obj.remove_duplicay_set_1();
				obj.remove_duplicay_set_2();
				cout<<"entered set1"<<endl;
				obj.display_set_1();
				cout<<"entered set2"<<endl;
				obj.display_set2();
				f=obj.check_arr1_subset_of_ar2_part1();
				if(f)
				{
					cout<<"1st array is a subset of 2nd array"<<endl;
				}
				else
				{
					cout<<"1st array is a not a subset of 2nd array"<<endl;
				}
				f=0;
				f=obj.check_arr2_subset_of_ar1();
				if(f)
				{
					cout<<"2nd set is subset of 1st set"<<endl;
				}
				else
				{
					cout<<"2nd set is not a subset of 1st set"<<endl;
				}
				break;			
			case 2 :
				obj.get_set1_size();
				obj.get_set1_elements();
				obj.get_set2_size();
				obj.get_set2_elements();
				obj.remove_duplicay_set_1();
				obj.remove_duplicay_set_2();
				cout<<"entered set1"<<endl;
				obj.display_set_1();
				cout<<"entered set2"<<endl;
				obj.display_set2();
				obj.union_set();
				obj.intersection_set();
				break;
			case 3 :
				obj.get_uarr_size();
				obj.get_uarr_elements();
				obj.remove_duplicay_set_u();
				obj.get_set_size();
				obj.get_set_elements();
				obj.remove_duplicay_set();
				obj.compliment();
				break;
			case 4 :
				obj.get_set1_size();
				obj.get_set1_elements();
				obj.get_set2_size();
				obj.get_set2_elements();
				obj.remove_duplicay_set_1();
				obj.remove_duplicay_set_2();
				cout<<"entered set1"<<endl;
				obj.display_set_1();
				cout<<"entered set2"<<endl;
				obj.display_set2();
				cout<<"1st set - 2nd set ";
				obj.set_difference_12();
				cout<<"2nd set - 1st set ";
				obj.set_difference_21();
				cout<<"symmetric difference ";
				obj.sydiference();
				break;
			case 5 :
				obj.get_set1_size();
				obj.get_set1_elements();
				obj.get_set2_size();
				obj.get_set2_elements();
				obj.remove_duplicay_set_1();
				obj.remove_duplicay_set_2();
				cout<<"entered set1"<<endl;
				obj.display_set_1();
				cout<<"entered set2"<<endl;
				obj.display_set2();
				cout<<"1st set X 2nd set is"<<endl;
				obj.cartisian_product_1();
				cout<<endl;
				cout<<"2nd set X 1st set is"<<endl;
				obj.cartisian_product_2();
				break;
			default :
				cout<<"you have entered wrong choice "<<endl;
		}
		cout<<endl<<"do you want to continue y/n";
		cin>>c;	
		cout<<endl;
	}
	while(int(c)==int('y'));
	return 0;
}






