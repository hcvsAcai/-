#include <iostream>
#include <stdlib.h>
using namespace std;
int compare( const void *arg1, const void *arg2 )
{
        int ret = *(int*)(arg1)-*(int*)(arg2);
        if (ret>0) return 1;
        if (ret<0) return -1;
        return 0;
}
int main()
{
        int test[10];
        int i;
        int n;
		cin>>n;
		for(i=0;i<n;i++)
		cin>>test[i];
        qsort(test,i,sizeof(int),compare);
        for (i=0;i<n;i++) {
                cout << test[i] <<" ";
        }
}
