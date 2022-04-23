// Copyright 2022 Miheev Ivan

#include <gtest/gtest.h>

#include "include/DHeap.h"

TEST(miheev_ivan_dheap,
     can_create_dheap_with_default_param) {
  ASSERT_NO_THROW(DHeap());
}
