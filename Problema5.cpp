#include <iostream>

using namespace std;

int main()
{
    int n,no_par,no_impar,s_impar,s_par,no_digits,minim,no_minim,cn;
    string s;
    cin >> n;
    no_digits = 0;
    no_par = 0;
    no_impar = 0;
    s_par = 0;
    s_impar = 0;
    minim = 10;
    no_minim = 0;
    cn = n;
    while (n!=0)
    {

        if (((n%10)%2) == 0)
        {
            s_par = s_par + (n%10);
            no_par++;
        }
        else
        {
            no_impar++;
            s_impar = s_impar + (n%10);
        }
        if (n%10 < minim) minim=n%10;

        n = n/10;
        no_digits++;
    }
    while (cn!=0)
    {

        if (cn%10 == minim) no_minim++;
        s = s + to_string(cn%10);
        cn = cn/10;


    }
    cout << s_par << " " << no_par << " " << s_impar << " " << no_impar << " " << minim << " " << no_minim << " " << s ;

    return 0;
}