//Pure virtual function:
//if a function doesn't have any use in the base class but the function must be implemented by all its derived classes.
#include <iostream>
using namespace std;
class A{
   public :
  virtual void dis()=0;
};
class B:public A{
    public:
     void dis(){
      cout<<"why are you gay"<<endl;
    }
};
class C:public A{
   public :
   void dis(){
    cout<<"Who says i am gay"<<endl;
   }
};

int main() {
   C c1;
   B b1;
   A *ptr=&c1;
   A *p=&b1;
   ptr->dis();
   p->dis();
}