#pragma once

#include "include/DHeap.h"

template <class T>
void swap(T& a, T& b) {
  T c(a);
  a = b;
  b = c;
}

void DHeap::insert(double n = 0) {
  if (this->isFull() || this->isEmpty()) {
    capacity += d;
    heaparr = (double*)realloc(heaparr, capacity * sizeof(double));
  }

  heaparr[size++] = n;
  int par, curr = size;
  do {
    par = (curr - 2) / d;
    if (heaparr[par] > n) {
      swap(heaparr[par], heaparr[curr]);
      curr = par;
    } else
      break;
  } while (par != 0);
}
