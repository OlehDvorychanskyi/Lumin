#pragma once 

int main();

namespace Lumin
{
    class Initializer
    {
    private:
        static void init();
        static void shutdown();
    
        friend int ::main();
    };
}
