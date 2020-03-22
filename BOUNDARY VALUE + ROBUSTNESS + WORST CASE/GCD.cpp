#include"gcd.h"
int main()
{
	int l=0,u=1000000000;
	int m=(u+l)/2 ;
	cout<<"boundary value analysis\n";
	int arr[9][2]= {	{l,m} ,{l+1,m},{m,m},{u-1,m},{u,m},
						{m,l} ,{m,l+1}, {m,u-1} , {m,u},	};
	for(int i=0;i<9;i++){
		if(  gcd(arr[i][0],arr[i][1]) != -1 )
		cout<<" GCD ( "<<arr[i][0]<<", "<<arr[i][1]<<" ) = "<<gcd(arr[i][0],arr[i][1])<<endl;
	}
		
	
	cout<<"\nrobustness testing\n";
	int arr1[13][2] ={	{l-1,m},{l,m} ,{l+1,m},{m,m},{u-1,m},{u,m},{u+1,m},
						{m,l-1},{m,l} ,{m,l+1}, {m,u-1} , {m,u},{m,u+1},	};
	for(int i=0;i<13;i++)
		if( gcd(arr1[i][0],arr1[i][1]) != -1 )
			cout<<" GCD ( "<<arr1[i][0]<<", "<<arr1[i][1]<<" ) = "<<gcd(arr1[i][0],arr1[i][1])<<endl;

	cout<<"\nworst case analysis\n";
	int w[5]={l,l+1,(l+u)/2,u-1,u} ;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			if ( gcd(w[i],w[j]) != -1)
			cout<<" GCD ( "<<w[i]<<", "<<w[j]<<" ) = "<<gcd(w[i],w[j])<<endl;
}
