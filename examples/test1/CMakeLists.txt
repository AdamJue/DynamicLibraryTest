cmake_minimum_required(VERSION 3.8)

project(simpleDll VERSION 1.0.0 LANGUAGES CXX)

set(SHARED_LIBRARY_NAME "${CMAKE_INSTALL_PREFIX}/${CMAKE_SHARED_LIBRARY_PREFIX}${PROJECT_NAME}${CMAKE_SHARED_LIBRARY_SUFFIX}")

add_library(${PROJECT_NAME} SHARED
    dllmain.cpp
    stu.cpp
    stu.h
)

#target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)

if (NOT CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(${PROJECT_NAME}  PUBLIC "-fpic")
endif()

target_include_directories(${PROJECT_NAME}  PUBLIC "$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>")

set_target_properties(${PROJECT_NAME}  PROPERTIES
        WINDOWS_EXPORT_ALL_SYMBOLS "YES"
        VERSION "${PROJECT_VERSION}"
        SOVERSION "${PROJECT_VERSION}"
        LIBRARY_OUTPUT_DIRECTORY "${LIBRARY_OUTPUT_PATH}"
)