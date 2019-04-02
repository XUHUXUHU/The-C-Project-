#include <stdio.h>
#include "FileOperateFunction.h"
int main(){
	int a = CountLines("demo.txt");

	printf("The count lines is %d\n",a);
	return 0;
}

