                        //Class tetragon
#include <iostream>
#include "tetragon.h"

//Move
void tetragon::move(apex& two){
 int n=sizeof(val)/sizeof(val[0]);
 for(int i=0;i<n;i++)
  val[i].move(two);
}

//Print
void tetragon::print()const{
 int n=sizeof(val)/sizeof(val[0]);
 for(int i=0;i<n;i++)
  std::cout<<val[i];
}