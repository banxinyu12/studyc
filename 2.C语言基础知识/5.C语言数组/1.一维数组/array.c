#include <stdio.h>
#include <stdlib.h>
//为了更加标准使用int_32
#include <stdint.h>


int main(void) {
//定义一个数组；
//为数组定义长度len=10,此时可以将［］里的长度空间改为len;
//	int32_t len = 10;

//如果想定义一个int类型的数组可以写int arr[10],10是为这个数组分配多少个空间；
//	int32_t arr[len];//arr[0]访问数组第一个元素;

//我们所创建的数组的那块内存有可能被其它程序所使用过，由于Ｃ语言直接拿来使用不做任何处理，所以说直接分配的内存里面可能有各种各样的值,因为这些值是不可预期的；
//若果想把这些值清零我们需要写个循环；
//	int a;
//	for(a=0;a<len;a++){
//	    arr[a]=0;
//	}

//在写for循环时不可以写for(int i=0;i<int;i==)这个语法在gcc中是错误的，必须先定义i变量；这是因为gcc基于c89标准，换成C99标准就可以在for循环内定义i变量了；
//	int32_t i;
//	for( i=0 ; i<len;i++){
//	    printf("index %d,and value is %d\n",i,arr[i]);
//	}

//如果在想创建一个数组的时候就对它初始化例；
//新建一个数组我们不指定他的长度由后面到数据对它进行初始化；	
	int arr[] = {1,2,5,7,3,8};
	int i;
	for(i=0;i<6;i++){
	    printf("%d\n",arr[i]);
	}




	return EXIT_SUCCESS;
}
