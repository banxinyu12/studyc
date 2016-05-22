#include <stdio.h>
#include <stdlib.h>

int main(int argc,char ** argv) {

//获取第一个参数;
//	printf("Arguments count %d\n",argc);
//	printf("First argument value is %s\n",argv[0]);

//写一个循环获取所有参数;
	int i
	for(i=0;i<argc;i++){
		printf("Arg index:%d,arg value:%s\n",i,argv[i]);
	}





	return EXIT_SUCCESS;
}
