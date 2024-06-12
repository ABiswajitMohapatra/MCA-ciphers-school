#include <iostream>
using namespace std;
float add(float a ,float b){
  return a+b;
}
int add(int a,int b){
    return a+b;
}
int add(int a,int b,int c){
    return a+b+c;
}
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<add(a,b)<<endl;
    cout<<add(a,b)<<endl;
    cout<<add(a,b,c)<<endl;

}