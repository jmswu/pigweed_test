#include <stdio.h>
#include <stdarg.h>

void pw_log_string_HandleMessageVaList(int level,
                                       unsigned int flags,
                                       const char *module_name,
                                       const char *file_name,
                                       int line_number,
                                       const char *message,
                                       va_list args)
{
    printf("Entering custom pw_log_string backend...\n");
    printf("%d\n", level);
    printf("%u\n", flags);
    printf("%s\n", module_name);
    printf("%s\n", file_name);
    printf("%d\n", line_number);
    printf("%s\n", message);
    if (args)
    { /* Do something with your args here... */
    }
    printf("Exiting custom pw_log_string backend...\n\n");
}