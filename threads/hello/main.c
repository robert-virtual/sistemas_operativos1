#include <stdio.h>
#include <unistd.h>
#include <pthread.h>


// g++
///usr/bin/g++ /usr/share/man/man1/g++.1.gz

// gcc
///usr/bin/gcc /usr/lib/gcc /usr/share/gcc /usr/share/man/man1/gcc.1.gz

//gdb
///usr/share/gdb

void* myfun(void *n){
    for(int i = 0; i < 100;i++)
        printf("%d",n);

}

void* myfun2(){
    for(int i = 0; i < 100;i++)
        printf("-");

}

int main(){

    pthread_t mythreads[3];
    
    printf("antes del hilo\n");
    char mychars[3] = {'+','-','*'};
    for(int i =0;i<3;i++){
        pthread_create(&mythreads[i],NULL,myfun,&i);

    }
    for(int i =0;i<3;i++){
        pthread_join(mythreads[i],NULL);

    }
   
    
    printf("\nfin\n");
    return 0;
}


