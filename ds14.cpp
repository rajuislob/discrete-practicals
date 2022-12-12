//practical14
#include <iostream>
#include<vector>
using namespace std;
int ff(int a)
{
	if( a==0)
	{
		return 1;
	}
	else
	{
		return ff(a-1) + a ;
	}
}

int sf(int a)
{
	if( a==0)
	{
		return 1;
	}
	else
	{
		return sf(a-1) + a*a ;
	}
}
int tf(int a)
{
	if( a==0)
	{
		return 1;
	}
	else
	{
		return 2*tf(a/2) + a ;
	}
}
class gtf
{
	public : 
		int n;
		void gt_v()
		{
			cout<<"enter n";
			cin>>n;
			cout<<endl;
		}
		void gp_ff()
		{
			cout<<"{ ";
			for(int i=0;i<=n;i++)
			{
				cout<<"( "<<i<<" , "<<ff(i)<<" ) , ";
			}
			cout<<" }"<<endl;
		}
		void gp_sf()
		{
			cout<<"{ ";
			for(int i=0;i<=n;i++)
			{
				cout<<"( "<<i<<" , "<<sf(i)<<" ) , ";
			}
			cout<<" }"<<endl;
		}
		void gp_tf()
		{
			cout<<"{ ";
			for(int i=0;i<=n;i++)
			{
				cout<<"( "<<i<<" , "<<tf(i)<<" ) , ";
			}
			cout<<" }"<<endl;
		}	
};

int main()
{
	gtf obj;
	obj.gt_v();
	cout<<"graph points of T(n)= T(n-1)+n,T(0)=1 " << endl;
	obj.gp_ff();
	cout<<"graph points of T(n)= T(n-1)+n^2,T(0)=1 " << endl;
	obj.gp_sf();
	cout<<"graph points of T(n)= 2*T(n/2)+n,T(0)=1 " << endl;
	obj.gp_tf();
	return 0;
}
