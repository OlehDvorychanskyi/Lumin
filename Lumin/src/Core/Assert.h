#pragma once 

#include <Logging/Logger.h>
#include <filesystem>

#define LUMIN_STRINGIFY_MACRO(x) #x

#define LUMIN_INTERNAL_ASSERT_IMPL(type, check, msg, ...) {if(!(check)) { LUMIN##type##ERROR(msg); __debugbreak(); }}
#define LUMIN_INTERNAL_ASSERT_WITH_MSG(type, check, ...) LUMIN_INTERNAL_ASSERT_IMPL(type, check, "Assertion failed: " __VA_ARGS__)
#define LUMIN_INTERNAL_ASSERT_WITH_NO_MSG(type, check)  LUMIN_INTERNAL_ASSERT_IMPL(type, check, "Assertion '" LUMIN_STRINGIFY_MACRO(check) "' failed at " + std::filesystem::path(__FILE__).filename().string() + ":" + std::to_string(__LINE__))

#define LUMIN_ASSERT_GET_MACRO_NAME(arg1, arg2, macro, ...) macro
#define LUMIN_ASSERT_GET_MACRO(...) LUMIN_ASSERT_GET_MACRO_NAME(__VA_ARGS__, LUMIN_INTERNAL_ASSERT_WITH_MSG, LUMIN_INTERNAL_ASSERT_WITH_NO_MSG)

#define LUMIN_CLIENT_ASSERT(...) LUMIN_ASSERT_GET_MACRO(__VA_ARGS__)(_CLIENT_, __VA_ARGS__)
#define LUMIN_CORE_ASSERT(...) LUMIN_ASSERT_GET_MACRO(__VA_ARGS__)(_CORE_, __VA_ARGS__)