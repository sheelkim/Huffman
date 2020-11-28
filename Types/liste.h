#ifndef LISTE_H
#define LISTE_H

#include "arbre.h"

typedef struct Element{
        Noeud *noeud;
        struct Element *suiv;
}Element;

typedef struct Element *Liste;
#endif // LISTE_H

