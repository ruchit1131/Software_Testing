#include<iostream>
using namespace std;
int check_leap(int y);
int check_valid_date(int d,int m,int y);
void next_date(int d,int m,int y);
int check_leap(int y)
{
	if(y%400==0)	return 1;
	else if (y%100==0)	return 0;
	else if (y%4==0)	return 1;
	else  return 0;
}
int check_valid_date(int d,int m,int y)
{
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if( m==2 && check_leap(y) )
		month[1]=29;				
	if( (m>0) && (m<13) && (d>0) && (d<=month[m-1]) && (y>0) && ( y<=3001 ) )
		return 1;
	return 0;	
}
void next_date(int d,int m,int y)
{
	cout<<"Entered Date "<<d<<" / "<<m<<" / "<<y<<endl;
	if( check_valid_date(d,m,y) ){
		int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		if( m==2 && check_leap(y) )
		month[1]=29;
		d++;
		if( d == month[m-1] + 1 )	{    
			m++ ;	d=1;
		}
		if( m == 13 )	{
			y++ ;	m=1;
		}
		cout<<"Next date is "<<d<<" / "<<m<<" / "<<y<<endl<<endl;
	}
	
	// removing else block
//	else
//		cout <<"Entered date is invalid\n\n";	
}
int main()
{
	int l=1,u=1000;
	int dl=1 ,du=31 , ml=1,mu=12 ,yl=1,yu=3000;
	int dm=(du+dl)/2 ,mm=(mu+ml)/2 ,ym=(yu+yl)/2 ;
	
	cout<<"worst case analysis\n\n";
	int d[5]={dl,dl+1,(dl+du)/2,du-1,du} ;
	int m[5]={ml,ml+1,(ml+mu)/2,mu-1,mu} ;
	int y[5]={yl,yl+1,(yl+yu)/2,yu-1,yu} ;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			for(int k=0;k<5;k++)
				next_date(d[i],m[j],y[k]) ;
}
