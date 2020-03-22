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
	else
		cout <<"Entered date is invalid\n\n";	
}
