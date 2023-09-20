#pragma once 
#include <fstream>

namespace Lumin
{
    class Logger
    {
    private:
        static void log(const std::string& color, const std::string& user, const std::string& message);
    public:
        static void CoreInfo(const std::string& message);
        static void CoreWarning(const std::string& message);
        static void CoreError(const std::string& message);
    
        static void ClientInfo(const std::string& message);
        static void ClientWarning(const std::string& message);
        static void ClientError(const std::string& message);
    };
}

#define LUMIN_CORE_LOG(...) ::Lumin::Logger::CoreInfo(__VA_ARGS__)
#define LUMIN_CORE_WARNING(...) ::Lumin::Logger::CoreWarning(__VA_ARGS__)
#define LUMIN_CORE_ERROR(...) ::Lumin::Logger::CoreError(__VA_ARGS__)

#define LUMIN_CLIENT_LOG(...) ::Lumin::Logger::ClientInfo(__VA_ARGS__)
#define LUMIN_CLIENT_WARNING(...) ::Lumin::Logger::ClientWarning(__VA_ARGS__)
#define LUMIN_CLIENT_ERROR(...) ::Lumin::Logger::ClientError(__VA_ARGS__)
