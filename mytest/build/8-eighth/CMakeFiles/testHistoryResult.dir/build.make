# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/cmake3_15/bin/cmake

# The command to remove a file.
RM = /usr/local/cmake3_15/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gitfork/protobuf/mytest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gitfork/protobuf/mytest/build

# Include any dependencies generated for this target.
include 8-eighth/CMakeFiles/testHistoryResult.dir/depend.make

# Include the progress variables for this target.
include 8-eighth/CMakeFiles/testHistoryResult.dir/progress.make

# Include the compile flags for this target's objects.
include 8-eighth/CMakeFiles/testHistoryResult.dir/flags.make

8-eighth/CMakeFiles/testHistoryResult.dir/testHistoryResult.cpp.o: 8-eighth/CMakeFiles/testHistoryResult.dir/flags.make
8-eighth/CMakeFiles/testHistoryResult.dir/testHistoryResult.cpp.o: ../8-eighth/testHistoryResult.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gitfork/protobuf/mytest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object 8-eighth/CMakeFiles/testHistoryResult.dir/testHistoryResult.cpp.o"
	cd /home/gitfork/protobuf/mytest/build/8-eighth && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testHistoryResult.dir/testHistoryResult.cpp.o -c /home/gitfork/protobuf/mytest/8-eighth/testHistoryResult.cpp

8-eighth/CMakeFiles/testHistoryResult.dir/testHistoryResult.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testHistoryResult.dir/testHistoryResult.cpp.i"
	cd /home/gitfork/protobuf/mytest/build/8-eighth && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gitfork/protobuf/mytest/8-eighth/testHistoryResult.cpp > CMakeFiles/testHistoryResult.dir/testHistoryResult.cpp.i

8-eighth/CMakeFiles/testHistoryResult.dir/testHistoryResult.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testHistoryResult.dir/testHistoryResult.cpp.s"
	cd /home/gitfork/protobuf/mytest/build/8-eighth && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gitfork/protobuf/mytest/8-eighth/testHistoryResult.cpp -o CMakeFiles/testHistoryResult.dir/testHistoryResult.cpp.s

8-eighth/CMakeFiles/testHistoryResult.dir/eighth.pb.cc.o: 8-eighth/CMakeFiles/testHistoryResult.dir/flags.make
8-eighth/CMakeFiles/testHistoryResult.dir/eighth.pb.cc.o: ../8-eighth/eighth.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gitfork/protobuf/mytest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object 8-eighth/CMakeFiles/testHistoryResult.dir/eighth.pb.cc.o"
	cd /home/gitfork/protobuf/mytest/build/8-eighth && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testHistoryResult.dir/eighth.pb.cc.o -c /home/gitfork/protobuf/mytest/8-eighth/eighth.pb.cc

8-eighth/CMakeFiles/testHistoryResult.dir/eighth.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testHistoryResult.dir/eighth.pb.cc.i"
	cd /home/gitfork/protobuf/mytest/build/8-eighth && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gitfork/protobuf/mytest/8-eighth/eighth.pb.cc > CMakeFiles/testHistoryResult.dir/eighth.pb.cc.i

8-eighth/CMakeFiles/testHistoryResult.dir/eighth.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testHistoryResult.dir/eighth.pb.cc.s"
	cd /home/gitfork/protobuf/mytest/build/8-eighth && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gitfork/protobuf/mytest/8-eighth/eighth.pb.cc -o CMakeFiles/testHistoryResult.dir/eighth.pb.cc.s

# Object files for target testHistoryResult
testHistoryResult_OBJECTS = \
"CMakeFiles/testHistoryResult.dir/testHistoryResult.cpp.o" \
"CMakeFiles/testHistoryResult.dir/eighth.pb.cc.o"

# External object files for target testHistoryResult
testHistoryResult_EXTERNAL_OBJECTS =

8-eighth/testHistoryResult: 8-eighth/CMakeFiles/testHistoryResult.dir/testHistoryResult.cpp.o
8-eighth/testHistoryResult: 8-eighth/CMakeFiles/testHistoryResult.dir/eighth.pb.cc.o
8-eighth/testHistoryResult: 8-eighth/CMakeFiles/testHistoryResult.dir/build.make
8-eighth/testHistoryResult: 8-eighth/CMakeFiles/testHistoryResult.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gitfork/protobuf/mytest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable testHistoryResult"
	cd /home/gitfork/protobuf/mytest/build/8-eighth && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testHistoryResult.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
8-eighth/CMakeFiles/testHistoryResult.dir/build: 8-eighth/testHistoryResult

.PHONY : 8-eighth/CMakeFiles/testHistoryResult.dir/build

8-eighth/CMakeFiles/testHistoryResult.dir/clean:
	cd /home/gitfork/protobuf/mytest/build/8-eighth && $(CMAKE_COMMAND) -P CMakeFiles/testHistoryResult.dir/cmake_clean.cmake
.PHONY : 8-eighth/CMakeFiles/testHistoryResult.dir/clean

8-eighth/CMakeFiles/testHistoryResult.dir/depend:
	cd /home/gitfork/protobuf/mytest/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gitfork/protobuf/mytest /home/gitfork/protobuf/mytest/8-eighth /home/gitfork/protobuf/mytest/build /home/gitfork/protobuf/mytest/build/8-eighth /home/gitfork/protobuf/mytest/build/8-eighth/CMakeFiles/testHistoryResult.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : 8-eighth/CMakeFiles/testHistoryResult.dir/depend

