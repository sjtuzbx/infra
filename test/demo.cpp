#include <iostream>
#include "../app.hpp"

class hello_world : public infra::app {
public:
    hello_world(int argc, char **argv)
        :app(argc, argv) {
    
    }

    void run() override {
        std::cout << "Hello world" << std::endl;
    }
};

LAUNCH_APP(hello_world)