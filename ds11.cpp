//practical11
#include <iostream>
using namespace std;
class op{
	public :
		int n,r;
	void enter()
	{
		cout<<"enter value of n";
		cin>>n;
		cout<<endl<<"enter value of r";
		cin>>r;
		cout<<endl;
	}
};
int permutation(int n, int r)
{
    if (r > n)
        return 0;
    else
    {
        if (r == 0)
            return 1;
        else
            return (n * permutation(n - 1, r - 1));
    }
}

int combination(int n, int r)
{
    if (r > n)
        return 0;
    else if ((n == 0) | (r == 0) | (n == r))
        return 1;
    else
        return (combination(n - 1, r - 1) + combination(n - 1, r));
}

int main()
{
	op obj;
    obj.enter();
	cout << "permutation  is " << permutation(obj.n, obj.r) << endl;
    cout << "combination is " <<  combination(obj.n, obj.r)<< endl;
   return 0;
}
