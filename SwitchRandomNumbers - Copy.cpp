#include <iostream>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int daysUntilExpiration = rand()%11+1;
    switch (daysUntilExpiration)
    {
        
    case 1: 
        cout <<"Your subcription expires soon, Renew now!"<<endl;
        break;
    
    case 2:
        cout <<"Your subscription Expires in:"<<daysUntilExpiration<<"Renew now and save 10%"<<endl;
        break;
    
    case 3:
        cout <<"your subcription expires in a day"<<endl;
        break;
    
    case 4: 
        cout <<"you have an active subscription"<<endl;
        break;

        default:
        cout<<"your subcription has expired"<<endl;
    

    
    
}
return 0;
}