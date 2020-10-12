#ifndef __MODULE_H__
#define __MODULE_H__

typedef struct message message;

struct message
{
    int data_length;
    int command_id;
    int module_id;
    char **strs;
    int strsSize;
};

typedef char *(*LCP_handler)(message *msg);

message *module_msg_get(message *msg);
#endif // !__MODULE_H__
