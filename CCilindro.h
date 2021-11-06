//
// Created by MARIA HILDA BERMEJO RIOS on 11/6/21.
//

#ifndef PREG1_CCILINDRO_H
#define PREG1_CCILINDRO_H

#include <iostream>
using namespace std;

using tnumero = double;
const double PI=3.141516;

class CCilindro
{
  private:
    tnumero radio;
    tnumero altura;
public:
    CCilindro() {}
    CCilindro(tnumero _radio, tnumero _altura): radio(_radio), altura(_altura) {}
    virtual ~CCilindro() { cout << "Destruyendo el objeto!!!!";}
    tnumero asc();
    tnumero aLateral();
    tnumero aTotal();
    tnumero volumen();
    //--- metodos de acceso
    void setRadio(tnumero _radio){ radio = _radio;}
    tnumero getRadio(){ return radio;}
    void setAltura(tnumero _altura){ altura = _altura;}
    tnumero getAltura(){ return altura;}
};


#endif //PREG1_CCILINDRO_H
