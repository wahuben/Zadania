#include <iostream>
#include <cstdlib>
using namespace std;

void lit()
{
	string a;
    cout << "Podaj litery: " << endl;
    cin >> a;
    
    for (int i=0; i<a.length()-1; i++)
	{
        for (int j=0; j<a.length()-1; j++)
		{
            if (a[j]>a[j+1])
            swap(a[j], a[j+1]);
    	}
	}
	cout<<a<<endl;
}


int main()
{
	lit();    
    return 0;   
}
