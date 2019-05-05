//
// Created by albin on 04/05/2019.
//
#include<iostream>
#include "Volume.h"
#include "Book.h"
using namespace std;

Book::Book(int num_books, string name, int vol ): num_books{num_books}, Volume(name, vol){}
void Book::show() {
    cout<<"Num of volume: "<< vol<< "Num of book"<< num_books<<"Title: "<< name << endl;
}
