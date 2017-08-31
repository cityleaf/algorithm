//
//  InsertSort.c
//  AlgorithmDemo
//
//  Created by 刘宇 on 2017/8/31.
//  Copyright © 2017年 刘宇. All rights reserved.
//

#include "InsertSort.h"

void insertSort(int a[], int length)
{
    int i , j;
    for (i = 1; i < length; i++)
    {
        int key = a[i];
        
        for (j = i - 1; j >= 0; j--)
        {
            if (a[j] > key)
            {
                a[j+1] = a[j];// 当前序列里的数字 > 插入数字，后移
            }
            else {
                break;
            }
        }
        a[j+1] = key; 
    }
}
