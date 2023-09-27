#pragma once

// For adding main like a friend function to Application class
int main();

namespace Lumin
{
    class Application
    { 
    private: 
        static Application* m_instance; 
    public:
        Application();
        ~Application();

        void close();

        static Application& getInstance() { return *m_instance; }
    private:
        void run();
        
        // To add main() ability to call private function run()
        friend int ::main();
    };

    Application* createApplication();
}