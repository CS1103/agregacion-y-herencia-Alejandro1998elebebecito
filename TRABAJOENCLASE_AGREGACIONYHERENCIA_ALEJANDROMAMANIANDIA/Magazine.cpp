//
// Created by albin on 04/05/2019.
//
#include <iostream>
#include "Magazine.h"
using namespace std;
Magazine::Magazine(int num_magazines, string name, int vol):num_magazines{num_magazines}, Volume(name, vol){}
void Magazine::show()
{
    cout<<" Num of volume: "<<vol<<"Num of magazine"<< num_magazines<< "Title: "<< name<< endl;
}