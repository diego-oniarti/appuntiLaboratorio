#include <iostream>
using namespace std;

int main(){
  float v1,v2;

  cout << "Inserire valore 1: ";
  cin >> v1;

  cout << "Inserire valore 2: ";
  cin >> v2;

  cout << "Prima dello scambio:"<<endl;
  cout << "v1: "<<v1<< "\nv2: "<<v2<<endl;

  v2 += v1;
  v1 = v2-v1;
  v2 -= v1;

  cout << "Dopo lo scambio:"<<endl;
  cout << "v1: "<<v1<< "\nv2: "<<v2<<endl;
  
  return 0;
}
