#include <iostream>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
     int x=0;
      
     while (true){
        x = rand()%15 +1;
        cout<<"enter number"<<endl;
        cin>>x;
      if (x>=5 && x<=10)
     
     {
        cout<<"your input value("<<x<<")has been accepted"<<endl;
    
    break;
}else {
    cout<<"Please Enter a number between 5 and 10"<<endl;
}
     }
return 0;
}