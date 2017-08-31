//
//  QuickSort.c
//  AlgorithmDemo
//
//  Created by 刘宇 on 2017/8/30.
//  Copyright © 2017年 刘宇. All rights reserved.
//

#include "QuickSort.h"

void swap(int *i, int *j)
{
    int tmp = *i;
    *i = *j;
    *j = tmp;
}

void quickSort(int *array , int low, int height)
{
    if (low >= height) {
        return;
    }
    int i = low;
    int j = height;
    int key = array[i];
    while (i < j)
    {
        while (i < j && array[j] >= key)
        {
            j--;
        }
        swap(&array[i],&array[j]);

        while (i < j && array[i] <= key) {
            i++;
        }
        swap(&array[i],&array[j]);

    }
    quickSort(array, low, i - 1);
    quickSort(array, i + 1, height);
}

void quickSort2(int array[], int low, int height)
{
    if (low >= height) {
        return;
    }
    int i = low;
    int j = height;
    int key = array[i];
    while (i < j)
    {
        while (i < j && array[j] >= key)
        {
            j--;
        }
        array[i] = array[j];

        while (i < j && array[i] <= key) {
            i++;
        }
        array[j] = array[i];

    }
    array[i] = key;
    quickSort(array, low, i - 1);
    quickSort(array, i + 1, height);
}

