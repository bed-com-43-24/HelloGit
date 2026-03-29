#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    
    ifstream myfile("Exercise6.txt");
            string line;
    
        if (myfile.is_open()){
            while (getline(myfile, line)){
                cout<<line<<endl;
            }
            myfile.close();
        }else{
            cout<<"File not available"<<'\n';
        }
        return 0;
}