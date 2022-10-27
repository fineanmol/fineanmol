#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int k=0;
  for(int i=2;i<n;i++){
    if(n%i==0){k++;}
  }
  if(k==0){
    cout<<"this is a prime number"<<endl;
  }
  else{
    cout<<"this is not prime"<<endl;
  }
  return 0;
}
