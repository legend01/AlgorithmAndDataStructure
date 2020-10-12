#ifndef __LONGEST_COMMON_PREFIX_H__
#define __LONGEST_COMMON_PREFIX_H__
#include "module.h"
#include <stdio.h>
#define NULL 0


char *longestCommonPrefix(char ** strs, int strsSize);
char *longestCommonPrefix_Simple(char **strs, int strsSize);

void LCP_task_entry(int arg_exe, message *pmsg);
#endif // __LONGEST_COMMON_PREFIX_H__