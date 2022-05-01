#include <iostream>
using namespace std;

template <typename T>
T average(T* array, int size)
{
    T total = 0;
    for(int i = 0 ; i < size ; i++){
        total += array[i];
    }
    return (total/size);
}

int main(){
    float x[2] = {1,2};
    cout << average(x,2);

}