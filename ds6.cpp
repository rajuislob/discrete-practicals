//practical6
#include <iostream>
using namespace std;
void toh(int n,char fr,char tr,char ar)
{
	if(n==0)
	{
		return;
	}
	toh(n-1,fr,ar,tr);
	cout<<"move disk "<<n<<" from rod "<<fr<<" to rod "<<tr<<endl;
	toh(n-1,ar,tr,fr);
}
int main()
{
	int n;
	cout<<"enter number of disc";
	cin>>n;
	cout<<endl;
	toh(n,'a','b','c');
	return 0;	
}
