#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    string FileData;
    int smallLetter =0;
    int space = 0;
         ifstream myfile("Exercise6.txt");
            if (myfile.is_open()){
                while(getline(myfile,FileData))
                {
                    cout<<FileData<<endl;
                }
                for (int i=0; i<FileData.length(); i++){
                    char g = tolower(FileData[i]);
                    if(g=='a'|| g=='e'|| g=='i'|| g=='o'|| g=='u'){
                        smallLetter++;
                    }
                }
                cout<<"Number of Vowels is: "<<smallLetter<<endl;
                for(int b=0; b<FileData.length(); b++){
                    char spaces=(FileData[b]);
                    if(spaces ==' '){
                        space++;
                    }
                }
                cout<<"the number of words are"<<space<<endl;

                for(int h=FileData.length()-1; h>=1; h--){
                   char backward =FileData[h];
                    cout<<backward;
                }
                myfile.close();
            }
            else
              {
                cout<<"unable to open file";
              }
            return 0;
            
        }
