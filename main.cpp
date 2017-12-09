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
#include "equipo.h"

using namespace std;

//Prototipos
void menuOpciones(int,vector<minion*>*,vector<equipo*>*);
void simulacion(equipo*,equipo*);
minion* resetearvida(minion*);

int main(){
  vector<minion*> minions;
  vector<equipo*> equipos;
  char resp;
  int opcion;
  do{
    for(int i=0;i<3;i++){cout<<endl;}
    cout<<" === Laboratorio#8 === "<<endl
        <<"1. Agregar Minions a la lista"<<endl
        <<"2. Eliminar minions de la lista"<<endl
        <<"3. Crear equipo"<<endl
        <<"4. Modificar equipo"<<endl
        <<"5. Simulacion"<<endl
        <<"6. Salir"<<endl
        <<"Ingrese la opcion: ";
    cin>>opcion;
    cout<<endl;
    menuOpciones(opcion,&minions,&equipos);
  }while(opcion>0&&opcion<7);
  cout<<endl;
  return 0;
}

void menuOpciones(int opcion, vector<minion*> *minions, vector<equipo*> *equipos){

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
          minions->push_back(new goomba(nombre,batallas,hp,0,65,10,2,capacidad,size));
        }
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
          minions->push_back(new chainchomp(nombre,batallas,hp,60,20,15,1,capacidad,color));
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
          minions->push_back(new boo(nombre,batallas,hp,20,35,8,3,color));
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
          minions->push_back(new paratroopa(nombre,batallas,hp,40,10,9,4,color));
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
          minions->push_back(new hammerbro(nombre,batallas,hp,15,30,6,0,rango,tamano));
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
          minions->push_back(new magikoopa(nombre,batallas,hp,0,60,7,0,rango,color));
        }
      }
      cout<<"¡Minion agregado!"<<endl;
    } //=====>Fin case 1
    break;

    case 2:{ // ====> Eliminar Minios
      if(minions->size()>0){
        int num;
        cout<<" == Eliminar minions a la lista == "<<endl
            <<"Hay "<<minions->size()<<" minios en la lista..."<<endl
            <<"Ingrese el numero de minion que eliminara: ";
        cin>>num;
        while(num<0||num>=minions->size()){
          cout<<"¡No existe este numero! Ingrese de nuevo: ";
          cin>>num;
        }
        if(minions->at(num)->getEstado()){
          minions->erase(minions->begin()+num);
          cout<<"¡¡ Minion eliminado !!";
        }else{
          cout<<"¡¡Este minion esta en un equipo!! Por ello no puede eliminarlo";
        }
      }else{
        cout<<"¡¡ No hay minions a eliminar!!";
      }
    }
    break;

    case 3:{ // ====> Crear equipo
      char resp;
      do{
        if(minions->size()>0){
          int num;
          vector<minion*> lista;
          cout<<" == Crear equipo == "<<endl
              <<"Lista de minions: "<<endl;
          for(int i=0; i<minions->size(); i++){
            cout<<i<<".- Nombre: "<<minions->at(i)->getNombre()<<endl;
          }
          do{
              cout<<"-Ingrese el numero del minion: ";
              cin>>num;
              if(num>=0&&num<minions->size()){
                if((minions->at(num))->getEstado()){
                  lista.push_back(minions->at(num));
                  (minions->at(num))->setEstado(false);
                }else{
                  cout<<"¡¡Minion no disponible!!";
                }
              }else{
                cout<<"¡¡Numero no valido!!";
              }
              cout<<"¿Desea continuar agregando minions[s]?: ";
              cin>>resp;
          }while(resp=='s');
          cout<<"¡¡Equipo agregado!!"<<endl;
          equipos->push_back(new equipo(&lista));
        }else{
          cout<<"¡¡ No hay minios suficientes !!";
        }
        cout<<"¿Desea continuar creando equipos[s]?: ";
        cin>>resp;
      }while(resp=='s');
    }
    break;

    case 4:{ // ====> Modificar equipos
      if(equipos->size()>0){
        int num_equipo, op;
        cout<<" == Modificar equipos =="<<endl
            <<"Lista de equipos:"<<endl;
        for(int i=0; i<equipos->size(); i++){
          cout<<i<<".- Cantidad de minions de esta lista: "<<equipos->at(i)->getEquipo()->size()<<endl;
        }
        cout<<"¿Que desea hacer con estos equipos?"<<endl;
        cout<<"1. Agregar minions a la lista"<<endl
            <<"2. nada...Salir"<<endl
            <<"Ingrese el numero de opcion: ";
        cin>>op;
        while(op<0||op>3){
          cout<<"¡¡Numero no valido!! Ingrese numero valido: ";
          cin>>op;
        }
        cout<<"-Ingrese numero de equipo: ";
        cin>>num_equipo;
        while(num_equipo<0||num_equipo>equipos->size()-1){
          cout<<"¡¡No existe este equipo!! Ingrese de nuevo: ";
          cin>>num_equipo;
        }
          switch(op){

            case 1:{ // ===> Agregar Minions
              int numero_minion;
              cout<<endl;
              cout<<"Lista de minions: ";
              for(int i=0; i<minions->size(); i++){
                cout<<i<<".- Minion: "<<minions->at(i)->getNombre()<<endl;
              }
              cout<<endl
                  <<"Ingrese el numero de minion a ingresar: ";
              cin>>numero_minion;
              while(numero_minion<0||numero_minion>minions->size()-1){
                cout<<"¡¡Numero invalido!! Ingrese numero: ";
                cin>>numero_minion;
              }
              if(minions->at(numero_minion)->getEstado()){
                equipos->at(num_equipo)->getEquipo()->push_back(minions->at(numero_minion));
                cout<<"Minion agregado";
              }else{
                cout<<"¡¡Minion ocupado!!";
              }
            }
            break;
          }
        }
    }
    break;

    case 5:{ // ====> Simulacion
      if(equipos->size()>2){
        int numero1, numero2;
        cout<<" == Simulacion =="
            <<"Lista de equipos: ";
        for(int i=0; i<equipos->size(); i++){
          cout<<i<<".- Contiene "<<equipos->at(i)->getEquipo()->size()<<endl;
        }
        cout<<"Elija equipos de 7 minions, ingrese numero equipo 1: ";
        cin>> numero1;
        cout<<"Elija equipos de 7 minions, ingrese numero equipo 2: ";
        cin>>numero2;
        while(numero1<0||numero1>equipos->size()-1||numero2<0||numero2>equipos->size()-1||numero1==numero2){
          cout<<"Ingrese bien los numeros... "<<endl
              <<"Ingrese numero 1: ";
          cin>>numero1;
          cout<<"Ingrese numero 2: ";
          cin>>numero2;
        }
        if(equipos->at(numero1)->getEquipo()->size()==7&&equipos->at(numero2)->getEquipo()->size()==7){
          simulacion(equipos->at(numero1),equipos->at(numero2));
        }else{
          cout<<"¡¡Los equipos estan incompletos!!";
        }
      }else{
        cout<<"¡¡No hay suficientes equipos!!";
      }
    }
    break;
  }
}

