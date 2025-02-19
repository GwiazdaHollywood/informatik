#include <iostream>
using namespace std;
int main() {
   int N;
   cout << "Podaj liczbe N: ";
   cin >> N;
   if (N < 2) {
       cout << "Podana liczba musi być większa lub równa 2." << endl;
       return 0;
   }
   cout << "Liczby parzyste od 2 do " << N << ":" << endl;
   int liczba = 2; 
   while (liczba <= N) {
       cout << liczba << endl;
       liczba += 2; 
   }
   return 0;
}