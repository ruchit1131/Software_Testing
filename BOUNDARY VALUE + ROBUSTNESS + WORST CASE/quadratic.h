#include<iostream>
#include<cmath>
using namespace std ;
void root(float a,float b,float c)
{
	float l=1,h=1000;
	if( a<l || b<l || c<l || a>h || b>h || c>h ){
//		cout<<a<<", "<<b<<","<<c<<", "<<endl;
		cout<<"Inputs out of range\n";
//		return ;
	}
	if(a == 0){
		cout<< "Not a quadratic equation \n\n";
	//	return ;	
	}
	else if( b*b - 4*a*c < 0 ){
		cout << " the equation has imaginary roots\n\n";
	//	return ;
	}
	else{
		float x1 = ( -b + sqrt ( b*b - 4*a*c ) )/2*a;
		float x2 = ( -b - sqrt ( b*b - 4*a*c ) )/2*a;
		cout<<"roots of equation are : "<<x1<<", "<<x2<<endl<<endl;
	}
	
	
}
