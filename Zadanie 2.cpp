#include <iostream>
using namespace std;

class Uczen
{
public:
string imie;
string nazwisko;
string klasa;
int rok_ur;

void ustawImie();
void ustawNazwisko();
void ustawKlase();
void ustawRok_ur();	
};

void Uczen::ustawImie()
{
cout<<"Imie: "<<imie<<endl;
}

void Uczen::ustawNazwisko()
{
cout<<"Nazwisko: "<<nazwisko<<endl;
}

void Uczen::ustawKlase()
{
cout<<"Klasa: "<<klasa<<endl;
}

void Uczen::ustawRok_ur()
{
cout<<"Rok urodzenia: "<<rok_ur<<endl;
}

int main()
{
Uczen uczen_a;
uczen_a.imie = "Maks";
uczen_a.nazwisko = "Kowalski";
uczen_a.klasa = "3Cg";
uczen_a.rok_ur = 2003;

uczen_a.ustawImie();
uczen_a.ustawNazwisko();
uczen_a.ustawKlase();
uczen_a.ustawRok_ur();


Uczen uczen_b;
uczen_b.imie = "Kamil";
uczen_b.nazwisko = "Bielewski";
uczen_b.klasa = "2D";
uczen_b.rok_ur = 2004;

uczen_b.ustawImie();
uczen_b.ustawNazwisko();
uczen_b.ustawKlase();
uczen_b.ustawRok_ur();

if(uczen_a.rok_ur < uczen_b.rok_ur)
{
cout<<"Uczen "<<uczen_a.imie<<" "<<uczen_a.nazwisko<<" jest starszy o "<<((uczen_a.rok_ur - uczen_b.rok_ur)*(-1))<<" rok."<<endl;
}
else if(uczen_a.rok_ur > uczen_b.rok_ur)
{
cout<<"Uczen "<<uczen_b.imie<<" "<<uczen_b.nazwisko<<" jest starszy o "<<((uczen_a.rok_ur - uczen_b.rok_ur))<<" rok."<<endl;
}
else if(uczen_a.rok_ur == uczen_b.rok_ur)
{
cout<<"Uczniowie "<<uczen_a.imie<<" "<<uczen_a.nazwisko<<" i "<<uczen_b.imie<<" "<<uczen_b.nazwisko<<" sa w tym samym wieku."<<endl;
}

return 0;
}
