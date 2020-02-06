#include "Punto.h"
#include <iostream>

using namespace std;

Punto::Punto(float x, float y){
   _x=x;
   _y=y;
}

void Punto::print(){
  cout << "P( " << _x <<","<< _y <<" )" <<endl;

}