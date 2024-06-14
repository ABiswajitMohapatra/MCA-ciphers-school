#include<iostream>
using namespace std;
class Main{
   public :
   void Dis(){
    cout<<"Base class "<<endl;
   }
};
class chota:public Main{
   public :
   void Dis(){
    cout<<"child class"<<endl;
   }
};
int main(){
  chota c;
  c.Dis();
  Main m;
  m.Dis();
  //Using pointer:
   chota m1;
  Main *ptr=&m1;
  ptr->Dis();
  chota *p=&c;
  p->Dis();
}