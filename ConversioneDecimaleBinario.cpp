#include <iostream>
using namespace std;

main()
{
	int n;
	string b;
	cout<<"Inserisci un numero decimale: ";
	cin>>n;
	
	while (n>0)
	{
		if (n%2==0)
		    b='0'+b;
		else
		    b='1'+b;
		n=n/2;
	}
	
	cout<<b;
}
