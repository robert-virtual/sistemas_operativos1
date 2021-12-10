#include <stdlib.h>
#include <stdio.h>


FILE* file; 


int main(){
    file = fopen("./hola.txt","w");
    int i = 0;
    char letra = 'a';
    while( i < 26){
        fprintf(file,"%c\n",letra);
        i++;
        letra++; 
    }
    fclose(file);
    return 0;
}