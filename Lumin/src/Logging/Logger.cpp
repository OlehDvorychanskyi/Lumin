#include "Logger.h"
#include <iostream>

namespace Lumin
{
    void Logger::log(const std::string& color, const std::string& user, const std::string& message)
    {
        time_t currentTime;
        time(&currentTime);
        struct tm* timeInfo = localtime(&currentTime);
        char timeStr[20];
        strftime(timeStr, sizeof(timeStr), "%Y-%m-%d %H:%M:%S", timeInfo);

        // std::cout << "[" << timeStr << "] [" << color + levelStr + "\x1b[0m" << "] " << color + message + "\x1b[0m" << std::endl;
        std::cout << color << "[" << timeStr << "] [" << user << "] " << message << "\x1b[0m" << '\n';
    }

    void Logger::CoreInfo(const std::string& message)
    {
        log("\x1b[32m", "CORE", message); 
    }

    void Logger::CoreWarning(const std::string& message)
    {
        log("\x1b[33m", "CORE", message);
    }

    void Logger::CoreError(const std::string& message)
    {
        log("\x1b[31m", "CORE", message);
    }

    void Logger::ClientInfo(const std::string& message)
    {
        log("\x1b[32m", "CLIENT", message);
    }

    void Logger::ClientWarning(const std::string& message)
    {
        log("\x1b[33m", "CLIENT", message);
    }
 
    void Logger::ClientError(const std::string& message)
    {
        log("\x1b[31m", "CLIENT", message);
    }
}