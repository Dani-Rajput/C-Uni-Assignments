#include <iostream>
#include "publication.cpp"
#include "book.cpp"
#include "tape.cpp"
using namespace std;

int main(){
    Publication pub,*pPub;
    Book book,*pBook;
    Tape tape,*pTape;

    pub.getData();
    pub.putData();
    pub.showPrice();

    system("cls");

    book.getData();
    book.putData();
    book.showPrice();

    system("cls");

    tape.getData();
    tape.putData();
    tape.showPrice();

    system("cls");

    // Allocating Dynamic Memory

    pPub = new Publication;
    pBook = new Book;
    pTape = new Tape;

    pPub -> getData();
    pPub -> putData();
    pPub -> showPrice();

    system("cls");

    pBook -> getData();
    pBook -> putData();
    pBook -> showPrice();

    system("cls");

    pTape -> getData();
    pTape -> putData();
    pTape -> showPrice();

    system("cls");

    // Releasing Memory

    delete pPub;
    delete pBook;
    delete pTape;

    return 0;
}