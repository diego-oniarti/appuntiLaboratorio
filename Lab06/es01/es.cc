//Diego Oniarti
#include <iostream>
#include <cmath>
using namespace std;


int main(){
  long numeroIterazioni;
  cout << "Inserire numero iterazioni: ";
  cin >> numeroIterazioni;

  long double somma = 0;
  for (long i=1; i<=numeroIterazioni; i++){
    somma += 1.0/(i*i);
  }
  
  cout << "PI = " << sqrt(somma*6) << endl;

  return 0;
}
