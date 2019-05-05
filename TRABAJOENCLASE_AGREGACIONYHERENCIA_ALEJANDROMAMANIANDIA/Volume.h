//
// Created by albin on 04/05/2019.
//

#ifndef TRABAJOENCLASE_AGREGACIONYHERENCIA_ALEJANDROMAMANIANDIA_VOLUME_H
#define TRABAJOENCLASE_AGREGACIONYHERENCIA_ALEJANDROMAMANIANDIA_VOLUME_H

#include <iostream>
#include <string>
using namespace std;
class Volume {
protected:
    string name;
    int vol;
public:
    Volume(string name, int vol);
    virtual  void show()=0; //Virtual function

};


#endif //TRABAJOENCLASE_AGREGACIONYHERENCIA_ALEJANDROMAMANIANDIA_VOLUME_H
