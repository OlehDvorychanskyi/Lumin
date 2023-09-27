#pragma once

// For adding main like a friend function to Application class
int main();

namespace Lumin
{
    class Application
    { 
    public:
        Application();
        ~Application();
    private:
        void run();
        
        // To add main() ability to call private function run()
        friend int ::main();
    };

    Application* createApplication();
}