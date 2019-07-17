/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mergesort.h
 * Author: gooee
 *
 * Created on July 16, 2019, 4:36 PM
 */

#ifndef MERGESORT_H
#define MERGESORT_H

#include <stdlib.h>
#include <string.h>


void merge(int* array, int left, int mid, int right);
void mergesort(int* array, int left, int right);

#endif /* MERGESORT_H */
