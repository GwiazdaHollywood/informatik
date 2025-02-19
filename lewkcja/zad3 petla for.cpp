#include <iostream>
 
using namespace std;
 
int main() {
    int N;
cout << "podaj liczbe calkowita N: ";
cin >>N;
cout << "liczby nieparzyste od 1 do " << N << endl;
for (int i=1; i<=N; i +=2) {
       cout << i << endl;
   }
   return 0;
}

 