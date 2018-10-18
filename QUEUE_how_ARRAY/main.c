#include <stdio.h>
#include <stdlib.h>
#include"RING_QUEUE_how_ARRAY.h"
int main()
{
    queue *s;
    s=queue_init(1);
    unsigned char i=0;
    while(!queuefull(s))
        {queueput(s,&i,1);++i;}

    while(!queueemply(s))
        {queueout(s,&i,1);printf("%u: ",i);}
    printf("Hello world!\n");
    return 0;
}
