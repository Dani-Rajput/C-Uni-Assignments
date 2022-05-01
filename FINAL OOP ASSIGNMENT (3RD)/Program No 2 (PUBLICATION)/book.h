#ifndef BOOK_H
#define BOOK_H

#include "publication.h"

class Book : public Publication{
    private:
        int pages;
    public:
        void getData();
        void putData();

        void showPrice();
};

#endif