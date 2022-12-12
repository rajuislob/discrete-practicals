//practical5
#include <iostream>
using namespace std;
class fib
{
	public :
		int n;
		void get_n()
        {
            cout<<"enter n";
            cin>>n;
            cout<<endl;
        }
        int fib_term(int x)
		{
			if((x==1)||(x==2))
			{
				return x-1;
			}
			else
			{
				return (fib_term(x-1) + fib_term(x-2));
			}
		}
		void dis_fib()
		{
			int i=1;
			cout << "\nFibonnaci Series : ";
			while(i <= n) 
			{
		    	cout << " " << fib_term(i);
		    	i++;
		   }
		}
        
};


int main()
{
	fib obj;
	obj.get_n();
	obj.dis_fib();
	return 0;
}
