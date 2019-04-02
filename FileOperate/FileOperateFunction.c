#include <stdio.h>
#include "FileOperateFunction.h"
#include <string.h>
#include <stdlib.h>

int CountLines(char fileName[]){
	FILE *fp;
	
	if((fp = fopen(fileName,"r"))==NULL){
		printf("Failure to open %s\n",fileName);
		exit(0);
	}
	int line = 0;
	while(!feof(fp)){
		if(fgetc(fp) == '\n'){
			line ++;
		}
	}

	fclose(fp);
	return line;
}

char *ReadLine(char fileName[],int n){
	int lines = 0;
	char *temp;
	
}
