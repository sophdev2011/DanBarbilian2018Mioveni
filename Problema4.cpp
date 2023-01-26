#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,x,a,b,i,l4;
    cin >> n;
    i=1;
    l4=1007;
    while (i<n)
    {
        l4=(l4*1007)%10000;
        i=i+1;
    }
    b=l4%10;
    a=(l4%100)/10;
    cout << b*10+a;
    return 0;
}