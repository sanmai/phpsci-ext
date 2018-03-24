/*
  +----------------------------------------------------------------------+
  | PHP Version 7 | PHPSci                                               |
  +----------------------------------------------------------------------+
  | Copyright (c) 2018 Henrique Borba                                    |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: Henrique Borba <henrique.borba.dev@gmail.com>                |
  +----------------------------------------------------------------------+
*/

#ifndef PHPSCI_EXT_CARRAY_H
#define PHPSCI_EXT_CARRAY_H

#include "../phpsci.h"

typedef struct CArray {
    double *** array3d;
    double **  array2d;
    double *   array1d;
    double     array0d;
} CArray;

typedef struct MemoryPointer {
    int uuid;
} MemoryPointer;

void carray_to_array(CArray carray, zval * rtn_array);
void carray_init(int rows, int cols, MemoryPointer * ptr);
void array_to_carray_ptr(MemoryPointer * ptr, zval * inarray, int * rows, int * cols);
CArray ptr_to_carray(MemoryPointer * ptr);
#endif //PHPSCI_EXT_CARRAY_H
