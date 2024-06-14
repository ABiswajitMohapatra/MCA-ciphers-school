#include<iostream>
using namespace std;
class Base{
    public:
    int x;
    protected:
    int y;
    private:
    int z;
};
class c2:public Base{
   //x is public
   //y is protected
   //z is not accessible
};
class c3:protected Base{
   //x is protected
   //y is protected
   //z is not accessible
};
class c4:private Base{
   // x is private 
   //y is private
   //z is not accessible
};
int main(){

}