#include<iostream>
using namespace std;
int main()
{	

	int mat[3][3];
	int i,j,sum=0;
	for(i=0;i<=2;i++)
	{
		
			for(j=0;j<=2;j++)
		{
			cin>>mat[i][j];
		}
	}
	
	for(i=0;i<=2;i++)
		{
		for(j=0;j<=2;j++)
		{	cout<<mat[i][j];
			if(j==2)
			{
			cout<<endl;
			}
		}
	}
	cout<<endl<<j;

}
