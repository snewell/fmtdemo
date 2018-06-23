cmake_minimum_required(VERSION 3.5)
cmake_policy(VERSION 3.5)

project("fmtdemo"
    LANGUAGES
        CXX
)

find_package(fmt REQUIRED)

add_executable(fmtdemo
    fmtdemo.cpp
)
target_link_libraries(fmtdemo
    PRIVATE fmt::fmt
)

