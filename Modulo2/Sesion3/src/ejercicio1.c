#include<sys/types.h>						
#include<unistd.h>	
#include<stdio.h>
#include<errno.h>
#include <stdlib.h>



int main(int argc, char *argv[]){
	int aux;
	pid_t var;

	aux=*argv[0];

	var=fork();
	if(var==0){

	}
	if(var>0){
		if(aux%4==0){
			printf("Es divisible entre 4");
		}
	}

}
