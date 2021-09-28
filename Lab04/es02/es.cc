#include <iostream>
using namespace std;

int main(){
  float a,b;

  cout << "Inserire A e B: ";
  cin >> a >> b;

  float M = (a>=b)*a + (b>a)*b;
  float m = a+b-M;
    
  cout << "Max: "<< M <<endl<<"min: "<< m << endl;
  
  return 0;
}
