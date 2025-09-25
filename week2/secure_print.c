#include <stdio.h>
void main(int argc, char **argv){
    // Safe code
    printf("%s\n", argv[1]);
    // Vuln code
    printf(argv[1]);
}