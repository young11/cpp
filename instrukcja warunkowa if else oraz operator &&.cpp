#include<iostream>
using namespace std;
int main() {
int liczba;
cout<<"Podaj liczbe: ";
cin>> liczba;
if (liczba>=20 && liczba <=200)
cout<< "Liczba jest z przedzialu [20,200]"; else
cout<< "Liczba nie jest z przedzialu [20,200]";
return 0;
}