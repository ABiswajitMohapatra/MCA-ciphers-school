#include <iostream>
using namespace std;
template<class T>
class Add{
public :
T a;
T b;
Add(T a, T b){
    this->a=a;
    this->b=b;
}
T getSum(){
    return a+b;
}
};
int main() {
 Add<int> N1(10,12);
 cout<<N1.getSum()<<endl;
}