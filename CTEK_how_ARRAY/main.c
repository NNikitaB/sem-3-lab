#include "STACK_how_ARRAY_H.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{

    char c='7';
    stack *v=NULL;   //   ���������� ���� ��� ���� ����� &(������ ������ ,�� �� ����� ���������
    v=stack_init(1);
    stackput(v,&c,1);
    char mm;
    stackout(v,&mm,1);

      printf("Hello world!\n%c",mm);
    return 0;
}
