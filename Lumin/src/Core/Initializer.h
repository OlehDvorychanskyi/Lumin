#pragma once 

namespace Lumin
{
    class Initializer
    {
    private:
        static void init();
        static void shutdown();

        friend class Application;
    };
}
