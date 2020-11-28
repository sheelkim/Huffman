#ifndef LISTE_H
#define LISTE_H

#include "arbre.h"

typedef struct Element{
        Noeud *noeud;
        struct Element *suiv;
}Element;

typedef struct Element *Liste;

void creer_element(Liste element);
void ajouter_element(Liste* liste, Element* element);


#endif // LISTE_H

