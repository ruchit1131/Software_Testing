#include<iostream>
#include"triangle.h"
using namespace std;
int main()
{
	int l=1,u=100000;
	int m=(u+l)/2 ;
	cout<<"boundary value analysis\n";
	int arr[13][3]= {	{l,m,m} ,{l+1,m,m},{m,m,m},{u-1,m,m},{u,m,m},
						{m,l,m} ,{m,l+1,m}, {m,u-1,m} , {m,u,m},
						{m,m,l} ,{m,m,l+1}, {m,m,u-1} , {m,m,u}		};
	for(int i=0;i<13;i++)
		triangle_type(arr[i][0],arr[i][1],arr[i][2]) ;
	
	cout<<"\nrobustness testing\n";
	int arr1[19][3] ={	{l-1,m,m},{l,m,m} ,{l+1,m,m},{m,m,m},{u-1,m,m},{u,m,m},{u+1,m,m},
						{m,l-1,m},{m,l,m} ,{m,l+1,m}, {m,u-1,m} , {m,u,m},{m,u+1,m},
						{m,m,l-1},{m,m,l} ,{m,m,l+1}, {m,m,u-1} , {m,m,u},{m,m,u+1}		};
	for(int i=0;i<19;i++)
		triangle_type(arr1[i][0],arr1[i][1],arr1[i][2]) ;

	cout<<"\nworst case analysis\n";
	int w[5]={l,l+1,(l+u)/2,u-1,u} ;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			for(int k=0;k<5;k++)
				triangle_type(w[i],w[j],w[k]);
}
