//hollow rhombus
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	//fixed number of spaces that are to be given to the pattern for any input of n
	for (int i=0;i<1;i++)
	{
		for (int j=1;j<=4;j++)
		{
			cout<<" ";
		}
		// the number of x for the first line of pattern 
		for (int j=1;j<=n;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	// for the rest pattern leaving the last line 
	for (int i=1;i<n-1;i++)
	{
		for (int j=1;j<=2*n-1;j++ )
		{
			if(j==n-i||j==2*n-i-1)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}

		}
		cout<<endl;
	}
	// for the last line of the given pattern 
	for (int i=0;i<1;i++)
	{
		for (int j=1;j<=n;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}


}