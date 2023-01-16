#include <iostream>

using namespace std;

int main()
{
    int n,cn = 0,u,Min = 99999,p = 1;
    cin>>n;
    int x = 0;
    cn=n; ///n va ramane acelasi ; ii fac o copie in cn
    while(n!=x)
    {
        x=cn; ///este numarul de la care plec de fiecare data cand tb sa aduc cifra in fata
        u = x%10;
        x=x/10;
        cn=0; ///construiesc noul numar din x
        p=1;
        ///construiesc in cn un nou numar punand ultima cifra din x in fata
        while(x!=0)
        {
            cn = cn + (x%10) * p;
            p*=10;
            x/=10;
        }
        cn = cn + u * p; /// pun ultima cifra a lui x in fata
        //compar cn cu Min
        if(cn<Min)
        {
            Min = cn;
        }
        x=cn; /// Revin la x
    }
    cout<<Min;
    return 0;
}
