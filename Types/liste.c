#include <stdlib.h>
#include <stdio.h>

#include "liste.h"

Element* creer_element(Noeud *noeud)
{
    Element* element = malloc(sizeof(Element));
    element->noeud = noeud;
    element->suiv = NULL;
    
    return element;
}

void afficher_liste(Liste liste){
    Element *tmp = liste;

    while(tmp != NULL)
    {
         printf("%d\n", liste->noeud->lettre);
         tmp = tmp->suiv;
    }
}