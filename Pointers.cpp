#include<iostream>
using namespace std;
int main(){

    //pointers is stored the address of other variable.
/*
    int a=90;
    int * ptr=&a;
    cout<<a<<endl;  //90
    cout<<&a<<endl; //address
    cout<<ptr<<endl;//address
    cout<<*ptr<<endl;//90   //*ptr->dereference variable
*/
    //modification:
    /*
    int b=89;
    int * c=&b;
    cout<<c<<endl;
    cout<<*c<<endl;
    *c=34;
    cout<<*c<<endl;
*/
    //Arithmatic Pointer:
    int x=78;
    int * p=&x;
    cout<<p<<endl;
    p++;
    cout<<*p<<endl;
    cout<<p<<endl;

    //pointer in Array:
    
    int a[]={23,85,56,34};
    //cout<<*a<<endl;
    int * ptr=a;
    for(int i=0;i<4;i++){
        cout<<*ptr<<endl;
        ptr++;

    }

}