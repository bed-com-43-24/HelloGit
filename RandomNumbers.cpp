#include <iostream>
#include <random>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
     

    int daysUntilExpiration = rand ()% 11;

cout<<"days-left :"<<daysUntilExpiration<<endl;

if (daysUntilExpiration <= 10){
    cout<<"your subscription will expire soon"<<endl;
}else if (daysUntilExpiration <=5){
    cout<<"your subscription expires in"<<daysUntilExpiration<<"Renew now and save 20%"<<endl;
}else if(daysUntilExpiration = 1){
    cout<<"Your Subscription Expires within a day, Renew now and save 20%"<<endl;
}else if(daysUntilExpiration ==11){
    cout<<"You have an active subscription"<<endl;
}
    else {cout<<"Your subscription has expired"<<endl;
}
}