#include "equipo.h"

equipo::equipo(vector<minion*> *team){
  lista = team;
}

equipo::equipo(){}

vector<minion*>* equipo::getEquipo(){
  return lista;
}
