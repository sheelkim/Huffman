/*****************************************************************//**
* \file c:\Users\kimly\OneDrive\Bureau\Huffman\Huffman\huffman.h
 * \brief  Header of the library allowing the management of huffman
 *
 * \author Kim Ly TEK, Chloe ANGLARD, Camille BENEZECH, Camille PALLUD
 * \date   December 2020
 *********************************************************************/


#ifndef HUFFMAN_H

/*!
* \def HUFFMAN_H
* Description
*/
#define HUFFMAN_H
/*! Importation of librairies*/
#include "../Types/arbre.h"
#include "../Types/liste.h"
/** 
 * \brief Function to convert char to binary
 *           \n Example :
 *         \code{.c}
 * \return nothing
 */
extern void caractere_binaire(char ch, char bit[9]);

/** 
 * \brief Function to write the conversion of a texte in binary in a text file 
          \n Example :
 *         \code{.c}
 * \return nothing
 */
extern void ecriture_texte(char *fichier1, char *fichier2);

/** 
 * \brief Function tp count the character of a file
          \n Example :
 *         \code{.c}
 * \return nothing
 */
extern int compter_caractere(char *fichier);

/** 
 * \brief Function to see the occurences of a text
*        \n Example :
 *         \code{.c}
 * \return a list
 */
extern Liste occurrence_texte(char *fichier);

/** 
 * \brief Function to create a tree 
           \n Example :
 *         \code{.c}
 * \return a tree
 */
extern Arbre arbre_huffman(Liste liste);

/** 
 * \brief Function to find the smallest element of a list
 *          \n Example :
 *         \code{.c}
 * \return a node
 */
extern Noeud* petit_element(Liste *liste);

#endif // HUFFMAN_H
