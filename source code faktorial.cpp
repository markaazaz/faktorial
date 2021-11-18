//Author by Marka
#include <iostream>
using namespace std;
//prototype
int faktorial(int n);
int main(){
  awal:
  int angka,hasil;
  cout<<"Masukkan angka faktorial :";
  cin>>angka;

  hasil = faktorial(angka);
  cout<<"\nFaktorial adalah "<<hasil<<endl;
  goto awal;
}

int faktorial(int n){
  if(n <= 1){
    cout<<n;
    return n ;
  }else{
    cout<<n <<"*";
  return n * faktorial(n-1);
 }
}//rumus faktorial adalah (n)= n*(n-1)!;
