#include <iostream>using namespace std;int main(){float a,N;cout<<"Inserire A e N:"<<endl;cin>>a>>N;float pot=a;for(int i=0;i<N;i++){cout<<i+1<<": "<<pot<<endl;pot*=a;}return 0;}
