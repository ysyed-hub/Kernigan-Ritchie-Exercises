//
//  main.c
//  1-14
//
//  Created by Yunus Syed on 4/24/20.
//  Copyright © 2020 Yunus Syed. All rights reserved.
//

#include <stdio.h>

int main() {

    int c, nc, i, max, j;
    int array[256];
    
    
    max = nc = 0;
    for (i = 0; i < 256; i++)
        array[i] = 0;
    
    while ((c = getchar()) != EOF) {
        array[c]++;
    }
    
    
    for (j = 0; j < 256; j++) {
        if (array[j] > 0) {
            printf("%c: ", j);
            
            for (i = 0; i < array[j]; i++) {
                printf("%d", array[j]);
            }
            printf("\n");
        }
   }
        
        
        printf("\n");
    }
