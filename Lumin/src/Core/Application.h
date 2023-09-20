#pragma once

namespace Lumin
{
    class Application
    {
    public:
        Application();
        virtual ~Application();
        virtual void run() = 0;
    };
}