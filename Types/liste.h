/*****************************************************************//**
* \file c:\Users\kimly\OneDrive\Bureau\Huffman\Types\liste.h
 * \brief  Header of the library allowing the management of liste
 *
 * \author Kim Ly TEK, Chloe ANGLARD, Camille BENEZECH, Camille PALLUD
 * \date   December 2020
 *********************************************************************/

#ifndef LISTE_H

/*!
* \def LISTE_H
* Description
*/
#define LISTE_H

/*! Importation of librairies*/
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
 * \param element
 * \return an element
 */
Element* creer_element(Noeud* noeud);

/** 
 * \brief Function to show a list
 *         \n Example :
 *         \code{.c}
 * \return nothing
 */
extern void afficher_liste(Liste liste);

#endif // LISTE_H

