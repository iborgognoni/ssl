#include "scanner.h"

int main(){

    char *nombre[] = {"Fin de Texto", "Separador", "Cadena"};
    char buffer[128];
    int tok;
    
    tok = get_token(buffer);
    while(tok != FDT){
        printf("%s: ", nombre[tok]);
        printf("%s \n", buffer);
        tok = get_token(buffer);
    }

    return 0;
}