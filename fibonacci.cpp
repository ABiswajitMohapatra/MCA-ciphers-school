#include <iostream>
using namespace std;

int fibonacci(int a){
    if(a == 0) return 0;
    if(a == 1) return 1;
    return fibonacci(a-1) + fibonacci(a-2);
}

int main() {
    int a;
    cin>>a;
    cout<<fibonacci(a);
    return 0;
}