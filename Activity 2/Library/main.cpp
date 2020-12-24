#include "library.h"
#include "book.h"
#include<iostream>
using namespace std;

int main(){
    Library lib;
    lib.addBook(0001, "qwe", "akash", 2016, 450.50, 100);
    lib.addBook(0002, "Abc", "gupta", 2017, 350.50, 200);
    lib.addBook(0003, "xyz", "Vikas", 2018, 250.50, 300);
    lib.addBook(0004, "upo", "gorav", 2019, 650.50, 400);
    lib.addBook(0005, "uno", "Sunshine", 2020, 150.0, 500);

    lib.displayAll();
    cout<<lib.isBookFound(0002);
    return 0;

}