#pragma once 

namespace Lumin
{
    class Initializer
    {
    private:
        static bool isInitialize;
        static void init();
        static void shutdown();

        friend class Application;
    };
}
