#include <iostream>
using namespace std;
int main()
{
	int x[10]={1,2,3,4,5,6,7,8,9,10};
	int i=0;
	for(i =0;i<10;i++)
	{
		cout<< endl;
		if(x[i] % 2 == 1)
		{
			cout<< "Even Number = " << x[i] << endl;
		}
		
	}
	return 0;
}
