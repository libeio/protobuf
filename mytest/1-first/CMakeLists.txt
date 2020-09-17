cmake_minimum_required(VERSION 2.8.0)

## protoc --cpp_out=. addressbook.proto

include_directories(.)

message("sub directory=" ${protobuf_LIBRARY_NAME})

add_executable(test test.cpp addressbook.pb.cc)
target_link_libraries(test ${protobuf_LIBRARY_NAME})