#include <iostream>

using namespace std;

int main()
{
   int n;

   cout << "Defina o tamanho que deseja: ";
   cin >> n;

   int vetorA[n];
   int vetorB[n];
   int vetorSoma[n];

   for(int i = 0; i < n; i++)
   {
       cout << "Defina o valor do vetorA: \n";
       cin >> vetorA[i];

       cout << "Defina o valor do vetorB: \n";
       cin >> vetorB[i];

       vetorSoma[i] = vetorA[i] + vetorB[i];
   }

   for(int i = 0; i < n; i++)
   {
       cout << vetorA[i] << " + " << vetorB[i] << " = " << vetorSoma[i] << endl;
   }


}
