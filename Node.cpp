#include "Cube.cpp"
#include <vector>

using namespace std ;

class Node {
    Cube currentCube ;
    Node* fatherCube ;
    vector<Node *> sons ;
    int level ;
public :
    Node( Cube currentCube , Node* fatherCube , vector<Node*> sons, int level) {
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


    Node( Cube currentCube , Node* fatherCube , int level) {
        this->currentCube = currentCube ;
        *(this->fatherCube) = *fatherCube ;
        this->sons.clear() ;
        this->level = level ;
    }

    void addSon(Cube son) {
        Node* aux = new Node(son, this, level+1) ;
        sons.push_back(aux) ;
    }

    Cube getCurrentCube() {
        return currentCube;
    }

    
};

