#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>
#include <ctype.h> 



FILE* file; /*recurso compartido*/ 
sem_t sem;

char letra = 'a';

void* padre(){
     /*
    padre
    */
    for(int i = 0;i < 13;i++){
        sem_wait(&sem);
        printf("padre escribiendo... %c\n",letra);
        fprintf(file,"%c\n",letra);
        letra++;
        sem_post(&sem);
    }
}

void* hijo(){
     /*
    hijo
    */
    for(int i = 0;i < 13;i++){
        sem_wait(&sem); /*espera*/
        printf("hijo escribiendo... %c\n",toupper(letra));
        fprintf(file,"%c\n",toupper(letra));
        letra++;
        sem_post(&sem);
    }
}

int main(){
    /*
    intro
    */

    /*
    main
    */
    sem_init(&sem,0,1);
    file = fopen("./abc.txt","w");

    pthread_t thread1;
    pthread_t thread2;

    pthread_create(&thread2,NULL,&padre,NULL);
    pthread_create(&thread1,NULL,&hijo,NULL);

    pthread_join(thread2,NULL);
    pthread_join(thread1,NULL);

    sem_destroy(&sem);
    fclose(file);

    return 0;
}
// -pthread


/*
ejercicio 2
keren Castellanos- intro
david Quezada - main
Roberto castillo- padre
oscar martinez- hijo
*/
/*
ejercicio 1
Dorian Zelaya - intro
michael Osorio -  creacion del hilo (thread) 
amy garrido- funcion
*/