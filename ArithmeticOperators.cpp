#include <iostream>
using namespace std;
main (){
    int a = 10;
    int b = 21; 
    int c;
    c = a + b;
    cout<<"Line - 1 is value of c:"<<c<<endl;
    c = a - b;
    cout<<"Line - 2 is value of c: "<<c<<endl;
    c = a * b;
    cout<<"Line - 3 is value of c:"<<c<<endl;
    c = a / b;
    cout<<"Line - 4 is value of c:"<<c<<endl;
    c = c % b;
    cout<<"Line - 5 is value of c:"<<c<<endl;
    c = a++;
    cout<<"Line - 6 is value of c :"<<c<<endl;
    c = a--;
    cout<<"Line - 7 is value of c:"<<c<<endl;

    return 0;
}