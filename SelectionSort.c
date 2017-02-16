#include "SelectionSort.h"
#include <stdlib.h>

int Selection_Sort(int list[], int num)
{
    //��鴫�����
    if(list == NULL || num <= 0)
    {
        return ERROR;
    }

    int     min = 0;
    int     temp = 0;
    //����  ��С����
    for(int i = 0; i < num; ++i)
    {
        min = i;
        for(int j = i; j < num; ++j)
        {
            if(list[min] > list[j])
            {
                min = j;          //�ҵ���Сֵ
            }
        }

        temp = list[i];
        list[i] = list[min];
        list[min] = temp;
    }

    return OK;
}
