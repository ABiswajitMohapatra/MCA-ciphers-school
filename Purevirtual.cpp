//Pure virtual function:
//if a function doesn't have anyn use in the base class but the function must be implemented by all its derived classes.
class A{
   public :
  virtual void dis()=0;
};
class B:public A{

};
class C:public A{

};
#include <iostream>
using namespace std;
int main() {
    
}