#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
void main(){

  int id_hijo1, id_hijo2 ,id_hijo3;

  id_hijo1 = fork();

  if( pid_hijo1 == 0){
  
    printf("Soy el hijo 1, Mi padre es= %d, Mi PID= %d\n",getppid(),getpid());
  
    sleep(2);
  
    exit(0);
  }

  id_hijo2 = fork();

  if( id_hijo2 == 0 ){
  
    printf("Soy el hijo 2, Mi padre es= %d, Mi PID= %d\n",getppid(),getpid());
  
    sleep(2);
  
    exit(0);
  }

  id_hijo3 = fork();

  if( id_hijo3 == 0 ){
    
    printf("Soy el hijo 3, Mi padre es= %d, Mi PID= %d\n",getppid(),getpid());
    
    sleep(2);
    
    exit(0);
  }

  printf("Proceso PADRE = %d\n",getppid());

  exit(0);

}