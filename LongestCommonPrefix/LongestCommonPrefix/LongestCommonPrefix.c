#include "LongestCommonPrefix.h"
#include "module.h"

static void longestCommonPrefix_package(message *msg);
static void longestCommonPrefix_Simple_package(message *msg);

static const LCP_handler handlers[] = {
    longestCommonPrefix_package,longestCommonPrefix_Simple_package
};

void LCP_task_entry(int arg_exe, message *pmsg){
    handlers[arg_exe](pmsg);
}
static void longestCommonPrefix_package(message *msg){
    char *buf = {0};
    buf = longestCommonPrefix(msg->strs, msg->strsSize);
    printf("[INFO]%s\n", buf);
    buf = NULL;
}
static void longestCommonPrefix_Simple_package(message *msg){
    char *buf = {0};
    buf = longestCommonPrefix_Simple(msg->strs, msg->strsSize);
    printf("[INFO]%s\n", buf);
    buf = NULL;
}
char* longestCommonPrefix(char ** strs, int strsSize) {
    int n = strsSize;
    if (n==0) return "";
    int length = strlen(strs[0]) + 1;
    char *tmp = (char *)malloc(sizeof(char)*length);
    char *res = (char *)malloc(sizeof(char)*length);
    int k = 0;
    strcpy(tmp,strs[1]);
    for (int i = 1; i < n; i++)
    {
        int m = strlen(strs[i]) <strlen(tmp)?strlen(strs[i]) : strlen(tmp);
        for (int j = 0; j < m; j++)
        {
            if(tmp[j] == strs[i][j]){
                res[k] = tmp[j];
                k++;
            }else{
                break; /* 只要有一个字符不匹配，终止此次字符比较 */
            }
        }
        if(0 == strlen(res)){
            return "";
        }else{
            res[k] = '\0'; /* 字符最后一位增加结束符 */
            strcpy(tmp, res);
            k = 0;
        }
    }
    return tmp;
}

char *longestCommonPrefix_Simple(char **strs, int strsSize)
{
    if (strsSize == 0)//输入可能为空，如果答案消耗时间很短的话，很有可能输入的是空字符
    {
        return "";
    }       
    char *str = (char*)calloc(128, sizeof(char));//分配128个字节的内存，来存储公共前缀
    for (int i = 0,j; i < strlen(*strs); i++)//外循环，以第一个字符串的长度为循环次数，因为最长公共前缀的长度小于等于它
    {
        for (j = 0; j < strsSize - 1; j++)//内循环，以字符串个数为循环次数，减1的原因是因为循环内有j+1，不减的话，会发生内存越界
        {
            if(strs[j][i] != strs[j+1][i])//如果下一个字符串的i位不等于当前字符串的i位，说明循环结束，i-1位是最长公共前缀的最后一个字符
            {               
                return str;
            }                      
        }
        str[i] = strs[j][i];//一次内循环结束，说明当前字符这一轮判断通过了，将通过的字符存入str   
    }        
    return str;
}