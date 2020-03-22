#include<iostream>
using namespace std;
int greatest(int a,int b,int c);
int greatest(int a,int b,int c)
{	int l=1,h=1000;
	int ans;
	if( a<l || b<l || c<l || a>h || b>h || c>h ){
		cout<<a<<", "<<b<<","<<c<<", "<<endl;
		cout<<"Inputs out of range";
		cout<<"  ("<<   ( (a>b)? ( a>c ? a : c ) : ( b>c ? b : c ) ) <<" )\n\n";
		return -1;
	}
	if( a>=b && a>=c )
		ans= a ;
	else if( b>=a && b>=c )
		ans= b;
	else
		ans= c;
	cout<<"greatest of "<<a<<", "<<b<<","<<c<<", "<<"is "<<ans<<endl<<endl;	
	return ans;
}
