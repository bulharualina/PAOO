# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/alina/Faculta/PAOO/Tema/Tema_I/PAOO

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alina/Faculta/PAOO/Tema/Tema_I/PAOO/build

# Include any dependencies generated for this target.
include CMakeFiles/doggy.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/doggy.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/doggy.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/doggy.dir/flags.make

CMakeFiles/doggy.dir/src/main.cpp.o: CMakeFiles/doggy.dir/flags.make
CMakeFiles/doggy.dir/src/main.cpp.o: /home/alina/Faculta/PAOO/Tema/Tema_I/PAOO/src/main.cpp
CMakeFiles/doggy.dir/src/main.cpp.o: CMakeFiles/doggy.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/alina/Faculta/PAOO/Tema/Tema_I/PAOO/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/doggy.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/doggy.dir/src/main.cpp.o -MF CMakeFiles/doggy.dir/src/main.cpp.o.d -o CMakeFiles/doggy.dir/src/main.cpp.o -c /home/alina/Faculta/PAOO/Tema/Tema_I/PAOO/src/main.cpp

CMakeFiles/doggy.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/doggy.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alina/Faculta/PAOO/Tema/Tema_I/PAOO/src/main.cpp > CMakeFiles/doggy.dir/src/main.cpp.i

CMakeFiles/doggy.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/doggy.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alina/Faculta/PAOO/Tema/Tema_I/PAOO/src/main.cpp -o CMakeFiles/doggy.dir/src/main.cpp.s

CMakeFiles/doggy.dir/src/Treatment.cpp.o: CMakeFiles/doggy.dir/flags.make
CMakeFiles/doggy.dir/src/Treatment.cpp.o: /home/alina/Faculta/PAOO/Tema/Tema_I/PAOO/src/Treatment.cpp
CMakeFiles/doggy.dir/src/Treatment.cpp.o: CMakeFiles/doggy.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/alina/Faculta/PAOO/Tema/Tema_I/PAOO/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/doggy.dir/src/Treatment.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/doggy.dir/src/Treatment.cpp.o -MF CMakeFiles/doggy.dir/src/Treatment.cpp.o.d -o CMakeFiles/doggy.dir/src/Treatment.cpp.o -c /home/alina/Faculta/PAOO/Tema/Tema_I/PAOO/src/Treatment.cpp

CMakeFiles/doggy.dir/src/Treatment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/doggy.dir/src/Treatment.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alina/Faculta/PAOO/Tema/Tema_I/PAOO/src/Treatment.cpp > CMakeFiles/doggy.dir/src/Treatment.cpp.i

CMakeFiles/doggy.dir/src/Treatment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/doggy.dir/src/Treatment.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alina/Faculta/PAOO/Tema/Tema_I/PAOO/src/Treatment.cpp -o CMakeFiles/doggy.dir/src/Treatment.cpp.s

CMakeFiles/doggy.dir/src/Dog.cpp.o: CMakeFiles/doggy.dir/flags.make
CMakeFiles/doggy.dir/src/Dog.cpp.o: /home/alina/Faculta/PAOO/Tema/Tema_I/PAOO/src/Dog.cpp
CMakeFiles/doggy.dir/src/Dog.cpp.o: CMakeFiles/doggy.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/alina/Faculta/PAOO/Tema/Tema_I/PAOO/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/doggy.dir/src/Dog.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/doggy.dir/src/Dog.cpp.o -MF CMakeFiles/doggy.dir/src/Dog.cpp.o.d -o CMakeFiles/doggy.dir/src/Dog.cpp.o -c /home/alina/Faculta/PAOO/Tema/Tema_I/PAOO/src/Dog.cpp

CMakeFiles/doggy.dir/src/Dog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/doggy.dir/src/Dog.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alina/Faculta/PAOO/Tema/Tema_I/PAOO/src/Dog.cpp > CMakeFiles/doggy.dir/src/Dog.cpp.i

CMakeFiles/doggy.dir/src/Dog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/doggy.dir/src/Dog.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alina/Faculta/PAOO/Tema/Tema_I/PAOO/src/Dog.cpp -o CMakeFiles/doggy.dir/src/Dog.cpp.s

# Object files for target doggy
doggy_OBJECTS = \
"CMakeFiles/doggy.dir/src/main.cpp.o" \
"CMakeFiles/doggy.dir/src/Treatment.cpp.o" \
"CMakeFiles/doggy.dir/src/Dog.cpp.o"

# External object files for target doggy
doggy_EXTERNAL_OBJECTS =

doggy: CMakeFiles/doggy.dir/src/main.cpp.o
doggy: CMakeFiles/doggy.dir/src/Treatment.cpp.o
doggy: CMakeFiles/doggy.dir/src/Dog.cpp.o
doggy: CMakeFiles/doggy.dir/build.make
doggy: CMakeFiles/doggy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/alina/Faculta/PAOO/Tema/Tema_I/PAOO/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable doggy"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/doggy.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/doggy.dir/build: doggy
.PHONY : CMakeFiles/doggy.dir/build

CMakeFiles/doggy.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/doggy.dir/cmake_clean.cmake
.PHONY : CMakeFiles/doggy.dir/clean

CMakeFiles/doggy.dir/depend:
	cd /home/alina/Faculta/PAOO/Tema/Tema_I/PAOO/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alina/Faculta/PAOO/Tema/Tema_I/PAOO /home/alina/Faculta/PAOO/Tema/Tema_I/PAOO /home/alina/Faculta/PAOO/Tema/Tema_I/PAOO/build /home/alina/Faculta/PAOO/Tema/Tema_I/PAOO/build /home/alina/Faculta/PAOO/Tema/Tema_I/PAOO/build/CMakeFiles/doggy.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/doggy.dir/depend

