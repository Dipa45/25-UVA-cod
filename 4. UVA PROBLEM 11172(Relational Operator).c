#include<stdio.h>
int main()
{

    int t,a,b,i;
    scanf("%d\n",&t);
    for(i=0;i<t;i++){
        scanf("%d%d",&a,&b);
        if(a>b)printf(">\n");
        else if(a<b)printf("<\n");
         else if(a==b)printf("=\n");
    }
    return 0;
}
