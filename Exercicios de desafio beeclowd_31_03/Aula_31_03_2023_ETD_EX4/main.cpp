#include <iostream>

using namespace std;

int main()
{
   double notaA;
   double notaB;
   double notaC;
   double media;

   cout << "Informe a nota A: ";
   cin >> notaA;

   cout << "Informe a nota B: ";
   cin >> notaB;

   cout << "Informe a nota C: ";
   cin >> notaC;

   media = ((notaA*2 + notaB*3 + notaC*5) / 10);

   cout << "MEDIA = " << media;


}
