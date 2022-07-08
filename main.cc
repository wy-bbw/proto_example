#include <iostream>
#include "images.pb.h"

imagebuf::channel createMessage() {
    imagebuf::channel channel;
    channel.set_id(65);
    channel.set_name("foobar");
    channel.set_image("fooooooooooobar");
    return channel;
}

int main() 
{
    imagebuf::channel  mychannel = createMessage();
    //std::cout << "channel id: " << mychannel.id() << std::endl;
    //std::cout << "channel name: " << mychannel.name() << std::endl;
    //std::cout << "channel image: " << mychannel.image() << std::endl;
    mychannel.SerializeToOstream(&std::cout);
}
