#include<iostream>
using namespace std;
int main(){
  /*  int day;
    cin>>day;
    switch (day){
        case 1:
        cout<<"Monaday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"friday";
        break;
        case 6:
        cout<<"saturday";
        break;
        case 7:
        cout<<"sunday";
        break;
        default:
        cout<<"Not valid"<<endl;
        */
        //Ternary operator:
     /*   int marks;
        cin>>marks;
        string result =(marks>=33) ? "pass" : "Fail";
        cout<<result<<endl;
        */
    //Replacement of nested if using ternary  operator:

    int num;
    cin>>num;
    string c=(num==0) ? "Zero" :((num>0)?"Positive" :"Negative");
    cout<<c<<endl;
}