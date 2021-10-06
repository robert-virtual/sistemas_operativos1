#include<stdio.h>
#include<unistd.h>

char* sayHi(char name[]){
    
    return name;
}

void main() {
    // array of 2 integers(file descriptor)
    // filer decriptor key to access a 
    // file for read or writting  
    printf("Soy el padre!!!\n");
    int fd[2];

    int res = pipe(fd);

    if (res == -1){
        printf("Error!!!\n");
    }

    int id = fork();
    if(id == 0) { // hijo
        int x;
        printf("ingrese un numero: ");
        scanf("%d",&x);
    }    
}
