#include <stdio.h>
#include <stdlib.h>

//接下来我们来写一个函数,返回值是void类型的,函数的名称是printHelloworld;
void printHelloworld(){
	printf("Hello world\n");
}

//函数传入参数,也可以传入多个参数;
void hello(char * name,int age){
	printf("Hello World %s,your age is%d\n",name,age);
}
/////////////////////////以上两种函数是没有返回值//////////////////////////////

//下面类型的函数需要返回值;
int add(int a,int b){
	return a+b;
}

//main就是一个函数,由系统来执行,函数也可以自定义;
int main(void) {
//printHelloworld();指的就是printf("Hello World\n");        
        printHelloworld();

	hello("jikexueyuan",12);

	int c = add(2,3);
	printf("The result is %d\n",c);
	

	return EXIT_SUCCESS;
}
