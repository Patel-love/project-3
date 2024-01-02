#include <stdio.h>

int main() {
    // ____________Q-1____________
    char ABCD='a';
    do {
        printf("%c\n",ABCD);
        ABCD+=4;
    } while(ABCD<='z');

    // ____________Q-2____________
    int num=80;
   
   int k =20;
   
   int sum;
   for(int i=1; i<num; i++){
       if(i%k==0){
           sum+=i;
       }
   }
   printf("%d\n",sum);
    return 0;
}
