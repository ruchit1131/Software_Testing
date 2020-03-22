#include"next_date.h"
#include<ctime>
#include<cstdlib>
#define MIN -32767
int r(int l,int h);
int main()
{
	srand( time(NULL) ) ;
	int dl=1 ,dh=31 , ml=1,mh=12 ,yl=1000,yh=3000;
//	int dm=(du+dl)/2 ,mm=(mu+ml)/2 ,ym=(yu+yl)/2 ;
	cout<<"equivalence class testing \n";
	int arr[7][3]= {	{r(MIN,dl-1),r(ml,mh),r(yl,yh)},{r(dl,dh),r(ml,mh),r(yl,yh)},{ r(dh+1,INT_MAX),r(ml,mh),r(yl,yh) },
						{r(dl,dh),r(MIN,ml-1),r(yl,yh)} , {r(dl,dh),r(mh+1,INT_MAX),r(yl,yh)},
						{r(dl,dh),r(ml,mh),r(MIN,yl-1)} , {r(dl,dh),r(ml,mh),r(yh+1,INT_MAX)}		};
	for(int i=0;i<7;i++)
		next_date(arr[i][0],arr[i][1],arr[i][2]) ;
	
}
int r(int l,int h)
{
	return (   ( rand() % (h-l+1) ) + l   );
}
