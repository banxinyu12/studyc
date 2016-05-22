#include "hello.h"
#include <stdio.h>

//现在写的文件是全局可见的文件,如果想私有此文件的话,需加入static(静止的)关键字例;
static void sayHi(char * name){
	printf("Hi %s\n",name);
}

void sayHello(char * name){
	printf("Hello %s\n",name);

	sayHi(name);
}



