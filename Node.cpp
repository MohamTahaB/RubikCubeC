


#ifndef CARREAU_CPP
#define CARREAU_CPP

#include "Carreau.cpp"
#include <vector>

using namespace std ;

class Node {
    Carreau currentCube ;
    Node* fatherCube ;
    vector<Node *> sons ;
    int level ;
public :
    Node( Carreau currentCube , Node* fatherCube , vector<Node*> sons, int level) {
        this->currentCube = currentCube ;
        *(this->fatherCube) = *fatherCube ;
        (this->sons).clear() ;
        for (Node* i : sons) {
            Node* aux ;
            *aux = *i ;
            (this-> sons).push_back(aux) ;
        }
        this->level = level ;
    }


    Node( Carreau currentCube , Node* fatherCube , int level) {
        this->currentCube = currentCube ;
        *(this->fatherCube) = *fatherCube ;
        this->sons.clear() ;
        this->level = level ;
    }

    void addSon(Carreau son) {
        Node* aux = new Node(son, this, level+1) ;
        sons.push_back(aux) ;
    }

    Carreau getCurrentCube() {
        return currentCube;
    }

    Node getFatherCube() {
        return *fatherCube;
    }

    vector<Node*> getSons() {

        return sons;
    }



    int getLevel() {
        return level;
    }
};

#endif

