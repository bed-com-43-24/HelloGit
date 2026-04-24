#include <iostream>
using namespace std; 


       void num(int *varA,int *varB){
       int temp = *varA;
            *varA= *varB;
             *varB = temp;
       }
    
     int main(){
          int varA=25;
          int varB=100;
          //before swaping

        cout<<"value of A :"<<varA<<endl;
        cout<<"value of B :"<<varB<<endl;  
     // after swap 
      num(&varA,&varB);
          cout<<"New value of A :"<<varA<<endl;
          cout<<"New value of B :"<<varB<<endl;
          return 0;
       
}

