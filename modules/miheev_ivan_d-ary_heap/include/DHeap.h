// Copyright 2022 Miheev Ivan
#ifndef MODULES_MIHEEV_IVAN_D_ARY_HEAP_INCLUDE_DHEAP_H_
#define MODULES_MIHEEV_IVAN_D_ARY_HEAP_INCLUDE_DHEAP_H_

#include <stdlib.h>
#include <algorithm>
#include <vector>

// minimal element in the root of the heap
class DHeap {
 private:
  int d;  // Sets the d-ary of the heap

 public:
  size_t capacity;  // Number of nodes in the heap
  size_t size;      // Number of existing heap nodes
  std::vector <double> heaparr;  // the array on which the heap is built

  DHeap() : capacity(1), size(0), d(2) {}  // Default constructor
  DHeap(int _capacity, int _d) :
    capacity(_capacity),
    size(0), d(_d),
    heaparr(_capacity) {
    if (d < 2) throw "d-ary of the heap can't be less then 2";
  }
  DHeap(const DHeap& hp) :
    capacity(hp.capacity),
    size(hp.size),
    d(hp.d),
    heaparr(hp.heaparr) {}

  double extractMin();
  bool isEmpty() { return size == 0; }
  bool isFull() { return size == capacity; }
  void insert(double n);
  void heapify(int idx);
  void deheapify(int idx);
  void decreaseValue(int pos, int val);
};

#endif  // MODULES_MIHEEV_IVAN_D_ARY_HEAP_INCLUDE_DHEAP_H_
