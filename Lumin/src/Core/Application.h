#pragma once
#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <memory>

// For adding main like a friend function to Application class
int main();

namespace Lumin
{
    class Application
    { 
    private: 
        static Application* m_instance;
        sf::Event m_event;
        std::unique_ptr<sf::RenderWindow> m_window;
    public:
        Application();
        ~Application() = default;

        void close();

        static Application& getInstance() { return *m_instance; }
        sf::RenderWindow& getWindow() { return *m_window; }
    private:
        void run();
        
        // To add main() ability to call private function run()
        friend int ::main();
    };

    Application* createApplication();
}