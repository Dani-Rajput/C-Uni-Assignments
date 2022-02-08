#include <iostream>
#include "COMPLEX.h" // Importing COMPLEX header
using namespace std;

//---Customizing the methods of COMPLEX

// Default Constructor
COMPLEX :: COMPLEX(){
	real = 0;
	imaginary = 0;
}

// Parameterized Constructor having Default argument
COMPLEX :: COMPLEX(int r , int i = 0){
	real = r;
	imaginary = i;
}

// Input Method
void COMPLEX :: input(){
        cout << "\nEnter Real no   : "; cin >> real;
        cout << "\nEnter Imaginary : "; cin >> imaginary;
    }

// Output Method
void COMPLEX :: display(){
        cout << "\nComplex number : \n\t Real : " << real << "\n\t Imaginary : " << imaginary << "i" << endl;
    }

// Driver Function
int main(){
	// Specifying the number of array elements
	int count;
	
	// Taking Input for `count`
	cout << "\nHow many Complex numbers you want to create? : ";
	cin >> count;

	// Declaring COMPLEX array
    COMPLEX Cs[count];

	// Creating Special object Parameterized Constructor
	COMPLEX cx(5);

	// Declaring required variables
    int DReal = 0, DImaginary = 0;

    // Taking Input and adding
    for (int i = 0; i < count; i++){
        cout << "\nEnter values for Complex no : " << i + 1;
        Cs[i].input();
        DReal += Cs[i].getReal();
        DImaginary += Cs[i].getImaginary();
    }

	// Clearing Input Screen
	system("cls");

    // Displaying the output
    cout << "\nThe sum of all complex numbers is : " << DReal << " " << DImaginary << "i" << endl;

	// Setting Value using Setter
	cx.setImaginary(5);

	// Displaying Information of special COMPLEX using Getters
	cout << "\nSpecial Complex Number:\n\t" << cx.getReal() << " " << cx.getImaginary() << "i" << endl;

	// Returning
    return 0;
}
