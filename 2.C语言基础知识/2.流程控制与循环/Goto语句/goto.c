#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i = 0;

	label:printf("%d\n",i);
//	printf("100\n");//在没有判断条件的情况下会无限执行这四组数据
//	printf("101\n");
//	printf("102\n");
//	printf("103\n");

	i++;//i = i+1;
	if (i < 100) {
	    goto label;
	}

	return EXIT_SUCCESS;

}
