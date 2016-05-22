#include<stdio.h>
int  main()
{
 char array[9]={'b','a','n','z','h','e','n','y','u'};
 printf("取数组中第一个元素的值:%c\n",array[0]);
 printf("给数组中第一个元素重新赋值成h\n");
 array[0] = 'h';
 printf("取数组中第一个元素的值:%c\n",array[0]);
 return 0;
}
