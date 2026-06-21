// WAP TO CHECK ANAGRAM STRING .
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};
    int i, flag = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Check length first
    if(strlen(str1) != strlen(str2)) {
        printf("Not Anagram");
        return 0;
    }

    // Count frequency of first string
    for(i = 0; str1[i] != '\0'; i++) {
        freq[(int)str1[i]]++;
    }

    // Subtract frequency using second string
    for(i = 0; str2[i] != '\0'; i++) {
        freq[(int)str2[i]]--;
    }

    // Check if all frequencies are zero
    for(i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Strings are Anagram");
    else
        printf("Strings are Not Anagram");

    return 0;
}