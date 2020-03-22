#include<iostream>
using namespace std;
void triangle_type( int s1 ,int s2 ,int s3 );
int valid_triangle(int s1,int s2,int s3);

int valid_triangle(int s1,int s2,int s3)
{
	if( s1 >= s2+s3 || s2>=s1+s3 || s3>=s1+s2 || s1<=0 || s2<=0 || s3<=0 )
		return 0;
	return 1;
}
void triangle_type( int s1 ,int s2 ,int s3 )
{
	cout<<"Entered sides are "<<s1<<", "<<s2<<", "<<s3<<endl;
	if( valid_triangle(s1,s2,s3) ){
		if( s1 == s2 && s2 == s3 )
			cout<<"Equilateral Triangle\n";
		else if( s1==s2 || s2==s3 || s3==s1 )
			cout<<"Isoscles Triangle\n ";
		else if ( (s1*s1 == s2*s2 + s3*s3) ||  ( s2*s2 == s1*s1 + s3*s3 ) ||  (s3*s3 == s2*s2 + s1*s1) )
			cout<<"Right Triangle \n";
		else 
			cout<<"Scalene Triangle \n";
	}
	else 
		cout<<" Not a Triangle \n ";
	cout<<endl;
	
}
