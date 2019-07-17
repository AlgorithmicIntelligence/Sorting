/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   heapsort.h
 * Author: gooee
 *
 * Created on July 16, 2019, 5:58 PM
 */

#ifndef HEAPSORT_H
#define HEAPSORT_H

//void swap(int *x, int *y);
void maxheapify(int* array, int array_size, int root);
void heapsort(int* array, int array_size);

#endif /* HEAPSORT_H */
