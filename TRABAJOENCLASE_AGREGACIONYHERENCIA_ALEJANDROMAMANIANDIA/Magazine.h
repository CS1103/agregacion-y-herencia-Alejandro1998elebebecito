//
// Created by albin on 04/05/2019.
//

#ifndef TRABAJOENCLASE_AGREGACIONYHERENCIA_ALEJANDROMAMANIANDIA_MAGAZINE_H
#define TRABAJOENCLASE_AGREGACIONYHERENCIA_ALEJANDROMAMANIANDIA_MAGAZINE_H

#include "Volume.h"

class Magazine: public Volume {
private:
    int num_magazines;
public:
    Magazine(int num_magazines, string name, int vol);
    void show();
};


#endif //TRABAJOENCLASE_AGREGACIONYHERENCIA_ALEJANDROMAMANIANDIA_MAGAZINE_H
