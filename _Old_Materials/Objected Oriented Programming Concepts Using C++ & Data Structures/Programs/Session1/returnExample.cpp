#include <iostream>
using namespace std;

int max ( int a, int b )
{
   return ( a > b ? a : b );
}

int main()
{
    int nOne = 5;
    int nTwo = 7;
    int result = max(nOne,nTwo);
	cout<<"Result is : "<<result;
	cout<<"\n\n\n";
    return 0;
}
