#include "tape.h"

void Tape::getData(){
    Publication::getData();

    cout << "\nPlay Time : ";
    cin >> playTime;
}

void Tape::putData(){
    Publication::putData();
    cout << "\nPlay Time : " << playTime << endl;
}

void Tape::showPrice(){
    cout << "\nThe Price of Tape is : " << price;
}