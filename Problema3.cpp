#include <iostream>

using namespace std;

int main()
{
    int x,a,b,y;
    cin >> x;
    while (0>=x || x>=1000000000)
    {
        cin >> x;
    }
    b=x%10;
    a=(x%100)/10;
    y=b*10+a;
    if (y == 0)
    {
        cout << "00";
    }
    else
    {
        cout << y;
    }
    return 0;
}
