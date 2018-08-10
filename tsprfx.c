#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main( int argc, char **argv ) {

    char    *buffer;
    size_t  n = 1024;
    buffer = malloc(n);

    if(argc >= 2) {
        time_t timer;
        char tsbuffer[26];
        struct tm* tm_info;
        time(&timer);

        while(getline(&buffer, &n, stdin) != -1)
        {
            time(&timer);
            tm_info = localtime(&timer);
            strftime(tsbuffer, 26, "%Y-%m-%d %H:%M:%S", tm_info);
            printf("%s %s",tsbuffer,buffer);
        }
    } else {

        while(getline(&buffer, &n, stdin) != -1)
        {
            printf("%d %s",(int)time(NULL),buffer);
        }
    }
    return 1;
}

