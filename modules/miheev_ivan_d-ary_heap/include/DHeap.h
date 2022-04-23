// C++ program for 

#pragma once

// Structure of a min heap node
struct DHeapNode {
  int val; // value of the node
  DHeapNode(int _val) : val(_val) {} // Function to create a new minHeapNode
};

// minimal element in the root of the heap
class DHeap {
 private:
  int d; // Sets the d-ary of minHeap Heaparr

 public:
  int size; // Number of existing heap nodes
  DHeapNode** heaparr; // the array on which the heap is built

  DHeap() : d(2), size(0), heaparr(nullptr) {} // Default constructor
};
