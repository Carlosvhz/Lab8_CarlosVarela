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
        int num, op;
        cout<<" == Modificar equipos =="<<endl
            <<"Lista de equipos:"<<endl;
        for(int i=0; i<equipos->size(); i++){
          cout<<i<<".- Cantidad de minions de esta lista: "<<equipos->at(i)->getEquipo()->size()<<endl;
        }
        cout<<"¿Que desea hacer con estos equipos?"<<endl;
        cout<<"1. Agregar minions a la lista"<<endl
            <<"2. Quitar minions de la lista"<<endl
            <<"3. Salir"<<endl
            <<"Ingrese el numero de opcion: ";
        cin>>op;
        while(op<0||op>3){
          cout<<"¡¡Numero no valido!! Ingrese numero valido: ";
          cin>>op;
        }
        cout<<"-Ingrese numero de equipo: ";
        cin>>num;
        while(num<0||num>equipos->size()-1){
          cout<<"¡¡No existe este equipo!! Ingrese de nuevo: ";
          cin>>num;
        }
          switch(op){

            case 1:{ // ===> Agregar Minions
              int numero;
              char resp;
              if(equipos->at(num)->getEquipo()->size()<6){ //Valida si el equipo esta incompleto
                cout<<"Lista de minions: "<<endl;
                for(int i=0; i<minions->size(); i++){ //Muestra la lista de minions-
                  cout<<i<<".- Minion: "<<minions->at(i)->getNombre()<<endl;
                }
                do{
                  cout<<"-Ingrese el numero del minion: ";
                  cin>>numero;
                  if(numero>=0&&numero<minions->size()){ //Si el numero esta en el intervalo de la lista de minions
                    if((minions->at(numero))->getEstado()){ //Si el minion no esta ocupado
                      equipos->at(num)->getEquipo()->push_back(minions->at(numero)); //Toma el equipo y su arreglo para asignarle un minion
                      (minions->at(numero))->setEstado(false); //Le asigna al minion el estado de False (ocupado)
                      cout<<"¡¡Minion agregado!!"<<endl;
                    }else{
                      cout<<"¡¡Minion no disponible!!";
                    }
                  }else{
                    cout<<"¡¡Numero no valido!!";
                  }
                  cout<<"¿Desea continuar agregando minions al equipo?[s]: "; //Por si quiere asignar otro minion
                  cin>>resp;
                }while(resp=='s');
              }else{cout<<"¡¡Equipo Lleno!!";}
            }
            break;

            case 2:{ // ===> Quitar minions de la lista
              int numero;
              char resp;
              do{
                cout<<"Lista de minions del equipo seleccionado: "<<endl;
                for(int i=0; i<equipos->at(num)->getEquipo()->size(); i++){
                  cout<<i<<".- Minion: "<<equipos->at(num)->getEquipo()->at(i)->getNombre()<<endl;
                }
                cout<<"Ingrese numero del minion: ";
                cin>>numero;
                while(numero<0||numero>equipos->at(num)->getEquipo()->size()-1){
                  cout<<"¡¡Numero no valido!! Ingrese otro numero: ";
                  cin>>numero;
                }
                equipos->at(num)->getEquipo()->erase(equipos->at(num)->getEquipo()->begin()+numero);
                cout<<"¡¡Minion eliminado!!"<<endl
                    <<"¿Desea continuar eliminando minions del equipo?[s]: ";
                cin>>resp;
              }while(resp=='s');
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
        cout<<" (Elija equipos completos osea 7 minions) "<<endl
            <<"Ingrese numero de equipo 1: ";
        cin>>numero1;
        cout<<"Ingrese numero de equipo 2: ";
        cin>>numero2;
        if(numero1!=numero2){
          if(equipos->at(numero1)->getEquipo()->size()==7&&equipos->at(numero2)->getEquipo()->size()==7){
            simulacion(equipos->at(numero1),equipos->at(numero2));
          }else{
            cout<<"¡¡ Equipos incompletos!!";
          }
        }else{
          cout<<"¡¡ Escoja numeros diferentes !!";
        }
      }else{
        cout<<"¡¡No hay suficientes equipos!!";
      }
    }
    break;
  }
}

void simulacion(equipo* equipo1, equipo* equipo2){

}
