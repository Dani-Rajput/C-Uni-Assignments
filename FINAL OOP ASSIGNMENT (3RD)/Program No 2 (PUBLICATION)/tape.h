#ifndef TAPE_H
#define TAPE_H

#include "publication.h"

class Tape : public Publication{
    private:
        float playTime;
    public:
        void getData();
        void putData();

        void showPrice();
};

#endif