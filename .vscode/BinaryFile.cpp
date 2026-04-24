//reading an entire library
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    streampos size;
    char * memblock;

    ifstream file("example.bin" , ios ::in|ios::binary|ios::ate);
    if (file_isopen()) {
        file=tellg();
        memblock = new char [size];
        file.seekg(0, ios::beg);
        file.read(memblock, size);
        file.close();
        cout<<"the entire content is memory"<<endl;
        delete[] memblock;
    }
    else
    {
        cout <<"Unable to  open find"<<endl;
    }
    return 0;
}