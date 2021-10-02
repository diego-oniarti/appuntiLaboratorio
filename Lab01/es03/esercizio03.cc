//Diego Oniarti
#include <iostream>
using namespace std;

//Converte una temperatura indicata dall'utente da Fahrenheit a Celsius
int main(){
  float fahrenheit,celsius;
  cout << "Inserire temperatura in Fahrenheit: ";
  cin >> fahrenheit;

  celsius = (fahrenheit-32)/1.8;
  cout << "Temperatura in celsius: " << celsius << endl;

  return 0;
}
