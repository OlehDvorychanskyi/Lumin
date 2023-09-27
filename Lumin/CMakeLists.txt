cmake_minimum_required(VERSION 3.0)
project(Lumin LANGUAGES CXX)

include(FetchContent)
FetchContent_Declare(${PROJECT_NAME}
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.x)
FetchContent_MakeAvailable(${PROJECT_NAME})

file(GLOB LUMIN_SOURCES
    src/Graphics/*.cpp
    src/Logging/*.cpp
    src/Core/*.cpp
    src/Scene/*.cpp
)

add_library(${PROJECT_NAME}
    ${LUMIN_SOURCES} 
)

target_include_directories(${PROJECT_NAME} 
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src 
)

target_link_libraries(${PROJECT_NAME}
    sfml-graphics
    sfml-window
    sfml-system
)