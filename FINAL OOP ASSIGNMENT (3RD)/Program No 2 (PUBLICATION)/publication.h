#ifndef PUBLICATION_H
#define PUBLICATION_H

#include <iostream>
using namespace std;

class Publication{
    protected:
        string title;
        float price;
    public:
        void getData();
        void putData();

        virtual void showPrice(){
            cout << "\nPrice : " << price << endl;
        }
};

#endif