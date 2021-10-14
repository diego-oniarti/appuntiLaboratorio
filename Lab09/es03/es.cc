//Diego Oniarti
#include <iostream>
#include <climits>

using namespace std;

int mas(int,int,int=INT_MIN,int=INT_MIN,int=INT_MIN);
int mast(int,int);

int main(){

  cout << "Max: "<< (mas(1,4,3,100,1)) <<endl;
  
  return 0;
}

int mast(int a, int b){
  return (a>b)?a:b;
}
int mas(int a,int b,int c,int d,int e){
  return mast(mast(mast(mast(a,b),c),d),e);
}
