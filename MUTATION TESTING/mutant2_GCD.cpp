#include<iostream>
using namespace std;
int gcd(int a,int b);
int gcd(int a,int b)
{
	if(a<0 || b<0 ) {
		cout<<"GCD ( "<<a<<" ,"<<b<<" )"<<"  Can't find GCD of negative values\n";
		return -1 ;
	}
	if(a<b)
		swap(a,b);
	if (b!=0)	// changed == with !=
		return a;
	return gcd(b,a%b);
}
int main()
{
	int l=0,u=1000000000;
	int m=(u+l)/2 ;
	cout<<"\nworst case analysis\n";
	int w[5]={l,l+1,(l+u)/2,u-1,u} ;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			if ( gcd(w[i],w[j]) != -1)
			cout<<" GCD ( "<<w[i]<<", "<<w[j]<<" ) = "<<gcd(w[i],w[j])<<endl;
}
