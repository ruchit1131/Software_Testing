#include<bits/stdc++.h>
using namespace std;
int word_count ( char str[],char filename[] );
int main( )
{
	char str1[]="if",str2[]="while",str3[]="for",str4[]="case",filename[100];
	cout<<"Enter the Filename\n";
	cin>>filename;
	int count=0;
	count += word_count(str1,filename);
	count += word_count(str2,filename);
	count += word_count(str3,filename);
	count += word_count(str4,filename);
	cout<<"\nCYCLOMATIC COMPLEXITY of "<<filename<<" is "<<count+1;
}
int word_count ( char str[],char filename[] )
{
	FILE *fp ;
	int count=0;
	fp = fopen( filename , "r"  );
	char line[200];
	while( fgets(line,199,fp)!=NULL )
		if( strstr ( line , str ) != NULL )
			count++;
	fclose(fp);
	return count ; 		
}
