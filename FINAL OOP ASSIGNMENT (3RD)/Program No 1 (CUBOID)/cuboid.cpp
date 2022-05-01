/*
    Cuboid Class:
        Constructors (Default,Copy,Parameterized)
        Setters & Getters
        Input Function
        Insertion and assignment operator overloading

    Global Functions:
        write2file
        readFile
*/
#include <fstream>
#include "cuboid.h"

Cuboid::Cuboid(){
    side1 = 1;
    side2 = 1;
    side3 = 1;
}

Cuboid::Cuboid(const Cuboid& temp){
    side1 = temp.side1;
    side2 = temp.side2;
    side3 = temp.side3;
}

Cuboid::Cuboid(float side1 , float side2 , float side3){
    setSide1(side1);
    setSide2(side2);
    setSide3(side3);
}

void Cuboid::setSide1(float side){ side1 = (side > 1 && side < 35) ? side:1;  }

void Cuboid::setSide2(float side){ side2 = (side > 1 && side < 35) ? side:1; }

void Cuboid::setSide3(float side){ side3 = (side > 1 && side < 35) ? side:1; }

float Cuboid::getSide1(){ return side1; }

float Cuboid::getSide2(){ return side2; }

float Cuboid::getSide3(){ return side3; }

void Cuboid::input(){
    cout << "\nEnter The Sides of Cuboid (Must be x>1<35) : \n\n";

    cout << "\nSide 1 : ";
    cin >> side1;

    cout << "\nSide 2 : ";
    cin >> side2;

    cout << "\nSide 3 : ";
    cin >> side3;

    setSide1(side1);
    setSide2(side2);
    setSide3(side3);
}

Cuboid Cuboid::operator+(Cuboid temp){
    Cuboid temp2;

    temp2.side1 = side1 + temp.side1;
    temp2.side2 = side2 + temp.side2;
    temp2.side3 = side3 + temp.side3;

    return temp2;
}

ostream &operator<<(ostream &out,Cuboid temp){
    out << "\nSides of Cuboid: \n\n";
    out << "\nSide 1 : " << temp.side1;
    out << "\nSide 2 : " << temp.side2;
    out << "\nSide 3 : " << temp.side3 << endl;
 
    return out;
}

Cuboid& Cuboid::operator=(const Cuboid& temp){
    if (this != &temp){
        side1 = temp.side1;
        side2 = temp.side2;
        side3 = temp.side3;
    }
    return *this;
}

void write2File(Cuboid *cuboids,int size){
    fstream file;
    file.open("data.ssv",ios::app);
    for(int i = 0 ; i < size ; i++){
        cuboids[i].input();
        file << cuboids[i].getSide1() << ' ';
        file << cuboids[i].getSide2() << ' ';
        file << cuboids[i].getSide3() << '\n';
    }
    file.close();
}

void readFile(Cuboid *cuboids,int size){
    ifstream file;
    float s1,s2,s3;
    file.open("data.ssv");
    for(int i = 0 ; i < size ; i++){
        file >> s1 >> s2 >> s3;
        cuboids->setSide1(s1);
        cuboids->setSide2(s2);
        cuboids->setSide3(s3);
        cuboids++;
    }
    file.close();
}

int main(){
    int size = 10;
    Cuboid cuboids[size];

    // switch these functions carefully first use write2file after comment it

    readFile(cuboids,size);
    //write2File(cuboids,size);
    //system("del data.ssv"); // because we want new data everytime 

    for (int i = 0 ; i < size ; i++){
        cout << cuboids[i];
    }
    return 0;
}