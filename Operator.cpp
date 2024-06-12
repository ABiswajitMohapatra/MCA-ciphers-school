#include<iostream>
using namespace std;
int main(){
    // int a=9;
    // int b=12;
    // //Arithmatic operator:
    // int sum=a+b;
    // int dif=a-b;
    // int mul=a*b;
    // int mod=a%b;
    // int div=a/b;
    // cout<<"The sum of a and b :"<<sum<<endl;
    // cout<<"The multiplication of a and b :"<<mul<<endl;
    // cout<<"The diffrence of a and b :"<<dif<<endl;
    // cout<<"The division of a and b :"<<div<<endl;
    // cout<<"The modulo of a and b :"<<mod<<endl;

    // int age;
    // cout<<"Enter your age:"<<endl;
    // cin>>age;
    // if(age<18)  cout<<"He/she  is a child."<<endl;
    // else if(age>18 && age<=60 )   cout<<"He/she  is a adult."<<endl;
    // else   cout<<"He/she  is a old."<<endl;

    int a,b,c;
    cout<<"Enter a:";
    cin>>a;
     cout<<"Enter b:";
    cin>>b;
     cout<<"Enter c:";
    cin>>c;
    if(a>b && a>c)  cout<<a<<" is greater"<<endl;
    else if(b>a && b>c)  cout<<b<<" is greater"<<endl;
    else cout<<c<<" is greater"<<endl;
    

}