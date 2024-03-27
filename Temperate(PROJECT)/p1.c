#include <stdio.h>

main() {
    char alphabet = 'a';  
    int count = 4; 

    do {
        printf("%c ", alphabet);

        alphabet = alphabet + count;

    } while (alphabet <= 'z');  

    printf("%c\n",alphabet);  
}