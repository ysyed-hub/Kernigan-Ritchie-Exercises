//
//  main.c
//  1-15.c
//
//  Created by Yunus Syed on 4/25/20.
//  Copyright © 2020 Yunus Syed. All rights reserved.
//

#include <stdio.h>

int chart(int, int, int);
float convert(int);

int main() {
    
    chart(0, 300, 20);
}

int chart(int lower, int upper, int step) {
    
    int i;
    for (i = lower; i <= upper; i += step) {
        printf("%d: %.3f\n", i, convert(i));
    }
    printf("\n");
    return 0;
}

float convert(int fahr) {
    float celsius;
    celsius = (5.0/9.0) * (fahr - 32);
    return celsius;
}
