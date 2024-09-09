#include <stdio.h>
#include <assert.h>
#include "Soundex.h"

// Function to test the generateSoundex function
void testGenerateSoundex(const char *input, const char *expected) {
    char result[5]; // Buffer to store the generated Soundex code
    generateSoundex(input, result);
    assert(strcmp(result, expected) == 0);
    printf("Input: %s, Expected: %s, Result: %s\n", input, expected, result);
}

int main() {
    // Test cases
    testGenerateSoundex("Smith", "S530");
    testGenerateSoundex("Robert", "R163");
    testGenerateSoundex("Johnson", "J525");
    testGenerateSoundex("Jackson", "J252");
    testGenerateSoundex("William", "W452");
    testGenerateSoundex("Hannah", "H520");
    testGenerateSoundex("Miller", "M460");

    // Edge cases
    testGenerateSoundex("A", "A000"); // Single character input
    testGenerateSoundex("", "0000");  // Empty input
    testGenerateSoundex("Aa", "A000"); // Case-insensitive input
    testGenerateSoundex("Bobby", "B010"); // Names with mixed letters

    printf("All tests passed!\n");
    return 0;
}
