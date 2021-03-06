//////////definition of class point////////////
#ifndef POINT_H                              //
#define POINT_H                              //
#include <string>                            //
#include "figure.h"                          //
///////////////////////////////////////////////
class point: public figure{                  //
public:                                      //
 point(std::string name1): name(name1){}     ////////////////////////
 point(std::string name1, apex* val1): name(name1), val(val1){}    //
 const std::string& GetName()const{return name;}                   //
 apex* GetVal()const{return val;}            ////////////////////////
 void move(apex&);                           //
 void print()const;                          //
protected:                                   //
 std::string name;                           //
 apex* val;                                  //
};                                           //
///////////////////////////////////////////////
#endif /*POINT_H*/                           //
///////////////////////////////////////////////
