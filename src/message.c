#include "message.h"
#include <string.h>

void set_message_id(Message* msg, int id) {
    msg->message_id = id;
}

void set_message_priority(Message* msg, int priority) {
    msg->priority = priority;
}

static void copy_string(char* destination, size_t capacity, const char* source){
    if (capacity == 0) {
        return;
    }
    
    size_t length = strlen(source);

    if(length>=capacity){
        length=capacity-1;
    }

    memcpy(destination,source,length);

    destination[length] = '\0';
}

void set_message_type(Message* msg, const char* type) {
    copy_string(msg->type,sizeof(msg->type),type);

}

void set_message_payload(Message* msg, const char* payload){
    copy_string(msg->payload,sizeof(msg->payload),payload);
}

