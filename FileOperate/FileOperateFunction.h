#include <stdio.h>

//函数功能:读取文本文件中的行数
int CountLines(char fileName[]);

//函数功能:读取文本文件中第n行的数据
char *ReadLine(char fileName[],int n);

//函数功能：删除第n行的数据
void DeleteLineData(char *fileName,int n);

//函数功能：修改某一行的数据
void ChangeLineData(char *filename,int n,char *data);
