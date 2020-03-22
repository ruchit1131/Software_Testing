#include"quadratic.h"
#include<ctime>
#include<cstdlib>
#define MIN -32767
int r(int l,int h);
int main()
{
	srand( time(NULL) ) ;
	int l=1,h=1000;
	cout<<"equivalence class testing \n";
	int arr[7][3]= {	{r(MIN,l-1),r(l,h),r(l,h)},{r(l,h),r(l,h),r(l,h)},{ r(h+1,INT_MAX),r(l,h),r(l,h) },
						{r(l,h),r(MIN,l-1),r(l,h)} , {r(l,h),r(h+1,INT_MAX),r(l,h)},
						{r(l,h),r(l,h),r(MIN,l-1)} , {r(l,h),r(l,h),r(h+1,INT_MAX)}		};
	for(int i=0;i<7;i++){
		cout<<arr[i][0]<<", "<<arr[i][1]<<", "<<arr[i][2]<<" : ";
		root(arr[i][0],arr[i][1],arr[i][2]) ;
	}						
}
int r(int l,int h)
{
	return (   ( rand() % (h-l+1) ) + l   );
}
