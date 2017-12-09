#include "boo.h"


/*Nombre,batallas,hp,def,vel,fuer,poder,color*/
boo::boo(string nombre,int batallas,int hp,int def,int vel,int fuer,int poder,string pcolor)
    :flying(nombre,batallas,hp,def,vel,fuer,poder){
  color = pcolor;
}

boo::boo(){}

string boo::getColor(){
  return color;
}

boo::~boo(){}

void boo::ataque(minion* mi){

}
