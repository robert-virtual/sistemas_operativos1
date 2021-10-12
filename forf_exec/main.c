#include <stdio.h>
#include <dirent.h>
    // char* path = "."; // DIRECTORIO  ACTAUL🤑


int main(){

    //struc DIR
    char* path = "."; // desde virtual box seria: 

    DIR* dir = opendir("."); // . = path, .= directorio actual 

    if(dir == NULL){
        return 1;
    }

    // file or folder
    struct dirent* entity;

    entity = readdir(dir); 

    printf("DIRECTORIO  ACTAUL🤑");

    while(entity != NULL){
        printf("%s\n", entity->d_name);
        entity = readdir(dir);
    }


    closedir(dir);

    return 0;
}