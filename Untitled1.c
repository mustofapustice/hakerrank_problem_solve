#include <stdio.h>
#define MAX_LEN 100

int main() {
    char ch;
    char s[MAX_LEN];
    int i;
    scanf("%c",&ch);
   for(i=0;i<MAX_LEN;i++){
       scanf("%c",&s[i]);
   }
   printf("%c",ch);
   for(i=0;i<MAX_LEN;i++){
       printf("%c",s[i]);
   }


    return 0;
}
