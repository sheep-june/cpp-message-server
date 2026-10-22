#include "message.h"


void set_message_id(Message* msg, int id) {
    msg->message_id = id;
}

void set_message_priority(Message* msg, int priority) {
    msg->priority = priority;
}