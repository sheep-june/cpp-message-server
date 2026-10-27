
#ifndef MESSAGE_H
#define MESSAGE_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    int message_id;
    char type[16];
    int priority;
    char payload[128];
} Message;

void set_message_id(Message* msg, int id);
void set_message_priority(Message* msg, int priority);
void set_message_type(Message* msg, const char* type);
void set_message_payload(Message* msg, const char* payload);

#ifdef __cplusplus
}
#endif

#endif
