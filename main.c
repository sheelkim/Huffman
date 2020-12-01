#include <stdio.h>
#include <stdlib.h>
#include "Huffman\huffman.h"

int main()
{
    ecriture_texte("texte.txt", "binaire.txt");
    printf("Nombre de caractère dans le fichier texte.txt : %d\n", compter_caractere("texte.txt"));
    printf("Nombre de caractère dans le fichier binaire : %d\n", compter_caractere("binaire.txt"));

    return 0;
}

