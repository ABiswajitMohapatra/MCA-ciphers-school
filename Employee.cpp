#include <iostream>
using namespace std;
class Employee{
    public:
    
 virtual void salary()=0;
};
class Fulltime:public Employee{
   public :
   void salary() override{
    cout<<"100,000"<<endl;
   }
};
class contractual:public Employee{
   public :
   void salary() override{
   cout<<"12,000"<<endl;
   }
};
int main() {
    contractual C1;
    Employee *ptr=&C1;
    ptr->salary();
}