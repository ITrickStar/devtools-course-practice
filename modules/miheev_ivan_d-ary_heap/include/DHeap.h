// C++ program for 

#pragma once

#define INT_MAX 2147483647

// Structure of a heap node
struct DHeapNode {
  int val; // value of the node
  DHeapNode(int _val = INT_MAX) : val(_val) {} // Function to create a new minHeapNode
};

// minimal element in the root of the heap
class DHeap {
 private:
  int d; // Sets the d-ary of the heap

 public:
  int size; // Number of existing heap nodes
  DHeapNode* heaparr; // the array on which the heap is built

  DHeap() : size(0), d(2), heaparr(nullptr) {}  // Default constructor
  DHeap(int _size, int _d) : size(_size) , d(_d) {
    if (d < 2) throw "d-ary of the heap can't be less then 2";
    heaparr = new DHeapNode[size];
  }
  
};
