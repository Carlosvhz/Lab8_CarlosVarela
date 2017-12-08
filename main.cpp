#include <iostream>
#include <vector>
#include <string>
#include "minion.h"

using namespace std;

//Prototipos
void menuOpciones(int,vector<minion*>*);

int main(){
  vector<minion*> minions;
  char resp;
  int opcion;
  do{
    for(int i=0;i<3;i++){cout<<endl;}
    cout<<" === Laboratorio#8 === "<<endl
        <<"1. Agregar Minions a la lista"<<endl
        <<"2. Eliminar minions de la lista"<<endl
        <<"3. Crear equipo"<<endl
        <<"4. Modificar equipo"<<endl
        <<"5. Eliminar equipo"<<endl
        <<"6. Simulacion"<<endl
        <<"7. Salir"<<endl
        <<"Ingrese la opcion: ";
    cin>>opcion;
    cout<<endl;
    menuOpciones(opcion,&minions);
  }while(opcion>0&&opcion<7);
  cout<<endl;
  return 0;
}

void menuOpciones(int opcion, vector<minion*> *minions){

  switch(opcion){

    case 1:{ // ====> Agregar Minions
      minion *minion;
      int op, batallas;
      string nombre,color;
      cout<<" == Agregar Minions a la lista == "<<endl
          <<"1. Goomba"<<endl
          <<"2. Chain Chomp"<<endl
          <<"3. Boo"<<endl
          <<"4. Paratroopa"<<endl
          <<"5. Hammer Bro"<<endl
          <<"6. MagiKoopa"<<endl
          <<"Ingrese el tipo de minion que agregara: ";
      cin>>op;
      cout<<"======================"<<endl;
      cout<<"-Ingrese nombre: ";
      cin>>nombre;
      cout<<"-Cantidad de batallas ganadas: ";
      cin>>batallas;
      switch (op) { // ====> Goomba
        case 1:{
          /*Nombre, batallas, exp, capacidad de intimidar,tamaño,hp,defensa,velocidad,fuerza*/
          int hp,def,vel,fuerza,size;
          cout<<"-Ingrese tamaño: ";
          cin>>size;
          cout<<"-Ingrese hp: ";
          cin>>hp;
          cout<<"-Ingrese defensa: ";
          cin>>def;
          cout<<"-Ingrese velocidad: ";
          cin>>vel;
          cout<<"-Ingrese fuerza: ";
          cin>>fuerza;

        }
        break;
      }
    }
    break;
  }
}
