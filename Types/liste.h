/*********************************************************************************************
 * \file liste.h
 * \brief Header of the library allowing the management of liste
 * 
 * \autor : Kim Ly TEK, Chloe ANGLARD, Camille BENEZECH, Camille PALLUD
 ***********************************************************************************************/
#ifndef LISTE_H
#define LISTE_H

#include "arbre.h"
/**
 * typedef struct Element
 * \brief a Element of a list which contain the nodes with his next pointer
 */
typedef struct Element{
        Noeud *noeud; /**< the node */
        struct Element *suiv; /**< the pointer next of Element */
}Element;
typedef struct Element *Liste;

/** 
 * \brief Function to create a Element which is a node
 * \return a Element
 */
Element* creer_element(Noeud* noeud);

/** 
 * \brief Function to show the list 
 * \return nothing 
 */
void afficher_liste(Liste liste);

#endif // LISTE_H

