//pratical12
#include<iostream>
using namespace std;
class sol{
    int n;
    int s;
    int *arr;
	int temp;
	public:
    sol(){
        cout<<"enter the no. of variables(n)"<<endl;
        cin>>n;
        cout<<"enter the sum (0<=sum=<10)"<<endl;
        cin>>s;
        arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=0;
        }
		temp=s;
		cout<<"solutions of equations are : "<<endl;
		for(int i=0;i<n;i++){
			cout<<"X"<<i+1<<"+";
		}
		cout<<" = temp"<<endl;

    }
    
	void print(int *arr,int n,int s,int pos){
		if(pos==n-1){
			arr[pos]=s;
			for(int i=0;i<n;i++){
				cout<<arr[i]<<" ";
			}
			cout<<" = "<<temp<<endl;
			return;
		}
		for(int i=0;i<=s;i++){
			arr[pos]=i;
			print(arr,n,s-i,pos+1); 
		}
	}

	void solution(){
		 print(arr,n,s,0);
	}
};

int main()
{
	char c='y';
	while(c=='y'){
	sol a;
	a.solution();
	cout<<"Do you want to continue(y/n)?"<<endl;
	cin>>c;
	}
	return 0;
}
