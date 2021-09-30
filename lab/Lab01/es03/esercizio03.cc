#include <iostream>
using namespace std;

int main(){
  float fahrenheit,celsius;
  cout << "Inserire temperatura in Fahrenheit: ";
  cin >> fahrenheit;

  celsius = (fahrenheit-32)/1.8;
  cout << "Temperatura in celsius: " << celsius << endl;

  return 0;
}
