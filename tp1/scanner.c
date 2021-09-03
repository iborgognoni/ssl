#include "scanner.h"

int get_token(char* buffer){

    buffer[0] = '\0';
    char c;
    int i = 0;
    c = getchar();
    if(isspace(c)){
        do{c = getchar();}while(isspace(c));
    }
    if(c == ','){
        buffer[0] = ',';
        buffer[1] = '\0';
        return COMA;
    }
    if(c == EOF){
        buffer[0] = '\0';
        return FDT;
    }
    else
    {
        while((c != ',') && (c != EOF) && (!isspace(c))){
            buffer[i] = c;
            c = getchar();
            i++;
        }

        buffer[i] = '\0';
        ungetc(c, stdin);
        return CADENA;  
    }
}