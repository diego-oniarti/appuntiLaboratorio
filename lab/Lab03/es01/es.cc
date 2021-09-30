#include <iostream>
#include <cmath>
using namespace std;

int main(){
  float a,b,c;
  float x1,x2;
  
  cout << "Inserire A: ";
  cin >> a;

  cout << "Inserire B: ";
  cin >> b;

  cout << "Inserire C: ";
  cin >> c;

  float radDelta = sqrt(b*b - 4*a*c);
  
  x1 = (-b+radDelta)/(2*a);
  x2 = (-b-radDelta)/(2*a);

  cout << "X1: " << x1 << endl;
  cout << "X2: " << x2 << endl;
  
  return 0;
}
