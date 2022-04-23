// C++ program for 

#pragma once

#include<stdio.h>
#include<stdlib.h>

// minimal element in the root of the heap
class DHeap {
 private:
  int d; // Sets the d-ary of the heap

 public:
  int capacity;  // Number of nodes in the heap
  int size; // Number of existing heap nodes
  double* heaparr; // the array on which the heap is built

  DHeap() : capacity(1), size(0), d(2), heaparr(nullptr) {}  // Default constructor
  DHeap(int _capacity, int _d) : capacity(_capacity), size(0), d(_d) {
    if (d < 2) throw "d-ary of the heap can't be less then 2";
    heaparr = new double[capacity];
  }
  DHeap(const DHeap& hp) : capacity(hp.capacity + d), size(hp.size), d(hp.d), heaparr(hp.heaparr) {
    heaparr = (double*)realloc(heaparr, capacity);
  }

  bool isEmpty() { return size == 0; }
  bool isFull() { return size == capacity; }
  void insert(double n);
};
