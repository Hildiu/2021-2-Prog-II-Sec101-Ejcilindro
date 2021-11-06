//
// Created by MARIA HILDA BERMEJO RIOS on 11/6/21.
//

#include "CCilindro.h"

tnumero CCilindro::asc()
{
  return 2*PI*pow(radio,2);
}

tnumero CCilindro::aLateral()
{
  return 2*PI*radio*altura;
}

tnumero CCilindro::aTotal()
{
  return asc() + aLateral();
}

tnumero CCilindro::volumen()
{
  return PI*pow(radio,2)*altura;
}