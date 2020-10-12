#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "LongestCommonPrefix.h"
#include "module.h"


int main(int argc, char *argv[]){
    char *s[5] = {"dog","dogl", "dohot"};
    message msg;
    msg.strs = s;
    msg.strsSize = strlen(s);
    LCP_task_entry(0,&msg);
    return 0;
}