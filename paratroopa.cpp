#include "paratroopa.h"


/*Nombre, batallas, exp,color,hp,defensa,velocidad,fuerza*/
paratroopa::paratroopa(string nombre,int batallas,int hp,int def,int vel,int fuer,int poder,string pcolor)
            :flying(nombre,batallas,hp,def,vel,fuer,poder){
  color_Caparazon = pcolor;
}

paratroopa::paratroopa(){}

string paratroopa::getColorcaparazon(){
  return color_Caparazon;
}

paratroopa::~paratroopa(){}

void paratroopa::ataque(minion* mi){

}
