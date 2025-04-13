#include <cstdio>
#include <cstdlib>
#include "pw_log/log.h"

#define PW_LOG_MODULE_NAME "TEST_LOG"

int main()
{

    std::printf("Hello world\n");

    PW_LOG_INFO("Hello world from pigweed...");

    return EXIT_SUCCESS;
}