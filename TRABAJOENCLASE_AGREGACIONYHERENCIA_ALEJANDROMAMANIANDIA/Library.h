//
// Created by albin on 04/05/2019.
//

#ifndef TRABAJOENCLASE_AGREGACIONYHERENCIA_ALEJANDROMAMANIANDIA_LIBRARY_H
#define TRABAJOENCLASE_AGREGACIONYHERENCIA_ALEJANDROMAMANIANDIA_LIBRARY_H
#include <vector>
#include "Volume.h"
#include "Book.h"
#include "Magazine.h"


class Library {
private:
    int q_books;
    int q_magazines;
    vector<Volume*> volumes;
public:
    Library(int q_books, int q_magazines);
    void show_library();
    bool include(Volume* n_volume);

};


#endif //TRABAJOENCLASE_AGREGACIONYHERENCIA_ALEJANDROMAMANIANDIA_LIBRARY_H
