/*--------------------------------------------------------
 * Dato de Entrada: radio, altura (double)
 * Dato de Salida: asc, aLateral, aTotal, volumen (double)
 --------------------------------------------------------*/

#include "CCilindro.h"

int main()
{
  tnumero r,a;
  cout << "Radio : ";
  cin >> r;
  cout << "Altura: ";
  cin >> a;
  CCilindro   Objeto(r,a);

  cout <<"\n";
  cout << "Area de la superficie cilindrica : " << Objeto.asc() << "\n";
  cout << "Area lateral                     : " << Objeto.aLateral() << "\n";
  cout << "Area total                       : " << Objeto.aTotal() << "\n";
  cout << "Volumen                          : " << Objeto.volumen() << "\n";
  return 0;
}


