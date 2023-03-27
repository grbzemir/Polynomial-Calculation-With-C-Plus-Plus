#include "Polinom.h"
#include <iostream>


using namespace std;

Polinom::Polinom()
{


}

Polinom::~Polinom()
{


}

void Polinom::polinomOlustur()
{

    cout<<"Polinom Olusturma..."<<endl;
    cout<<"P(x) = ax² + bx + c"<<endl;

    cout<<"Lutfen Polinomun a,b,c degerlerini giriniz..."<<endl    ;

    cout<<"a: ";
    cin>>a;

    cout<<"b: ";
    cin>>b;

    cout<<"c: ";
    cin>>c;
    
    system("cls");
    cout<<"Polinomunuz: "<<endl;
    cout<<"P(x) =" <<a<< " x² + " <<b<< " x  + "<<c<<endl;

    cout<<"x degerini giriniz: ";
    cout<<"x: ";
    cin>>x;

    cout<<"P("<<x<<") = "<<a<< " x² + " <<b<< " x  + "<<c<<endl;

}

void Polinom::hesapla()
{

    sonuc = a*x*x + b*x + c;
    cout<<"P("<<x<<") = "<<a<< " x² + " <<b<< " x  + "<<c<<" = " << sonuc << endl;


}

void Polinom::kokleriBul()
{
    delta = b*b - 4*a*c;

    if(delta < 0)

    {

        cout<<"Reel kok yoktur"<<endl;
    }   


    else if( delta == 0)

    {


        cout<<"Cakisik kokler vardir"<<endl;
        kok1 = -b / (2*a);
        cout<<"Kokler: "<<kok1<<endl;
    }

    else
    {
       
       cout<<"Farkli iki koku vardir"<<endl;
       kok1 = (-b + sqrt(delta)) / (2*a);
       kok2 = (-b - sqrt(delta)) / (2*a); 

       cout<<"Kok1: "<<kok1<<" ve "<<kok2<<endl;
       cout<<"Kok2: "<<kok2<<endl;
    

    }

}
void Polinom::kokDegistir()
{

    cout<<"Yeni x degerini giriniz: ";
    cout<<"x: ";
    cin>>x;

    cout<<"P("<<x<<") = "<<a<< " x² + " <<b<< " x  + "<<c<<endl;

}
int Polinom::menu()
{

    int secim;
    cout<<"POLINOM UYGULAMASI"<<endl<<endl;
    cout<<"1. Polinom olustur"<<endl;
    cout<<"2. Polinomun Hesapla"<<endl;
    cout<<"3. Polinomun koklerini bul"<<endl;
    cout<<"4. Polinomun koklerini degistir"<<endl;
    cout<<"0. Cikis"<<endl;
    cout<<"Seciminiz: ";
    cin>>secim;

    return secim;

}



void Polinom::giris()
{


    int secim;
    secim = menu();

    while ( secim!=0)

    {
        switch (secim)

        {
        
        case 1:
            polinomOlustur();
            break;

        case 2:
            hesapla();
            break;

        case 3:
            kokleriBul();
            break;

        case 4:
            kokDegistir();
            break;

        default:
        cout<<"Yanlis secim yaptiniz"<<endl;
        
    }

    secim = menu();

    }

}

