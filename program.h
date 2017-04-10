#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void simple();

// Define *logtype as a pointer to a 'void function(char *)'
typedef void (*logtype)(char *);

// Define struct for passing data
struct params
{
        char *name;
        logtype logbridge;
};

// Use the logtype
void dologging(char *name, logtype logbridge);
void logit(logtype logbridge, const char * message);
void setparams(struct params *config);


#ifdef __cplusplus
}
#endif
