cmake_minimum_required(VERSION 3.10)
project(timkaLovesGaySex)

set(CMAKE_GENERATOR "Ninja")

add_subdirectory(thirdparty)

file(GLOB DLL_SRC CONFIGURE_DEPENDS "src/*.hpp" "src/*.cpp" "src/*.c" "src/*.h")

add_library(TimkaLovesGaySex SHARED 
    ${DLL_SRC}
)

target_link_libraries(TimkaLovesGaySex liblua_static)

add_executable(Injector 
    "injector/main.cpp"
)