#ifndef INTEGRATION_H
#define INTEGRATION_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <math.h>

extern "C" {
#include "myfunc.h"
}

TEST(integrationTest, rootsFibonachi) {
    double *roots = realQuadraticRoots(fibonachi(1), -4, 4);
    ASSERT_EQ(roots[0], 2);
    ASSERT_EQ(roots[1], 2);
}



#endif // INTEGRATION_H
