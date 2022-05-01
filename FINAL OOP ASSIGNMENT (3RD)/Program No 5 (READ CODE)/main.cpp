#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file;
    string line;
    file.open("main.cpp");

    while(getline(file,line)){
        cout << line << endl;
    }
}

