#include <iostream>
#include "message.h"

int main() {
    Message msg{};

    set_message_id(&msg, 1001);

    std::cout << "Message ID: " << msg.message_id << std::endl;

    set_message_priority(&msg, 5);

    std::cout << "Priority: " << msg.priority << std::endl;

    return 0;
}
