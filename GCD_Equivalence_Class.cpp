#include"gcd.h"
#include<ctime>
#include<cstdlib>
#define MIN -32767
int r(int l,int h);
int main()
{
	srand( time(NULL) ) ;
	int l=0,h=1000;
	int m=(h+l)/2 ;
	int arr[7][3]= {	{r(MIN,l-1),r(l,h)},{r(l,h),r(l,h)},{ r(h+1,INT_MAX),r(l,h) },
						{r(l,h),r(MIN,l-1)} , {r(l,h),r(h+1,INT_MAX)},	};
	cout<<"equivalence class testing \n";
	for(int i=0;i<5;i++){
		if(  gcd(arr[i][0],arr[i][1]) != -1 ){
			if( !(arr[i][1] > h || arr[i][0] > h) )
			cout<<" GCD ( "<<arr[i][0]<<", "<<arr[i][1]<<" ) = "<<gcd(arr[i][0],arr[i][1])<<endl;
			else{
				cout<<" GCD ( "<<arr[i][0]<<", "<<arr[i][1]<<" ) = "<<"Input is out of bounds "<<endl;
			}
			
		}
		
	}
}
int r(int l,int h)
{
	return (   ( rand() % (h-l+1) ) + l   );
}
