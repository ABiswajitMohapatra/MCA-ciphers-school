#include<iostream>
using namespace std;
class Employee{
    public :
    string name;
    int age;
    Employee(){
        cout<<"Non parameterized constructor"<<endl;
    }
    Employee(int n){
        age=n;
    }
    Employee(string name,int age){
        this->name=name;
        this->age=age;
    }
    void Display(){
        cout<<name<<endl;
        cout<<age<<endl;
    }
    ~Employee(){
        cout<<"destroyed"<<endl;
    }
};
int main(){
    Employee e1;
    Employee e2(21);
    Employee e3("Biswa",22);
    e2.Display();
    e3.Display();
}
