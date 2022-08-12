#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int m,n,dr1,dr2;
   float x,y,fr1,fr2;
   scanf("%d %d",&m,&n);
   scanf("%f %f",&x,&y);
       dr1 = m+n;
       dr2 = m-n;
       fr1 = x+y;
       fr2 = x-y;

   printf("%d %d\n",dr1,dr2);
   printf("%0.1f %0.1f\n",fr1,fr2);

    return 0;
}
