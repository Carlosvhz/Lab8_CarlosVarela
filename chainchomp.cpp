#include "chainchomp.h"


/*Nombre,batallas,hp,def,vel,fuer,poder, capacidad, color*/
chainchomp::chainchomp(string nombre,int batallas,int hp,int def,int vel,int fuer,int poder,int capacidad,string pcolor)
          :melee(nombre,batallas,hp,def,vel,fuer,poder,capacidad){
  color = pcolor;
}

chainchomp::chainchomp(){}

string chainchomp::getColor(){
  return color;
}

chainchomp::~chainchomp(){}

void chainchomp::ataque(minion*){

}
