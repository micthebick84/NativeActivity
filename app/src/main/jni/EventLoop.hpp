//
// Created by micth on 2016-08-06.
//

#ifndef NATIVEACTIVITY_EVENTLOOP_HPP
#define NATIVEACTIVITY_EVENTLOOP_HPP

#include "Types.hpp"
#include "android_native_app_glue.h"

namespace packt{

    class EventLoop {

    public:
        EventLoop(android_app* pApplication);

        void run();

    private:
        android_app* mApplication;
    };
}


#endif //NATIVEACTIVITY_EVENTLOOP_HPP
