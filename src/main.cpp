#include <iostream>
#include "message.h"

int main() {
    Message msg{};

    set_message_id(&msg, 1001);

    std::cout << "Message ID: " << msg.message_id << std::endl;

    set_message_priority(&msg, 5);

    std::cout << "Priority: " << msg.priority << std::endl;

    //set_message_type(&msg, "ABCDEFGHIJKLMNOPQRST");
    
    set_message_type(&msg, "TASK");

    std::cout<< "Message Type: " <<msg.type<<std::endl;

    set_message_payload(&msg, "Hello C++ Server");

    std::cout<<"Message Payload: "<<msg.payload<<std::endl;

    return 0;
}
