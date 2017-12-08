#include <iostream>
#include <vector>
#include <string>
#include "minion.h"
#include "goomba.h"
#include "chainchomp.h"
#include "boo.h"
#include "paratroopa.h"
#include "hammerbro.h"
#include "magikoopa.h"

using namespace std;

//Prototipos
void menuOpciones(int,vector<minion*>*,vector<vector<minion*>*>*);

int main(){
  vector<minion*> minions;
  vector<vector<minion*>*> equipos;
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
    menuOpciones(opcion,&minions,&equipos);
  }while(opcion>0&&opcion<7);
  cout<<endl;
  return 0;
}

void menuOpciones(int opcion, vector<minion*> *minions, vector<vector<minion*>*> *equipos){

  switch(opcion){
    case 1:{ // ====> Agregar Minions
      minion* Minion;
      int op, batallas, hp;
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
      switch (op) {
        case 1:{ // ====> Goomba
          int capacidad,size;
          cout<<"-Ingrese tamaño: ";
          cin>>size;
          cout<<"-Ingrese HP [20-40]: ";
          cin>>hp;
          while(hp<20||hp>40){
            cout<<"No se puede pasar del limite... Ingrese de nuevo: ";
            cin>>hp;
          }
          cout<<"-Capacidad de intimidar: ";
          cin>>capacidad;
          Minion = new goomba(nombre,batallas,0,capacidad,size,hp,0,65,10);
        }
        cout<<"¡Goomba agregado!"<<endl;
        break;

        case 2:{// ====> Chain Chomp
          string color;
          int capacidad;
          cout<<"-Ingrese color: ";
          cin>>color;
          cout<<"-Ingrese HP [10-30]: ";
          cin>>hp;
          while(hp<10||hp>30){
            cout<<"No se puede pasar del limite... Ingrese de nuevo: ";
            cin>>hp;
          }
          cout<<"-Capacidad de intimidar: ";
          cin>>capacidad;
          Minion = new chainchomp(nombre,batallas,0,capacidad,color,hp,60,20,15);
        }
        break;

        case 3:{// ====> Boo
          string color;
          cout<<"-Ingrese color: ";
          cin>>color;
          cout<<"-Ingrese HP [20-40]: ";
          cin>>hp;
          while(hp<20||hp>40){
            cout<<"No se puede pasar del limite... Ingrese de nuevo: ";
            cin>>hp;
          }
          Minion = new boo(nombre,batallas,0,color,hp,20,35,8);
        }
        break;

        case 4:{// ====> Paratroopas
          string color;
          cout<<"-Ingrese color: ";
          cin>>color;
          cout<<"-Ingrese HP [40-60]: ";
          cin>>hp;
          while(hp<40||hp>60){
            cout<<"No se puede pasar del limite... Ingrese de nuevo: ";
            cin>>hp;
          }
          Minion = new paratroopa(nombre,batallas,0,color,hp,40,10,9);
        }
        break;

        case 5:{// ====> Hammer bro
          int tamano,rango;
          cout<<"-Ingrese tamaño de los martillos: ";
          cin>>tamano;
          cout<<"-Ingrese HP [60-80]: ";
          cin>>hp;
          while(hp<60||hp>80){
            cout<<"No se puede pasar del limite... Ingrese de nuevo: ";
            cin>>hp;
          }
          cout<<"-Ingrese rango de ataque: ";
          cin>>rango;
          Minion = new hammerbro(nombre,batallas,0,rango,tamano,hp,15,30,6);
        }
        break;

        case 6:{// ====> Magikoopa
          int rango;
          string color;
          cout<<"-Ingrese color del traje: ";
          cin>>color;
          cout<<"-Ingrese HP [60-80]: ";
          cin>>hp;
          while(hp<60||hp>80){
            cout<<"No se puede pasar del limite... Ingrese de nuevo: ";
            cin>>hp;
          }
          cout<<"-Ingrese rango de ataque: ";
          cin>>rango;
          Minion = new magikoopa(nombre,batallas,0,rango,color,hp,15,30,6);
        }
      }
      minions->push_back(Minion);
    } //=====>Fin case 1
    break;

    case 2:{ // ====> Eliminar Minios
      if(minions->size()>0){
        int num;
        cout<<" == Eliminar minions a la lista == "<<endl
            <<"Hay "<<minions->size()<<" minios en la lista..."<<endl
            <<"Ingrese el numero de minion que eliminara: ";
        cin>>num;
        while(num<0||num>minions->size()){
          cout<<"¡No existe este numero! Ingrese de nuevo: ";
          cin>>num;
        }
        minions->erase(minions->begin()+num);
        cout<<"¡¡ Minion eliminado !!";
      }else{
        cout<<"¡¡ No hay minions a eliminar!!";
      }
    }
    break;

    case 3:{ // ====> Crear equipo
      if(minions->size()>7){
        cout<<" == Crear equipo == "<<endl
            <<"Lista de minions: ";
      }else{
        cout<<"¡¡ No hay minios suficientes !!";
      }
    }
    break;
  }
}
