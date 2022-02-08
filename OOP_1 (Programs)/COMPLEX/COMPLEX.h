#include <iostream>
using namespace std;

class COMPLEX{
	private:
		// Data Members
		int real;
		int imaginary;

	public:
		// Default Constructor
		COMPLEX();

		// Parameterized Constructor
		COMPLEX(int r,int i);

		// Input Method
		void input();

		// Output Method
		void display();
		
		// Setters
		void setReal(int r){
			real = r;
		}

		void setImaginary(int i){
			imaginary = i;
		}
	
		// Getters
		int getReal(){
			return real;
		}

		int getImaginary(){
			return imaginary;
		}

};