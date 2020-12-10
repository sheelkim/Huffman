/*****************************************************************//**
* \file c:\Users\kimly\OneDrive\Bureau\Huffman\Types\arbre.h
 * \brief  Header of the library allowing the management of arbre
 *
 * \author Kim Ly TEK, Chloe ANGLARD, Camille BENEZECH, Camille PALLUD
 * \date   December 2020
 *********************************************************************/
#ifndef ARBRE_H

/*!
* \def ARBRE_H
* Description
*/
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
 *         \n Example :
 *         \code{.c}
 * \return a node 
 */
Noeud* creer_noeud(char lettre, int occurrence);

/** 
 * \brief show the node of the tree
 * \return nothing because it's a void
 */
void afficher_noeud(Arbre arbre);


#endif // ARBRE_H


