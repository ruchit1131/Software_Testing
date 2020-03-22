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
	if (a==0)	
		return b;
	return gcd(b,a%b);
}
