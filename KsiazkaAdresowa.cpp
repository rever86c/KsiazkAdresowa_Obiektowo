#include "KsiazkaAdresowa.h"


void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenadzer.logowanieUzytkownika();
    if (uzytkownikMenadzer.czyUzytkownikJestZalogowany())
    {
    adresatMenadzer = new AdresatMenadzer(NAZWA_PLIKU_Z_ADRESATAMI,uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa::wyswietlIdZalogowanegoUzytkownika()
{
    cout << "Id zalogowanego uzytkownika: " << uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika() << endl;
}

void KsiazkaAdresowa::dodajAdresata()
{
    adresatMenadzer -> dodajAdresata();
}

void KsiazkaAdresowa::wyswietlAdresatow()
{
    if(uzytkownikMenadzer.czyUzytkownikJestZalogowany())
    {
        adresatMenadzer->wyswietlAdresatow();
    }
    else
    {
        cout << "Aby dodac adresata, nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogojUzytkownika()
{
    uzytkownikMenadzer.wylogujUzytkownika();
    delete adresatMenadzer;
    adresatMenadzer = NULL;
}

bool KsiazkaAdresowa::czyUzytkownikJestZAlogowany()
{
    return uzytkownikMenadzer.czyUzytkownikJestZalogowany();
}

void KsiazkaAdresowa::usunAdresata()
{
    adresatMenadzer->usunAdresata();
}
