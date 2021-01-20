cmake_minimum_required(VERSION 2.8.0)

## protoc --cpp_out=. seventh.proto

include_directories(.)

add_executable(testSeventh testSeventh.cpp seventh.pb.cc)
target_link_libraries(testSeventh ${protobuf_LIBRARY_NAME})
