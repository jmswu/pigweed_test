#include <cstdio>
#include <cstdlib>
#include "pw_log/log.h"

int main()
{

    std::printf("Hello world\n");

    PW_LOG_INFO("Hello world from pigweed...");

    return EXIT_SUCCESS;
}