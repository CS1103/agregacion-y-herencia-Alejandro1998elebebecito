//
// Created by albin on 04/05/2019.
//

#ifndef TRABAJOENCLASE_AGREGACIONYHERENCIA_ALEJANDROMAMANIANDIA_BOOK_H
#define TRABAJOENCLASE_AGREGACIONYHERENCIA_ALEJANDROMAMANIANDIA_BOOK_H

#include "Volume.h"
class Book: public Volume{
private:
    int num_books;
public:
    Book(int num_books, string name, int vol);
    void show();
};


#endif //TRABAJOENCLASE_AGREGACIONYHERENCIA_ALEJANDROMAMANIANDIA_BOOK_H
