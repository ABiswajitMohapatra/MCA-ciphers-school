#include<iostream>
using namespace std;
//Inheritance-> It allows us to create a class (derived /child /sub CLASS)from an existing class (base /parent /super)
//The child class inherits the features from the parent class and can also have additional features of its own:

class Animal{
  public:
  void eat(){
    cout<<"They can eat....."<<endl;
  }
};
class Dog:public Animal{
public:
void bark(){
    cout<<"Barking..."<<endl;
}
private:
void privteMethod(){

}

};
int main(){
  Dog d1;
  d1.eat();
  d1.bark();
  Animal a1;
  a1.eat();
//  a1.bark();// it will show error beacause ,child class can access the properties of parent class but not vice versa.
   
}