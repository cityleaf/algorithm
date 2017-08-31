//
//  QuickSort.m
//  OC_algorithmDemo
//
//  Created by 刘宇 on 2017/8/31.
//  Copyright © 2017年 刘宇. All rights reserved.
//

#import "QuickSort.h"

@implementation QuickSort

- (NSArray<NSNumber *>*)startRun
{
   return [self sortWithArray:[NSMutableArray arrayWithArray:self.array] leftIndex:0 rightIndex:self.array.count - 1];
}

- (NSArray<NSNumber *>*)sortWithArray:(NSMutableArray<NSNumber*>*)array leftIndex:(NSInteger)leftIndex rightIndex:(NSInteger)rightIndex
{
    if (leftIndex > rightIndex) {
        return array;
    }
    
    NSInteger key = array[leftIndex].integerValue;
    NSInteger i = leftIndex;
    NSInteger j = rightIndex;
    
    while (i < j) {
        
        while (i < j && key >= array[j].integerValue) {
            j--;
        }
        [array exchangeObjectAtIndex:i withObjectAtIndex:j];
        
        while (i < j && key <= array[i].integerValue) {
            i++;
        }
        [array exchangeObjectAtIndex:i withObjectAtIndex:j];
    }
    [self sortWithArray:array leftIndex:leftIndex rightIndex:i - 1];
    [self sortWithArray:array leftIndex:i + 1 rightIndex:rightIndex];
    return array;
}

@end
