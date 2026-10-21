# CMake 최소 요구 버전
cmake_minimum_required(VERSION 3.16)

# 프로젝트 이름: JsonBinaryServer
# 사용 언어: C++
project(JsonBinaryServer LANGUAGES CXX)

# C++17 표준 사용
set(CMAKE_CXX_STANDARD 17)

# C++17을 필수로 요구
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 실행 파일 json_binary_server 생성
# src/main.cpp를 컴파일해서 실행 파일로 만든다
add_executable(json_binary_server
    src/main.cpp
)