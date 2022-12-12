//practical20
#include <iostream>
using namespace std;
int main()
{
    int m_ary, ln, iv;
    cout << "enter the degree of tree : ";
    cin >> m_ary;
	cout<<endl;
    cout << "enter the value of internal vertices:";
    cin >> iv;
    cout<<endl;
    ln = iv * (m_ary - 1) + 1;

    cout << "the number of leaves nodes : " << ln << endl;
    return 0;
}
