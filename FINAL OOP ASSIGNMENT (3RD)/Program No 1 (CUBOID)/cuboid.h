#include <iostream>
using namespace std;

class Cuboid{
    private:
        float side1,side2,side3;
    public:
        Cuboid();
        Cuboid(const Cuboid& temp);
        Cuboid(float side1, float side2 , float side3);
        void setSide1(float side1);
        void setSide2(float side2);
        void setSide3(float side3);

        void input();

        float getSide1();
        float getSide2();
        float getSide3();

        Cuboid& operator=(const Cuboid& temp);
        Cuboid operator+(Cuboid);
        friend ostream &operator<<(ostream &out,Cuboid);
};