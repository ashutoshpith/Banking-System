# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "U:\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "U:\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = U:\Hatchwin\cpp\BankingSystem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = U:\Hatchwin\cpp\BankingSystem\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BankingSystem.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BankingSystem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BankingSystem.dir/flags.make

CMakeFiles/BankingSystem.dir/main.cpp.obj: CMakeFiles/BankingSystem.dir/flags.make
CMakeFiles/BankingSystem.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=U:\Hatchwin\cpp\BankingSystem\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BankingSystem.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\BankingSystem.dir\main.cpp.obj -c U:\Hatchwin\cpp\BankingSystem\main.cpp

CMakeFiles/BankingSystem.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BankingSystem.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E U:\Hatchwin\cpp\BankingSystem\main.cpp > CMakeFiles\BankingSystem.dir\main.cpp.i

CMakeFiles/BankingSystem.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BankingSystem.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S U:\Hatchwin\cpp\BankingSystem\main.cpp -o CMakeFiles\BankingSystem.dir\main.cpp.s

# Object files for target BankingSystem
BankingSystem_OBJECTS = \
"CMakeFiles/BankingSystem.dir/main.cpp.obj"

# External object files for target BankingSystem
BankingSystem_EXTERNAL_OBJECTS =

BankingSystem.exe: CMakeFiles/BankingSystem.dir/main.cpp.obj
BankingSystem.exe: CMakeFiles/BankingSystem.dir/build.make
BankingSystem.exe: CMakeFiles/BankingSystem.dir/linklibs.rsp
BankingSystem.exe: CMakeFiles/BankingSystem.dir/objects1.rsp
BankingSystem.exe: CMakeFiles/BankingSystem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=U:\Hatchwin\cpp\BankingSystem\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BankingSystem.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BankingSystem.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BankingSystem.dir/build: BankingSystem.exe

.PHONY : CMakeFiles/BankingSystem.dir/build

CMakeFiles/BankingSystem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BankingSystem.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BankingSystem.dir/clean

CMakeFiles/BankingSystem.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" U:\Hatchwin\cpp\BankingSystem U:\Hatchwin\cpp\BankingSystem U:\Hatchwin\cpp\BankingSystem\cmake-build-debug U:\Hatchwin\cpp\BankingSystem\cmake-build-debug U:\Hatchwin\cpp\BankingSystem\cmake-build-debug\CMakeFiles\BankingSystem.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BankingSystem.dir/depend

