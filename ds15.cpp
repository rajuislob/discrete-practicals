//practial15
#include <iostream>
#include<cmath>
using namespace std;

class sftp
{
	public :
		int d,n,sum;
		void gd()
		{
			cout<<"degree : ";
			cin>>d;
			cout<<endl;
		}
		int *arr = new int[n];
		void gcd()
		{
			for(int i=d;i>=0;i--)
			{
				cout<<"enter coeff of x^"<<i<<" : ";
				cin>>arr[i];
				cout<<endl;
			}
		}
		void gp()
		{
			cout<<"enter x to find f(x) : ";
			cin>>n;
			cout<<endl;
		}
		void sv()
		{
			sum=0;
			for(int i=d;i>=0;i--)
			{
				sum=sum+ (arr[i]*(pow(n,i)));
			}
			cout<<"value of f("<<n<<") = "<<sum;
		}
};
int main()
{
	sftp obj;
	obj.gd();
	obj.gcd();
	obj.gp();
	obj.sv();
	return 0;	
}
