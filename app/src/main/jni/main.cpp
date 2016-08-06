//
// Created by micth on 2016-08-06.
//

#include "EventLoop.hpp"

void android_main(android_app* pApplication){

    packt::EventLoop lEventLoop(pApplication);
    lEventLoop.run();

}

