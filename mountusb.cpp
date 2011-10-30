#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
int main(int argc, char *argv[]){
	printf("USB zariadenie - ");
	printf(argv[1]);
	printf("\n");
	printf("Pozicia mount - ");
        printf(argv[2]);
        printf("\n");	
	char sys_text[100];
        memset(&sys_text[0], 0, sizeof(sys_text));
        strcpy(sys_text,"sudo mkdir ");
	strcat(sys_text,argv[2]);
	system(sys_text);
  	memset(&sys_text[0], 0, sizeof(sys_text));       
	strcpy(sys_text,"sudo mount -t vfat ");
	strcat(sys_text,argv[1]);
	strcat(sys_text," ");
	strcat(sys_text,argv[2]);
	strcat (sys_text," -o uid=1000,gid=1000,utf8,dmask=027,fmask=137");
  	system(sys_text);	
//	system("sudo mount -t vfat /dev/sda1 /media/usb -o uid=1000,gid=1000,utf8,dmask=027,fmask=137");
	printf("Zariadenie uspesne montnute\n");
	return 0;
}
