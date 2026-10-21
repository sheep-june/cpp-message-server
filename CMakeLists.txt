
cmake_minimum_required(VERSION 3.16)

# C와 C++를 사용하는 프로젝트
project(JsonBinaryServer LANGUAGES C CXX)

# C++17 사용
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# C언어로 작성한 메시지 라이브러리
add_library(message
    src/message.c
)

# 헤더 파일 검색 경로
target_include_directories(message PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# C++ 실행 파일
add_executable(json_binary_server
    src/main.cpp
)

# 실행 파일과 C 라이브러리 연결
target_link_libraries(json_binary_server PRIVATE
    message
)
