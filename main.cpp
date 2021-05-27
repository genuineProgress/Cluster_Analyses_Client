//Copyright genuineProgress 2020-2021
//Made as a course project for MSU MechMath CS course
//Contact info: Github genuineProgress
#include "Interface.h"

int main () {
    auto *ss = new Sender (true);
    Interface I;
    Interface::run ();
    delete ss;
}
