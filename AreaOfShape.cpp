#include <iostream>
#include <ctime>
using namespace std;
int main(){
    cout<<"Please Select the shape to calculate"<<endl;
    cout<<"1.Square"<<endl;
    cout<<"2.rectangle"<<endl;
    cout<<"3.triangle"<<endl;
    cout<<"4.quit program"<<endl;
    cout<<"Enter Selection"<<endl;
    int a;
    cin>>a;
      if (a==1){
      cout<<"area of square= side*side:"<<endl;
      cout<<"enter the side of squares :"<<endl;
      int b;
      cin>>b;
     int ans= b*b;
      cout<<"answer = "<<ans<<endl;
      }else if(a==2){
        cout<<"Area of Rectangle width* Length"<<endl;
        cout<<"enter the length"<<endl;
        int s;
        cin>>s; 
        cout<<"Enter width"<<endl;
        int y;
        cin>>y;
        int sum =y*s;
        cout<<"answer = :"<<sum<<endl;
      }else if(a==3){
        cout<<"Area of tringle, 1/2 * base *height "<<endl;
        cout<<"Enter base"<<endl;
        int r;
        cin>>r;
        cout<<"enter height"<<endl;
        int f;
        cin>>f;
        int k= 0.5 * r * f;
        cout<<"the answer = "<<k<<endl;
      }else if(a==4){
        cout<<"quited"<<endl;
      }else{cout<<"Invalid!, input please enter valid number 1-4"<<endl;}

}