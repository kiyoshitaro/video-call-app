# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/kiyoshitaro/Downloads/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/kiyoshitaro/Downloads/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/kiyoshitaro/CLionProjects/Bai 3_16"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/kiyoshitaro/CLionProjects/Bai 3_16/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Bai_3_16.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Bai_3_16.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Bai_3_16.dir/flags.make

CMakeFiles/Bai_3_16.dir/main.c.o: CMakeFiles/Bai_3_16.dir/flags.make
CMakeFiles/Bai_3_16.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kiyoshitaro/CLionProjects/Bai 3_16/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Bai_3_16.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Bai_3_16.dir/main.c.o   -c "/home/kiyoshitaro/CLionProjects/Bai 3_16/main.c"

CMakeFiles/Bai_3_16.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Bai_3_16.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/kiyoshitaro/CLionProjects/Bai 3_16/main.c" > CMakeFiles/Bai_3_16.dir/main.c.i

CMakeFiles/Bai_3_16.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Bai_3_16.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/kiyoshitaro/CLionProjects/Bai 3_16/main.c" -o CMakeFiles/Bai_3_16.dir/main.c.s

CMakeFiles/Bai_3_16.dir/main.c.o.requires:

.PHONY : CMakeFiles/Bai_3_16.dir/main.c.o.requires

CMakeFiles/Bai_3_16.dir/main.c.o.provides: CMakeFiles/Bai_3_16.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/Bai_3_16.dir/build.make CMakeFiles/Bai_3_16.dir/main.c.o.provides.build
.PHONY : CMakeFiles/Bai_3_16.dir/main.c.o.provides

CMakeFiles/Bai_3_16.dir/main.c.o.provides.build: CMakeFiles/Bai_3_16.dir/main.c.o


# Object files for target Bai_3_16
Bai_3_16_OBJECTS = \
"CMakeFiles/Bai_3_16.dir/main.c.o"

# External object files for target Bai_3_16
Bai_3_16_EXTERNAL_OBJECTS =

Bai_3_16: CMakeFiles/Bai_3_16.dir/main.c.o
Bai_3_16: CMakeFiles/Bai_3_16.dir/build.make
Bai_3_16: CMakeFiles/Bai_3_16.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/kiyoshitaro/CLionProjects/Bai 3_16/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Bai_3_16"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Bai_3_16.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Bai_3_16.dir/build: Bai_3_16

.PHONY : CMakeFiles/Bai_3_16.dir/build

CMakeFiles/Bai_3_16.dir/requires: CMakeFiles/Bai_3_16.dir/main.c.o.requires

.PHONY : CMakeFiles/Bai_3_16.dir/requires

CMakeFiles/Bai_3_16.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Bai_3_16.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Bai_3_16.dir/clean

CMakeFiles/Bai_3_16.dir/depend:
	cd "/home/kiyoshitaro/CLionProjects/Bai 3_16/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/kiyoshitaro/CLionProjects/Bai 3_16" "/home/kiyoshitaro/CLionProjects/Bai 3_16" "/home/kiyoshitaro/CLionProjects/Bai 3_16/cmake-build-debug" "/home/kiyoshitaro/CLionProjects/Bai 3_16/cmake-build-debug" "/home/kiyoshitaro/CLionProjects/Bai 3_16/cmake-build-debug/CMakeFiles/Bai_3_16.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Bai_3_16.dir/depend

