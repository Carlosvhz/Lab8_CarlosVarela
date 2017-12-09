#include "minion.h"

minion::minion(string pnombre, int pbatallas_ganadas, int pexp){
  nombre = pnombre;
  batallas_ganadas = pbatallas_ganadas;
  exp = pexp;
  desocupado = true;
}

string minion::getNombre(){
  return nombre;
}

bool minion::getEstado(){
  return desocupado;
}

void minion::setEstado(bool estado){
  desocupado = estado;
}

minion::minion(){}

minion::~minion(){}
