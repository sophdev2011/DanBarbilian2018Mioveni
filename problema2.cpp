#include <iostream>

/*
Enunț
Se citește de la tastatură o linie conținând trei valori numerice separate de câte un spațiu, reprezentând o
dată calendaristică sub forma ZI LUNĂ AN, în această ordine.
Cerințe:
Scrieţi un program care să determine data calendaristică corespunzătoare zilei anterioare (ieri).
Date de intrare:
Cele trei valori numerice pe o singură linie separate de câte un spațiu.
Date de ieșire:
Trei valori numerice pe o singura linie separate de câte un spațiu reprezentând o dată calendaristică sub
forma ZI LUNĂ AN, în această ordine.
Restricții și precizări:
ZI număr întreg, una sau 2 cifre, valoare minimă 1, valoare maximă 31.
LUNA număr întreg, una sau 2 cifre, valoare minimă 1, valoare maximă 12.
AN număr întreg 4 cifre, cu valori între 1899 și 2018.
*/
using namespace std;

int main()
{
    int z,l,a;
    cin >> z >> l >> a ;

    if ((z>31) ||
            ((z>30) && ((l == 2) || (l == 4) || (l == 6) || (l == 9) || (l == 11))) ||
            ((z > 28) && (l == 2) && (a%4 != 0)) ||
            ((z>29) && (l==2) && (a%4 == 0)) ||
            (l<1) ||
            (l>12) ||
            (a < 1899) ||
            (a > 2018))
    {
        cout << "Data Neacceptata";
    }
    else
    {
        if (z>1)
        {
            z=z-1;
        }
        else
        {
            if (l > 1)
            {
                l = l - 1;
                if ((l == 4) || (l == 6) || (l == 9) || (l == 11))
                {
                    z = 30;
                }
                if ((l == 1) || (l == 3) || (l == 5) || (l == 7) || (l == 8) || (l == 10) || (l == 12))
                {
                    z = 31;
                }
                if ((l == 1) || (l == 3) || (l == 5) || (l == 7) || (l == 8) || (l == 10) || (l == 12))
                {
                    z = 31;
                }
                if ((l == 2) && (a % 4 == 0))
                {
                    z = 29;
                }
                if ((l == 2) && (a % 4 != 0))
                {
                    z = 28;
                }

            }
            else
            {
                z = 31;
                l = 12;
                a = a - 1;
            }
        }

        cout << z << " " << l << " " << a;
    }
}
