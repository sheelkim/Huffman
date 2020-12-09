/*********************************************************************************************
 * \file arbre.h
 * \brief Header of the library allowing the management of arbre
 * 
 * \autor : Kim Ly TEK, Chloe ANGLARD, Camille BENEZECH, Camille PALLUD
 * \date : december 2020
 * ********************************************************************************************/

#ifndef ARBRE_H
#define ARBRE_H
/**
 * typedef struct Noeud
 * \brief a Noeud is a node of a tree with his occurences and character
 */
typedef struct Noeud{
    struct Noeud *gauche; /**< the left node of a node */
    struct Noeud *droit;  /**< the right node of a node */
    char lettre; /**< the letter of the node */
    int occurrence; /**< the occurence of a node */
}Noeud, *Arbre;

/** 
 * \brief Function to create a node with his letter and occurences
 * \return a node 
 */
Noeud* creer_noeud(char lettre, int occurrence);

/** 
 * \brief show the node of the tree
 * \return nothing because it's a void
 */
void afficher_noeud(Arbre arbre);


#endif // ARBRE_H


