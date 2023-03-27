#ifndef POLINOM_H
#define POLINOM_H

#include <iostream>
#include <math.h>

using namespace std;

class Polinom
{
    
    int a;
    int b;
    int c;
    int x;
    int sonuc;

    double kok1;
    double kok2;
    double delta;

    public:
        Polinom();
        ~Polinom();

    void polinomOlustur();
    void hesapla();
    void kokleriBul();
    void kokDegistir();
    int menu();
    void giris();

};

#endif 