#include <iostream>
using namespace std;
class Student{
public:
string name;
int age;
string course;
double cgpa;
void display(){
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<course<<endl;
    cout<<cgpa<<endl;

}
};
int main(){
   Student s;
   s.name="Biswajit Mohapatra";
   s.age=21;
   s.course="MCA";
   s.cgpa=8.27;
   cout<<"student details:"<<endl;
   s.display();
}