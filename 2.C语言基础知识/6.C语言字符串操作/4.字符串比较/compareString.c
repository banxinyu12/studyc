#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {

	char * str = "Hello";
	char * str1 = "Hello";
	char str2[]= "Hello";



//两个相同值的字符串所在的地址一样,字符串和字符数组所在的位置不同;
//	printf("pointer str %p,pointer str1 %p,pointer str2%p\n",str,str1,str2);

//这种比较只是比较的地址;
//	printf("Result is%d\n",str==str2);

//如何比较字符数组我们用函数strcmp;
	int result = strcmp(str,str2);
	
	if (result==0) {
	puts("Two string is equal");
	}else{
	puts("Two string not equal");
	}







	return EXIT_SUCCESS;
}
