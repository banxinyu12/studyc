
/*
加法	   减法	乘法	除法	求余数
数学	    +-	×	÷	无
C语言	+-	*	/	%
*/

#include <stdio.h>
int main()
{ 
    //加减乘除 + - * /
    int a=12;
    int b=100;
    float c=8.5;
    
    int m=a+b;
    float n=b*c;
    double p=a/c;
    int q=b%a;
    
   // printf("m=%d, n=%f, p=%lf, q=%d\n", m, n, p, q);
	
    //简写形式 += -= *= /=
    int a1 = 1;
    //a1 = a1+9;
    a1+=9;
    printf("a1=%d",a1);
    
    //逻辑运算符 ! || && (并且)
    int a2 = 10;
    int b2 = 1;
    int c2 = 100;
    if(a2>b2 && a2<c2) //所有条件都成立才是真(正确的)
    {
      printf("a2>b2 并且 a2<c2\n");
    }

    if(a2>b2||a2>c2) //只要满足一个条件就是真(正确的)
    {  
     printf("a2>b2 或者 a2>c2\n");
    }

    if(a2 != b2){ //不等于就是真!=
      printf("不等于\n");
    } 
    
    if(1 == 1){
    }

    if(!(a2<b2)) { 
     printf("a2 > b2会输出!\n");
    }
    
    //自增自减 前自增(先增加再赋值)后自增(先赋值再增加)
    int i = 10;
    printf("---%d\n",i++); //输出10 ++ ,11

    printf("---%d\n",i);
   return 0;
}
