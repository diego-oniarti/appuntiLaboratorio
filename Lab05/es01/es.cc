#include <iostream>
using namespace std;

int main(){
  float a,b,c;

  cout << "Inserire A, B e C:"<<endl;
  cin >> a >> b >> c;

  if (a>b) {
    if (b>c){
      cout << c << endl;
    }else{
      cout << b << endl;
    }
  }else{
    if (a<c){
      cout << a << endl;
    }else{
      cout << c << endl;
    }
  }
  
  return 0;
}
