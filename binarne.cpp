#include <iostream>
#include <bitset>

using namespace std;

int main() {
	int a;
	int b;
	
	cin>>a;
	cin>>b;
	
	cout<<"a= to "<<bitset<8>(a).to_string()<<endl;
		cout<<"b= to "<<bitset<8>(b).to_string()<<endl;

			cout<<"a|b to "<<bitset<8>(a|b).to_string()<<endl;
			cout<<"a&b to "<<bitset<8>(a&b).to_string()<<endl;
			cout<<"a^b to "<<bitset<8>(a^b).to_string()<<endl;
			
			cout<<"~a to "<<bitset<8>(~a).to_string()<<endl;
			cout<<"~b to "<<bitset<8>(~b).to_string()<<endl;
			
		cout<<"a<<=4 to "<<bitset<8>(a<<=4).to_string()<<endl;
	cout<<"b>>=1 to "<<bitset<8>(b>>=1).to_string()<<endl;
	return 0;
}
