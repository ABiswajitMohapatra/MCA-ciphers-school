//Multilevel
class A{

};
class B:public A{

};
class C:public B{

};
class D:public C{

};

//Multiple Inheritance:
#include<iostream>
using namespace std;
class A{
    public:
  void print(){
    cout<<"Hey! Biswajit"<<endl;
  }
};
class B{
    public:
  void print(){
cout<<"Hey! Vish.."<<endl;
  }
};
class C:public A,public B{
   
};
int main(){
  C c1;
  //c1.print();//ambuiguity problem//diamond problem
  //solution":
  c1.A::print(); 
  //c1.B::print(); //::->Scope resolution variable
  

}