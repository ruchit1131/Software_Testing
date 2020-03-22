#include<iostream>
#include"next_date.h"
using namespace std;
int main()
{
	int l=1,u=1000;
	int dl=1 ,du=31 , ml=1,mu=12 ,yl=1,yu=3000;
	int dm=(du+dl)/2 ,mm=(mu+ml)/2 ,ym=(yu+yl)/2 ;
	cout<<"boundary value analysis\n";
	int arr[13][3]= {	{dl,mm,ym} ,{dl+1,mm,ym},{dm,mm,ym},{du-1,mm,ym},{du,mm,ym},
						{dm,ml,ym} ,{dm,ml+1,ym}, {dm,mu-1,ym} , {dm,mu,ym},
						{dm,mm,yl} ,{dm,mm,yl+1}, {dm,mm,yu-1} , {dm,mm,yu}		};
	for(int i=0;i<13;i++)
		next_date(arr[i][0],arr[i][1],arr[i][2]) ;
	
	cout<<"\nrobustness testing\n";
	int arr1[19][3] ={	{dl-1,mm,ym},{dl,mm,ym} ,{dl+1,mm,ym},{dm,mm,ym},{du-1,mm,ym},{du,mm,ym},{du+1,mm,ym},
						{dm,ml-1,ym},{dm,ml,ym} ,{dm,ml+1,ym}, {dm,mu-1,ym} , {dm,mu,ym},{dm,mu+1,ym},
						{dm,mm,yl-1},{dm,mm,yl} ,{dm,mm,yl+1}, {dm,mm,yu-1} , {dm,mm,yu},{dm,mm,yu+1}		};
	for(int i=0;i<19;i++)
		next_date(arr1[i][0],arr1[i][1],arr1[i][2]) ;

	cout<<"\nworst case analysis\n";
	int d[5]={dl,dl+1,(dl+du)/2,du-1,du} ;
	int m[5]={ml,ml+1,(ml+mu)/2,mu-1,mu} ;
	int y[5]={yl,yl+1,(yl+yu)/2,yu-1,yu} ;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			for(int k=0;k<5;k++)
				next_date(d[i],m[j],y[k]) ;
}
