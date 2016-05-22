#include <stdio.h>
int main(){
  //1和0表示真和假

  if(1){
      printf("\n1\n");
   }

  if(0){
     printf("0\n");
  }

  int i = 1033;
  int j = 222;
  if(i>j){
    printf("i>j\n");
    
  }
  int k = i>j;
   printf("%d\n",k);

  if(!0){
   printf("取反");
  }
return 0;
}
