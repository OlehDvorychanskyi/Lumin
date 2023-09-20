#pragma once 

namespace Lumin
{
    class Initializer
    {
    private:
        static bool isInitialize;
    public:
        static void init();
        static void shutdown();
    };
}
