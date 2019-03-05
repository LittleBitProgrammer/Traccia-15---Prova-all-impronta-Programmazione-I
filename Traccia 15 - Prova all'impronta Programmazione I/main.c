//
//  main.c
//  Traccia 15 - Prova all'impronta Programmazione I
//
//  Created by Roberto Vecchio on 18/02/2019.
//  Copyright © 2019 Roberto Vecchio. All rights reserved.
//

//Sviluppare una function C che, dati come parametri di input un array di char e il suo size, determina e restituisce come parametro di output l’array (di size 21) del numero delle occorrenze delle 21 lettere dell’alfabeto italiano (per es. il numero di occorrenze della lettera a è il numero di volte in cui la lettera a compare nel testo).

#include <stdio.h>
#include <string.h>

void lettersOccurence(char *, unsigned long, int [21]);
                      
int main(int argc, const char * argv[]) {
    
    char phrase[100];
    int count[21] = {0};
    int i;
    printf("insert phrase: ");
    fgets(phrase, 4096, stdin);
    
    lettersOccurence(phrase, strlen(phrase), count);
    
    
    for (i = 0; i < 21; i++) {
        printf(" VALORE = %d\n", count[i]);
    }
    
    return 0;
}

void lettersOccurence(char *phrase, unsigned long size, int count[21]){
    int i;
    
    for (i = 0; i < size; i++) {
        
        if (phrase[i] >= 'a' && phrase[i] <= 'i' ) {
            count[phrase[i] - 'a']++;
        }else if (phrase[i] >= 'l' && phrase[i] <= 'v' ) {
            count[phrase[i] - 'c']++;
        }else if (phrase[i] == 'z' ) {
            count[phrase[i] - 'f']++;
        }
    }
}
