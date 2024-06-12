#include <iostream>
using namespace std;
class Super{
    public:
  double length;
  double breadth;
  double height;
  double Area(){
    return length*breadth;
  }
  double volume(){
    return length*breadth*height;
  }
};
int main(){
    Super s;
    s.length=8.56;
    s.breadth=2.34;
    s.height=7.87;
    cout<<"Area is :"<<s.Area()<<endl;
    cout<<"volume is :"<<s.volume()<<endl;
    //cout<<"Area is"<<s.Area()<<endl;
    

}