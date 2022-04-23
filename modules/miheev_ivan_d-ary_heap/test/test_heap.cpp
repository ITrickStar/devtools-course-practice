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

// Must be false
//TEST(miheev_ivan_dheap, can_create_heap_with_wrong_dary) {
//  // Assert
//  ASSERT_NO_THROW(DHeap(5, -2));
//}


