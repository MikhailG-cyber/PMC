#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    FILE* ptr;
    char ch;
 
    // Buka file dalam mode baca
    ptr = fopen("file yang ingin dibuka beserta domainnya", "r");
 
    if (NULL == ptr) {
        printf("file tidak bisa dibuka \n");
    }
 
    printf("konten pada file berupa \n");
 
    // Print apa yang tertuls di file
    // Karakter per karakter menggunakan loop.
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
        // Cek karakter apakah tidak EOF.
        // Jika EOF maka stop reading.
    } while (ch != EOF);
 
    // tutup file
    fclose(ptr);
    return 0;
}




