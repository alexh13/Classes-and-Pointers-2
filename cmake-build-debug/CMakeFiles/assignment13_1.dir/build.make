# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/alexhughes/CLionProjects/assignment13_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/alexhughes/CLionProjects/assignment13_1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/assignment13_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/assignment13_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/assignment13_1.dir/flags.make

CMakeFiles/assignment13_1.dir/client.cpp.o: CMakeFiles/assignment13_1.dir/flags.make
CMakeFiles/assignment13_1.dir/client.cpp.o: ../client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexhughes/CLionProjects/assignment13_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/assignment13_1.dir/client.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/assignment13_1.dir/client.cpp.o -c /Users/alexhughes/CLionProjects/assignment13_1/client.cpp

CMakeFiles/assignment13_1.dir/client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/assignment13_1.dir/client.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexhughes/CLionProjects/assignment13_1/client.cpp > CMakeFiles/assignment13_1.dir/client.cpp.i

CMakeFiles/assignment13_1.dir/client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/assignment13_1.dir/client.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexhughes/CLionProjects/assignment13_1/client.cpp -o CMakeFiles/assignment13_1.dir/client.cpp.s

CMakeFiles/assignment13_1.dir/mystring.cpp.o: CMakeFiles/assignment13_1.dir/flags.make
CMakeFiles/assignment13_1.dir/mystring.cpp.o: ../mystring.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexhughes/CLionProjects/assignment13_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/assignment13_1.dir/mystring.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/assignment13_1.dir/mystring.cpp.o -c /Users/alexhughes/CLionProjects/assignment13_1/mystring.cpp

CMakeFiles/assignment13_1.dir/mystring.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/assignment13_1.dir/mystring.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexhughes/CLionProjects/assignment13_1/mystring.cpp > CMakeFiles/assignment13_1.dir/mystring.cpp.i

CMakeFiles/assignment13_1.dir/mystring.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/assignment13_1.dir/mystring.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexhughes/CLionProjects/assignment13_1/mystring.cpp -o CMakeFiles/assignment13_1.dir/mystring.cpp.s

# Object files for target assignment13_1
assignment13_1_OBJECTS = \
"CMakeFiles/assignment13_1.dir/client.cpp.o" \
"CMakeFiles/assignment13_1.dir/mystring.cpp.o"

# External object files for target assignment13_1
assignment13_1_EXTERNAL_OBJECTS =

assignment13_1: CMakeFiles/assignment13_1.dir/client.cpp.o
assignment13_1: CMakeFiles/assignment13_1.dir/mystring.cpp.o
assignment13_1: CMakeFiles/assignment13_1.dir/build.make
assignment13_1: CMakeFiles/assignment13_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/alexhughes/CLionProjects/assignment13_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable assignment13_1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/assignment13_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/assignment13_1.dir/build: assignment13_1

.PHONY : CMakeFiles/assignment13_1.dir/build

CMakeFiles/assignment13_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/assignment13_1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/assignment13_1.dir/clean

CMakeFiles/assignment13_1.dir/depend:
	cd /Users/alexhughes/CLionProjects/assignment13_1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/alexhughes/CLionProjects/assignment13_1 /Users/alexhughes/CLionProjects/assignment13_1 /Users/alexhughes/CLionProjects/assignment13_1/cmake-build-debug /Users/alexhughes/CLionProjects/assignment13_1/cmake-build-debug /Users/alexhughes/CLionProjects/assignment13_1/cmake-build-debug/CMakeFiles/assignment13_1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/assignment13_1.dir/depend

