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
	if( a >= b && a>=c )    
		ans= a ;
	else if( b>=a && b>=c )
		ans= c;			// changing ">=" to "<="
	else
		ans= c;
	cout<<"greatest of "<<a<<", "<<b<<","<<c<<", "<<"is "<<ans<<endl<<endl;	
	return ans;
}
int main()
{
	int l=1,u=1000;
	int m=(u+l)/2 ;
	
	cout<<"worst case analysis\n\n";
	int w[5]={l,l+1,(l+u)/2,u-1,u} ;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			for(int k=0;k<5;k++)
				greatest(w[i],w[j],w[k]);
}
