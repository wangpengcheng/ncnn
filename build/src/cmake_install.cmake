# Install script for directory: /home/wangpengcheng/ncnn/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/wangpengcheng/ncnn/build/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/wangpengcheng/ncnn/build/src/libncnn.a")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/home/wangpengcheng/ncnn/src/allocator.h"
    "/home/wangpengcheng/ncnn/src/blob.h"
    "/home/wangpengcheng/ncnn/src/command.h"
    "/home/wangpengcheng/ncnn/src/cpu.h"
    "/home/wangpengcheng/ncnn/src/gpu.h"
    "/home/wangpengcheng/ncnn/src/layer.h"
    "/home/wangpengcheng/ncnn/src/layer_type.h"
    "/home/wangpengcheng/ncnn/src/mat.h"
    "/home/wangpengcheng/ncnn/src/modelbin.h"
    "/home/wangpengcheng/ncnn/src/net.h"
    "/home/wangpengcheng/ncnn/src/opencv.h"
    "/home/wangpengcheng/ncnn/src/option.h"
    "/home/wangpengcheng/ncnn/src/paramdict.h"
    "/home/wangpengcheng/ncnn/src/pipeline.h"
    "/home/wangpengcheng/ncnn/src/benchmark.h"
    "/home/wangpengcheng/ncnn/build/src/layer_type_enum.h"
    "/home/wangpengcheng/ncnn/build/src/platform.h"
    )
endif()

