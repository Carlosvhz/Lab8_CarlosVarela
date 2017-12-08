#include "minion.h"

minion::minion(string pnombre, int pbatallas_ganadas, int pexp){
  nombre = pnombre;
  batallas_ganadas = pbatallas_ganadas;
  exp = pexp;
  desocupado = true;
}

bool minion::getOcupacion(){
  return desocupado;
}
minion::minion(){}

minion::~minion(){}
