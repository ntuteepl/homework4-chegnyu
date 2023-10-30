#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lover,max=0,maxy,maxx,x=0,y=0,count=0;
    scanf("%d",&lover);
    int pair[lover][lover];

    for(y=0;y<lover;y++)
    {
        for( x=0;x<lover;x++)
        {
          scanf("%d", &pair[y][x]);
        }
    }

while(1)
{


    for(y=0;y<lover;y++)
    {

        for(x=0;x<lover;x++)
        {
          if(pair[y][x]>max)
          {
              max=pair[y][x];
              maxy=y;
              maxx=x;
          }

        }

    }
    printf("boy %d pair with girl %d\n",maxy+1,maxx+1);
    for(int i=0;i<lover;i++)
    {
        pair[i][maxx]=0;
        pair[maxy][i]=0;
    }
    for(int i=0;i<lover;i++)
    {

        for(int j=0;j<lover;j++)
        {
          if(pair[i][j]==0)  count++;
        }


    }
    if(count == lover*lover) break;
    else count=0;
    max=0;
}

}

