//Copyright genuineProgress 2020-2021
//Made as a course project for MSU MechMath CS course
//Contact info: Github genuineProgress
#ifndef CLIENT__INTERFACE_H_
#define CLIENT__INTERFACE_H_
#include "Sender.h"
#include <ctime>
#include <sstream>

class Interface {
 private:
  static int id_;
  Interface (Interface const &i);
  void operator= (Interface const &i);
 public:
  Interface ();
  static int id ();
  static int run ();
  static void log (const string &s);
  static void show (const string &s);
};

#endif //CLIENT__INTERFACE_H_
