#include <iostream>
using namespace std;
template<class T>
class Add{
    T a;
    T b;
    public:
   Add(T a,T b){
    this->a=a;
    this->b=b;
   }
   T getSum(){
    return a+b;
   }
   //template of func:
   template<typename T>
   T add(T a,T b){
    return a+b;
   }
};
int main() {
    Add <int>n1(10,12);
    cout<<n1.getSum()<<endl;
    Add <float>n2(10.4,12.5);
    cout<<n2.getSum()<<endl;
    Add <double>n3(11.11,12.67);
    cout<<n3.getSum()<<endl;
    
    
}

