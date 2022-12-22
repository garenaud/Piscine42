#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char buf[32];
int main(int argc, char* argv[]){
    if(argc<2){
		printf("pass argv[1] a number\n");
		return 0;
	}
	int fd = atoi( argv[1] ) - 0x4242;
	int len = 0;
	len = read(fd, buf, 32);
	if(!strcmp("42\n", buf)){
		printf("Bravo ! :)\n");
        printf("\n-----------------------------\n");
		printf("flag42{Th3_Flag_hehe}");
		exit(0);
	}
	printf("Apprenez comment file IO fonctionne sur unix !\n");
	return 0;

}
