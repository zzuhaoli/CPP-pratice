# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/build

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/source/boss.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/source/boss.cpp.o: ../source/boss.cpp
CMakeFiles/main.dir/source/boss.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/source/boss.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/source/boss.cpp.o -MF CMakeFiles/main.dir/source/boss.cpp.o.d -o CMakeFiles/main.dir/source/boss.cpp.o -c /mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/source/boss.cpp

CMakeFiles/main.dir/source/boss.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/source/boss.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/source/boss.cpp > CMakeFiles/main.dir/source/boss.cpp.i

CMakeFiles/main.dir/source/boss.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/source/boss.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/source/boss.cpp -o CMakeFiles/main.dir/source/boss.cpp.s

CMakeFiles/main.dir/source/employee.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/source/employee.cpp.o: ../source/employee.cpp
CMakeFiles/main.dir/source/employee.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.dir/source/employee.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/source/employee.cpp.o -MF CMakeFiles/main.dir/source/employee.cpp.o.d -o CMakeFiles/main.dir/source/employee.cpp.o -c /mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/source/employee.cpp

CMakeFiles/main.dir/source/employee.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/source/employee.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/source/employee.cpp > CMakeFiles/main.dir/source/employee.cpp.i

CMakeFiles/main.dir/source/employee.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/source/employee.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/source/employee.cpp -o CMakeFiles/main.dir/source/employee.cpp.s

CMakeFiles/main.dir/source/main.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/source/main.cpp.o: ../source/main.cpp
CMakeFiles/main.dir/source/main.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.dir/source/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/source/main.cpp.o -MF CMakeFiles/main.dir/source/main.cpp.o.d -o CMakeFiles/main.dir/source/main.cpp.o -c /mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/source/main.cpp

CMakeFiles/main.dir/source/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/source/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/source/main.cpp > CMakeFiles/main.dir/source/main.cpp.i

CMakeFiles/main.dir/source/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/source/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/source/main.cpp -o CMakeFiles/main.dir/source/main.cpp.s

CMakeFiles/main.dir/source/manager.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/source/manager.cpp.o: ../source/manager.cpp
CMakeFiles/main.dir/source/manager.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.dir/source/manager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/source/manager.cpp.o -MF CMakeFiles/main.dir/source/manager.cpp.o.d -o CMakeFiles/main.dir/source/manager.cpp.o -c /mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/source/manager.cpp

CMakeFiles/main.dir/source/manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/source/manager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/source/manager.cpp > CMakeFiles/main.dir/source/manager.cpp.i

CMakeFiles/main.dir/source/manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/source/manager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/source/manager.cpp -o CMakeFiles/main.dir/source/manager.cpp.s

CMakeFiles/main.dir/source/manger.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/source/manger.cpp.o: ../source/manger.cpp
CMakeFiles/main.dir/source/manger.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/main.dir/source/manger.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/source/manger.cpp.o -MF CMakeFiles/main.dir/source/manger.cpp.o.d -o CMakeFiles/main.dir/source/manger.cpp.o -c /mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/source/manger.cpp

CMakeFiles/main.dir/source/manger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/source/manger.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/source/manger.cpp > CMakeFiles/main.dir/source/manger.cpp.i

CMakeFiles/main.dir/source/manger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/source/manger.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/source/manger.cpp -o CMakeFiles/main.dir/source/manger.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/source/boss.cpp.o" \
"CMakeFiles/main.dir/source/employee.cpp.o" \
"CMakeFiles/main.dir/source/main.cpp.o" \
"CMakeFiles/main.dir/source/manager.cpp.o" \
"CMakeFiles/main.dir/source/manger.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

../main: CMakeFiles/main.dir/source/boss.cpp.o
../main: CMakeFiles/main.dir/source/employee.cpp.o
../main: CMakeFiles/main.dir/source/main.cpp.o
../main: CMakeFiles/main.dir/source/manager.cpp.o
../main: CMakeFiles/main.dir/source/manger.cpp.o
../main: CMakeFiles/main.dir/build.make
../main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable ../main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: ../main
.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject /mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject /mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/build /mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/build /mnt/c/Users/lhaza/Desktop/train_cpp/SmallProject/build/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend

