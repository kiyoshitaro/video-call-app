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
CMAKE_SOURCE_DIR = /home/kiyoshitaro/CLionProjects/THDC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kiyoshitaro/CLionProjects/THDC/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/THDC.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/THDC.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/THDC.dir/flags.make

CMakeFiles/THDC.dir/main.c.o: CMakeFiles/THDC.dir/flags.make
CMakeFiles/THDC.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kiyoshitaro/CLionProjects/THDC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/THDC.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/THDC.dir/main.c.o   -c /home/kiyoshitaro/CLionProjects/THDC/main.c

CMakeFiles/THDC.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/THDC.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kiyoshitaro/CLionProjects/THDC/main.c > CMakeFiles/THDC.dir/main.c.i

CMakeFiles/THDC.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/THDC.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kiyoshitaro/CLionProjects/THDC/main.c -o CMakeFiles/THDC.dir/main.c.s

CMakeFiles/THDC.dir/main.c.o.requires:

.PHONY : CMakeFiles/THDC.dir/main.c.o.requires

CMakeFiles/THDC.dir/main.c.o.provides: CMakeFiles/THDC.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/THDC.dir/build.make CMakeFiles/THDC.dir/main.c.o.provides.build
.PHONY : CMakeFiles/THDC.dir/main.c.o.provides

CMakeFiles/THDC.dir/main.c.o.provides.build: CMakeFiles/THDC.dir/main.c.o


# Object files for target THDC
THDC_OBJECTS = \
"CMakeFiles/THDC.dir/main.c.o"

# External object files for target THDC
THDC_EXTERNAL_OBJECTS =

THDC: CMakeFiles/THDC.dir/main.c.o
THDC: CMakeFiles/THDC.dir/build.make
THDC: CMakeFiles/THDC.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kiyoshitaro/CLionProjects/THDC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable THDC"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/THDC.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/THDC.dir/build: THDC

.PHONY : CMakeFiles/THDC.dir/build

CMakeFiles/THDC.dir/requires: CMakeFiles/THDC.dir/main.c.o.requires

.PHONY : CMakeFiles/THDC.dir/requires

CMakeFiles/THDC.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/THDC.dir/cmake_clean.cmake
.PHONY : CMakeFiles/THDC.dir/clean

CMakeFiles/THDC.dir/depend:
	cd /home/kiyoshitaro/CLionProjects/THDC/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kiyoshitaro/CLionProjects/THDC /home/kiyoshitaro/CLionProjects/THDC /home/kiyoshitaro/CLionProjects/THDC/cmake-build-debug /home/kiyoshitaro/CLionProjects/THDC/cmake-build-debug /home/kiyoshitaro/CLionProjects/THDC/cmake-build-debug/CMakeFiles/THDC.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/THDC.dir/depend

