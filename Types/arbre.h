#ifndef ARBRE_H
#define ARBRE_H

typedef struct Noeud{
    struct Noeud *gauche;
    struct Noeud *droit;    
    char lettre;
    int occurrence;
}Noeud;

typedef struct Noeud *Arbre;



#endif // ARBRE_H


