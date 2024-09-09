#include <stdio.h>
#include <assert.h>
#include "Soundex.h"

int main() {
    const char *name = "Smith";
    char soundex[5]; // Buffer for Soundex code (4 characters + null terminator)

    generateSoundex(name, soundex);
    printf("Soundex of %s is %s\n", name, soundex);
}


    
