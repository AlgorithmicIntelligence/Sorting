/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   heapsort.c
 * Author: gooee
 * 
 * Created on July 16, 2019, 5:58 PM
 */

#include "heapsort.h"

static void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void maxheapify(int* array, int array_size, int index) {
    int max = index;
    int left = 2*index + 1;
    int right = 2*index + 2;
    if(left < array_size && array[max] < array[left])
        max = left;
    if(right < array_size && array[max] < array[right])
        max = right;
    if(max != index) {
        swap(&array[max], &array[index]);
        maxheapify(array, array_size, max);        
    } 
}

void heapsort(int* array, int array_size) {
    int i;
    for(i= array_size/2 - 1; i >= 0; i--) 
        maxheapify(array, array_size, i);
    for(i = array_size-1 ; i>0; i--) {
        swap(&array[0], &array[i]);
        maxheapify(array, i, 0);
    }       
}