#include <iostream>
using namespace std;
int fac(int num){
    int f=1;
    for(int i=1;i<=num;i++){
        f*=i;
    }
    return f;
}
int nCr(int n,int r){
    int num=fac(n);
    int dem=fac(r)*fac(num-r);
    return num/dem;
}
int main(){
  int num,n,r;
  cin>>num;
 cout<< fac(num)<<endl;
}