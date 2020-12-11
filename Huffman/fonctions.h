/*****************************************************************//**
* 
 * \brief  Header of the library allowing the management of fonctions
 *
 * \author Kim Ly TEK, Chloe ANGLARD, Camille BENEZECH, Camille PALLUD
 * \date   December 2020
 *********************************************************************/



#ifndef FONCTIONS_H

/*!
* \def FONCTIONS_H
* Description
*/
#define FONCTIONS_H
/*! Importation of librairies*/
#include "../Types/arbre.h"
#include "../Types/liste.h"
#include "huffman.h"

/** 
 * \brief Function to test binary convertion
 *           \n Example :
 *         \code{.c}
 * \return nothing
 */
extern void convertion(void);

/** 
 * \brief Function to see the number of character of each text
 *           \n Example :
 *         \code{.c}
 * \return nothing
 */
extern void caractere_texte(void);

/** 
 * \brief Function to make a huffman tree
 *           \n Example :
 *         \code{.c}
 * \return nothing
 */
extern void huffman(void);

/** 
 * \brief Function to choose a menu
 *           \n Example :
 *         \code{.c}
 * \return nothing
 */
extern void menu(void);


#endif // FONCTIONS_H

