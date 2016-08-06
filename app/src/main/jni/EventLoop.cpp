//
// Created by micth on 2016-08-06.
//

#include "EventLoop.hpp"
#include "Log.hpp"

namespace packt{
    EventLoop::EventLoop(android_app *pApplication) :
    mApplication(pApplication)
    { }

    void EventLoop::run() {

        int32_t lResult;
        int32_t lEvents;

        android_poll_source* lSource;
        app_dummy();

        packt::Log::info("Starting event loop");


        while (true){
            while ((lResult = ALooper_pollOnce(-1, NULL, &lEvents, (void**) &lSource)) >= 0){

                if (lSource != NULL){
                    packt::Log::info("Processing an event");
                    lSource->process(mApplication, lSource);
                }
                if (mApplication->destroyRequested){
                    packt::Log::info("Exiting event loop");
                    return;
                }
            }
        }
    }
}