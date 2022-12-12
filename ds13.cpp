//practical13
#include<iostream>
#include<string>
using namespace std;
class truthtable{
    public:
	    bool a,b;
	    void getvalue()
		{
			char value;
			cout<<"enter  a (t/f) : ";
			cin>>value;
			if(int(value) == int('t'))
			{
				a=true;
			}
			else
			{
				a=false;
			}
			cout<<"enter  b (t/f) : ";
			cin>>value;
			if(int(value) == int('t'))
			{
				b=true;
			}
			else
			{
				b=false;
			}
		}
		bool conjunction()
		{
	    	return a&&b;
		}
		bool disjunction()
		{
			return a||b ;
		}
		bool exclusiveor()
		{
			if(a!=b)
			{
				return true;
			}
			return false;
	    }
		bool conditional()
		{
			if(a)
			{
				return b;
			}
			return true ;
		}
		bool biconditional()
		{
			return ((a && b ) || ((!a) && (!b)));
		}
		bool exclusivenor()
		{
			return !exclusiveor();
		}
		bool negation()
		{
			return !a;
		}
		bool nand()	
		{
	    return !conjunction();
		}
		bool nor()
		{
	    return !disjunction();
		}
};

int main(){
	truthtable obj;
	obj.getvalue();
	cout<<boolalpha<<"a b a^b"<<endl<<(bool)obj.a<<" "<<(bool)obj.b<<" "<<(bool)obj.conjunction()<<endl<<endl;
	cout<<"a b avb"<<endl<<(bool)obj.a<<" "<<(bool)obj.b<<" "<<(bool)obj.disjunction()<<endl<<endl;
	cout<<"a b a(+)b"<<endl<<(bool)obj.a<<" "<<(bool)obj.b<<" "<<(bool)obj.exclusiveor()<<endl<<endl;
	cout<<"a b a->b"<<endl<<(bool)obj.a<<" "<<(bool)obj.b<<" "<<(bool)obj.conditional()<<endl<<endl;
	cout<<"a b a<->b"<<endl<<(bool)obj.a<<" "<<(bool)obj.b<<" "<<(bool)obj.biconditional()<<endl<<endl;
	cout<<"a b (a(+)b)'"<<endl<<(bool)obj.a<<" "<<(bool)obj.b<<" "<<(bool)obj.exclusivenor()<<endl<<endl;
	cout<<"a a'"<<endl<<(bool)obj.a<<" "<<(bool)obj.negation()<<endl<<endl;
	cout<<"a b (a^b)'"<<endl<<(bool)obj.a<<" "<<(bool)obj.b<<" "<<(bool)obj.nand()<<endl<<endl;
	cout<<"a b (avb)'"<<endl<<(bool)obj.a<<" "<<(bool)obj.b<<" "<<(bool)obj.nor()<<endl<<endl;
	return 0;
}
