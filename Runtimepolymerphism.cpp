//Runtime polymerphism /late binding:
//virtual function is a memeber function in the base class that you redefine in the derived class.
// virtual key word->if you want to override the parent method.
/*A virtual function must be defined in the base class even though it is not used.
Virtual Functions must be members of some class.
They are accessed through objcet pointers.
*/
#include <iostream>
using namespace std;
class Base{
    public :
   virtual void meth1(){   //used when you want to override the fucntion
        cout<<"Base class meth1.."<<endl;
    }
    void meth2(){
        cout<<"Base class meth1.."<<endl;
    }
        
    };
    class Derived:public Base{
        public:
        void meth1() override {
            cout<<"Derived class meth1.."<<endl;
        }
         void meth2(){
            cout<<"Derived class meth2.."<<endl;
        }
    };
int main() {
    Derived D1;
   Base *ptr=&D1;
                   //    Derived *p=&D1;
                    //    p->meth2();  
   ptr->meth1();
}

//
