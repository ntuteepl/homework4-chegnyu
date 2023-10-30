#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c=2;
    scanf("%d", &n);
    int i,a[n];

    for (i=0;i<n;i++){

        scanf("%d", &a[i]);

        for (c = 2;c<a[i];c++){
            if (a[i]%c == 0){

                printf("NO ");
                break;
            }
        }
        if (c == a[i]){

        printf("YES ");
        }
    }

    return 0;

}
