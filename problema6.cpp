#include <iostream>
#include <math.h>

using namespace std;


int main()
{
   int number, minim, d1, d2, d3, d4, d5, no1, no2, no3, no4, no5;
   cin >> number;
   int count = 0;
   d1 = 0;
   d2 = 0;
   d3 = 0;
   d4 = 0;
   d5 = 0;

   //Verificam daca numarul are maxim 5 cifre
   while(number != 0) {
      if (count == 0) {
            d5 = number % 10;
      }
      if (count == 1) {
            d4 = number % 10;
      }
      if (count == 2) {
            d3 = number % 10;
      }
      if (count == 3) {
            d2 = number % 10;
      }
      if (count == 4) {
            d1 = number % 10;
      }
      number = number / 10;

      count++;
   }

   // daca numarul are mai mult de 5 cifre afisam un mesaj de eroare
   if (count>5) {
       cout << "Numarul trebuie sa aiba cel mult 5 cifre - iesire program!";
   }

   // daca numarul are mai putin de 6 cifre luam fiecare categorie in parte si anume numere de 5, 4, 3, 2 si 1 cifra.
   else {

    // cazul 1: numere de 5 cifre
    if (count == 5) {
        // calculam toate permutarile la dreapta posibile
        no1 = d1*pow(10,4) + d2*pow(10,3) + d3*pow(10,2) + d4 * 10 + d5;
        no2 = d5*pow(10,4) + d1*pow(10,3) + d2*pow(10,2) + d3 * 10 + d4;
        no3 = d4*pow(10,4) + d5*pow(10,3) + d1*pow(10,2) + d2 * 10 + d3;
        no4 = d3*pow(10,4) + d4*pow(10,3) + d5*pow(10,2) + d1 * 10 + d2;
        no5 = d2*pow(10,4) + d3*pow(10,3) + d4*pow(10,2) + d5 * 10 + d1;
        // initializam minimul cu valoarea celui mai mic numar de 6 cifre
        minim = 100000;
        // algoritm pentru determinarea celui mai mic numar de 5 cifre dintre permutarile alese:
        if (no1 < minim) {
            minim = no1;
        }
        if (no2 < minim) {
          minim = no2;
        }
        if (no3 < minim) {
          minim = no3;
        }
        if (no4 < minim) {
          minim = no4;
        }
        if (no5 < minim) {
          minim = no5;
        }
    }
    // cazul 2: numere de 4 cifre
    if (count == 4) {
        no1 = d2*pow(10,3) + d3*pow(10,2) + d4 * 10 + d5;
        no2 = d5*pow(10,3) + d2*pow(10,2) + d3 * 10 + d4;
        no3 = d4*pow(10,3) + d5*pow(10,2) + d2 * 10 + d3;
        no4 = d3*pow(10,3) + d4*pow(10,2) + d5 * 10 + d2;
        minim = 10000;
        if (no1 < minim) {
            minim = no1;
        }
        if (no2 < minim) {
          minim = no2;
        }
        if (no3 < minim) {
          minim = no3;
        }
        if (no4 < minim) {
          minim = no4;
        }
    }
    // cazul 3: numere de 3 cifre
    if (count == 3) {
        no1 = d3*pow(10,2) + d4 * 10 + d5;
        no2 = d5*pow(10,2) + d3 * 10 + d4;
        no3 = d4*pow(10,2) + d5 * 10 + d3;
        minim = 1000;
        if (no1 < minim) {
            minim = no1;
        }
        if (no2 < minim) {
          minim = no2;
        }
        if (no3 < minim) {
          minim = no3;
        }
    }
    // cazul 4: numere de 2 cifre
    if (count == 2) {
        no1 = d4 * 10 + d5;
        no2 = d5 * 10 + d4;
        minim = 100;
        if (no1 < minim) {
            minim = no1;
        }
        if (no2 < minim) {
          minim = no2;
        }
    }
    // cazul 5: numere de 1 cifra
    if (count == 1) {
        no1 = d5;
        minim = no1;
    }
   }
   cout << "Minim=" << minim;
}