minion* resetearvida(minion* m){

}

void simulacion(equipo* equipo1, equipo* equipo2){
  vector<minion*> *vector1 = equipo1->getEquipo();
  vector<minion*> *vector2 = equipo2->getEquipo();
  goomba* Goomba;
  chainchomp* Chainchomp;
  boo* Boo;
  paratroopa* Paratropa;
  hammerbro* Hammerbro;
  magikoopa* MagiKoopa;
  goomba* Goomba2;
  chainchomp* Chainchomp2;
  boo* Boo2;
  paratroopa* Paratropa2;
  hammerbro* Hammerbro2;
  magikoopa* MagiKoopa2;
  for(int i=1; i<7; i++){
    if(dynamic_cast<goomba*>(vector1->at(i))){
      Goomba = dynamic_cast<goomba*>(vector1->at(i));
      if(dynamic_cast<goomba*>(vector2->at(i))){
        Goomba2 = dynamic_cast<goomba*>(vector2->at(i));
      }
    }else if(dynamic_cast<chainchomp*>(vector1->at(i))){
      Chainchomp = dynamic_cast<chainchomp*>(vector1->at(i));
      if(dynamic_cast<chainchomp*>(vector2->at(i))){
        Chainchomp2 = dynamic_cast<chainchomp*>(vector2->at(i));
      }
    }else if(dynamic_cast<boo*>(vector1->at(i))){
      Boo = dynamic_cast<boo*>(vector1->at(i));
      if(dynamic_cast<boo*>(vector2->at(i))){
        Boo2 = dynamic_cast<boo*>(vector2->at(i));
      }
    }else if(dynamic_cast<paratroopa*>(vector1->at(i))){
      Paratropa = dynamic_cast<paratroopa*>(vector1->at(i));
      if(dynamic_cast<paratroopa*>(vector2->at(i))){
        Paratropa2 = dynamic_cast<paratroopa*>(vector2->at(i));
      }
    }else if(dynamic_cast<hammerbro*>(vector1->at(i))){
      Hammerbro = dynamic_cast<hammerbro*>(vector1->at(i));
      if(dynamic_cast<hammerbro*>(vector2->at(i))){
        Hammerbro2 = dynamic_cast<hammerbro*>(vector2->at(i));
      }
    }else if(dynamic_cast<magikoopa*>(vector1->at(i))){
      MagiKoopa = dynamic_cast<hammerbro*>(vector1->at(i));
      if(dynamic_cast<magikoopa*>(vector2->at(i))){
        MagiKoopa2 = dynamic_cast<hammerbro*>(vector2->at(i));
      }
    }
  }
}
