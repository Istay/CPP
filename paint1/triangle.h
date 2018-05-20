//////////definition of class triangle/////////
#ifndef TRIANGLE_H                           //
#define TRIANGLE_H                           //
#include <string>                            //
#include "figure.h"                          //
///////////////////////////////////////////////
class triangle: public figure{               //
public:                                      //
 triangle(std::string name1): name(name1){}  ////////////////////////
 triangle(std::string name1, apex* val1): name(name1), val(val1){} //
 const std::string& GetName()const{return name;}                   //
 apex* GetVal()const{return val;}            ////////////////////////
 void move(apex&);                           //
 void print()const;                          //
protected:                                   //
 std::string name;                           //
 apex *val;                                  //
};                                           //
///////////////////////////////////////////////
#endif /*TRIANGLE_H*/                        //
///////////////////////////////////////////////
