#include <iostream>
using namespace std;
class Employee{
    public :
    Employee(){  //constructor method ->automatically call at the time object creation":
cout<<"From constructor"<<endl;
    }
};
int main(){
  Employee e1;
  Employee e2;
}
// Constuctor method is special member function is called Automatically when an object is created.
//it doesn't have return type
// it has same name as class