cmake_minimum_required(VERSION 3.15)
project(Discord_BotP)
set(CMAKE_PREFIX_PATH "/home/kss418/.vscode/Discord_BotP/vcpkg/installed/x64-linux" CACHE STRING "")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(gumbo-query)
add_executable(Discord_BotP
    main.cpp
    src/Maple_API.cpp
    src/Discord_BOT.cpp
)

target_link_libraries(Discord_BotP
    PRIVATE
        gumbo
        gumboquery
        OpenSSL::SSL
        OpenSSL::Crypto
        cpr::cpr
        dpp::dpp
)

include_directories(${PROJECT_SOURCE_DIR}/src)
find_package(OpenSSL REQUIRED)
find_package(dpp CONFIG REQUIRED)
find_package(cpr CONFIG REQUIRED)