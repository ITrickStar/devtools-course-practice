// Copyright 2022 Miheev Ivan

#include <gtest/gtest.h>

#include "include/DHeap.h"

TEST(miheev_ivan_dheap, default_test) {
  // Arrange & Act

  // Assert
  ASSERT_NO_THROW();
}

TEST(miheev_ivan_dheap, can_call_constructor_with_default_param) {
  // Assert
  ASSERT_NO_THROW(DHeap());
}

TEST(miheev_ivan_dheap, can_call_constructor_with_input_param) {
  // Assert
  ASSERT_NO_THROW(DHeap(5, 2));
}

TEST(miheev_ivan_dheap, can_create_heap_with_wrong_dary) {
  // Assert
  ASSERT_ANY_THROW(DHeap(3, -2));
}

TEST(miheev_ivan_dheap, empty_test) {
  // Arrange & Act
  DHeap hp;
  // Assert
  ASSERT_NO_THROW(hp.isEmpty());
}

TEST(miheev_ivan_dheap, insert_test) {
  // Arrange & Act
  DHeap hp;
  // Assert
  ASSERT_NO_THROW(hp.insert(0));
}

TEST(miheev_ivan_dheap, extract_min_test) {
  // Arrange & Act
  DHeap hp;
  for (int i = 4; i > 0; i--) hp.insert(i);
  // Assert
  ASSERT_EQ(hp.extractMin(), 1);
}
