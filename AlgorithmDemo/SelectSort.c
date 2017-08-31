//
//  SelectSort.c
//  AlgorithmDemo
//
//  Created by 刘宇 on 2017/8/31.
//  Copyright © 2017年 刘宇. All rights reserved.
//

#include "SelectSort.h"

void SelectSort(int a[], int startIndex, int len)
{
    if (startIndex >= len)
    {
        return;
    }
    
    for (int i = 0; i < len-1; i++)
    {
        int tmp ;
        int minIndex = i;
        for (int j = i+1; j < len; j++)
        {
            if (a[minIndex] < a[j])
            {
                continue;
            }
            minIndex = j;
        }
        tmp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = tmp;
    }

}
