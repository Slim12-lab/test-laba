#include "fibonachi_test.h"
#include "integration_test.h"
#include "realQuadraticRoots_test.h"

#include <gtest/gtest.h>

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
