#include <iostream>
#include "Node.cpp"
#include "Carreau.cpp"

using namespace std ;

int main() {
    Carreau *c = new Carreau() ;
    c->print() ;

    c->rotateDownClkw() ;
    c->rotateRightClkw() ;

    c->print() ;

    return 0;
}
