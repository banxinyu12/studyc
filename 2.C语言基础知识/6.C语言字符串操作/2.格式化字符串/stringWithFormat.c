#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {

	char * str = "Item";
	int a = 100;
	float b = 3.14;

	char dist[100];
	memset(dist,0,100);

//sprintf指的是，字符串输出(string printf)的缩写,在这里指的是我们把一个格式化的数据输出到字符串里面来；
//通过这种方式我们能连接任意类型的数据,操作和prinft一样；
	sprintf(dist,"%s %d,MATH_PI=%.2f",str,a,b);

	puts(dist);


//分解格式化字符串；

//	char * str = "Item 100";
//	char buf[10];
//	memset(buf,0,10);
//	int a;
//	sscanf(str,"%4s %d",buf,&a);
//
//	printf("String is %s,and int value is %d\n",buf,a);


