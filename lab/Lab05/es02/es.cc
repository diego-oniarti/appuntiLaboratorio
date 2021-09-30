#include <iostream>
using namespace std;

int F(float a, float b, float c){
  if (a<b){
    return 1;
  }else if (a>c){
    return 0;
  }
  return -1;
}


int main(){
  float a,b,c;

  cout << "Inserire A, B e C:"<<endl;
  cin >> a >> b >> c;

  cout << "f("<<a<<","<< b<<","<<c<<") = "<< (F(a,b,c)) <<endl;
  
  return 0;
}
