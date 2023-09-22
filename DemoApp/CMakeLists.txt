cmake_minimum_required(VERSION 3.0)
project(DemoApp LANGUAGES CXX)

file(GLOB DEMO_APP_SOURCES
    src/*.cpp
)

file(GLOB DEMO_APP_HEADERS
    src/*.h
)

add_executable(${PROJECT_NAME}
    ${DEMO_APP_SOURCES}   
    ${DEMO_APP_HEADERS} 
)

target_link_libraries(${PROJECT_NAME}
    Lumin
)

if (WIN32 AND BUILD_SHARED_LIBS)
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_RUNTIME_DLLS:${PROJECT_NAME}> $<TARGET_FILE_DIR:${PROJECT_NAME}> COMMAND_EXPAND_LISTS)
endif()

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_definitions(${PROJECT_NAME} PRIVATE -DDEBUG_MODE)
else()
    target_compile_definitions(${PROJECT_NAME} PRIVATE -DRELEASE_MODE)
    set_target_properties(${PROJECT_NAME} PROPERTIES WIN32_EXECUTABLE TRUE)
endif()

install(TARGETS ${PROJECT_NAME})