#include <stdio.h>
#include <stdlib.h>

int main()
{
    int account[6][3]={{123,456,9000},{456,789,5000},{789,888,6000},{336,558,10000},{775,666,12000},{566,221,7000}};
    int z,num,password;
    scanf("%d", &z);
    for (int k=0;k<z;k++){
        scanf("%d%d",&num,&password);
    for(int i=0;i<=6;i++){
        if(account[i][0]==num && account[i][1]==password){
            printf("%d\n",account[i][2]);
            break;
            }
        else if(account[i][0]==num && account[i][1]!=password){
            printf("error");
            break;
        }
    if (i==6){
            printf("error");
            break;
    }
    }
}
}
