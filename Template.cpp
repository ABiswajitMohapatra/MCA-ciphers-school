#include <iostream>
using namespace std;
template <class T>
class Number{
 private :
 T num;
 public :
 Number(T n){
    num=n;
 }
T getNum(){
    return num;
}
};
int main() {
    Number<int> N1(10);
    cout<<N1.getNum()<<endl;
    Number <float>N2(10.45);
    cout<<N2.getNum()<<endl;
    Number<string> N3("Biswajit");
    cout<<N3.getNum()<<endl;

    
}