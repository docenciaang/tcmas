//===============================================================================
//===============================================================================
#include <iostream>


#include "Punto.h"

using namespace std;

//===============================================================================
//===============================================================================
void print(int a){
    cout << a;
};

void print(string str){
    cout << str;
};

string invertirStr(string str){
    int longitud = str.length();
    int ind = 0;
    string strDevolver= str;
    
    while(ind < longitud){
        strDevolver[ind] = str[ind] ;
        ind++;
    }
    return strDevolver;
}
//===============================================================================
//  MAIN
//===============================================================================
int main(){
   string str="como estas";
  
   cout << "Primer programa de c++" << endl ;
   
   string dosStr = invertirStr(str);
   cout << " str invertido ="<< dosStr << endl;
    print(33);
    print("hola");

    

    Punto p(7,43.5);
    p.print();
   return 1 ;
}