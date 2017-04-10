# include "program.h"

/**
 * dologging takes a function pointer which has been defined by typdef
 */
void dologging(char *name, logtype logbridge)
{
    char str[64];
	sprintf(str, "Name '%s' says 'Hello World' from dologging!", name);
	logbridge(str);
	logit(logbridge, str);
}

/**
 * logit
 * log a message using logbridge
 */
void logit(logtype logbridge, const char *message) {
    const char * label = "logit: ";
    int size = strlen(message) + strlen(label + 1);
    char s[size];
    sprintf(s, "%s%s", label, message);
    logbridge(s);
}
/**
 * setParams takes a struct with a name and a logbridge
 */
void setparams(struct params *config) {
    char *name = config->name;
    logtype logbridge = config->logbridge;
    dologging(name, logbridge);
}




