# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = "C:/Program Files/CMake/bin/cmake.exe"

# The command to remove a file.
RM = "C:/Program Files/CMake/bin/cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:/Users/mateu/OneDrive/Dokumenty/GitHub/Taxi-stats

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:/Users/mateu/OneDrive/Dokumenty/GitHub/Taxi-stats/build

# Include any dependencies generated for this target.
include CMakeFiles/Taxi.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Taxi.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Taxi.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Taxi.dir/flags.make

CMakeFiles/Taxi.dir/main.cpp.obj: CMakeFiles/Taxi.dir/flags.make
CMakeFiles/Taxi.dir/main.cpp.obj: CMakeFiles/Taxi.dir/includes_CXX.rsp
CMakeFiles/Taxi.dir/main.cpp.obj: C:/Users/mateu/OneDrive/Dokumenty/GitHub/Taxi-stats/main.cpp
CMakeFiles/Taxi.dir/main.cpp.obj: CMakeFiles/Taxi.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:/Users/mateu/OneDrive/Dokumenty/GitHub/Taxi-stats/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Taxi.dir/main.cpp.obj"
	C:/Users/mateu/Downloads/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Taxi.dir/main.cpp.obj -MF CMakeFiles/Taxi.dir/main.cpp.obj.d -o CMakeFiles/Taxi.dir/main.cpp.obj -c C:/Users/mateu/OneDrive/Dokumenty/GitHub/Taxi-stats/main.cpp

CMakeFiles/Taxi.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Taxi.dir/main.cpp.i"
	C:/Users/mateu/Downloads/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/mateu/OneDrive/Dokumenty/GitHub/Taxi-stats/main.cpp > CMakeFiles/Taxi.dir/main.cpp.i

CMakeFiles/Taxi.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Taxi.dir/main.cpp.s"
	C:/Users/mateu/Downloads/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/mateu/OneDrive/Dokumenty/GitHub/Taxi-stats/main.cpp -o CMakeFiles/Taxi.dir/main.cpp.s

CMakeFiles/Taxi.dir/src/Taxi.cpp.obj: CMakeFiles/Taxi.dir/flags.make
CMakeFiles/Taxi.dir/src/Taxi.cpp.obj: CMakeFiles/Taxi.dir/includes_CXX.rsp
CMakeFiles/Taxi.dir/src/Taxi.cpp.obj: C:/Users/mateu/OneDrive/Dokumenty/GitHub/Taxi-stats/src/Taxi.cpp
CMakeFiles/Taxi.dir/src/Taxi.cpp.obj: CMakeFiles/Taxi.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:/Users/mateu/OneDrive/Dokumenty/GitHub/Taxi-stats/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Taxi.dir/src/Taxi.cpp.obj"
	C:/Users/mateu/Downloads/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Taxi.dir/src/Taxi.cpp.obj -MF CMakeFiles/Taxi.dir/src/Taxi.cpp.obj.d -o CMakeFiles/Taxi.dir/src/Taxi.cpp.obj -c C:/Users/mateu/OneDrive/Dokumenty/GitHub/Taxi-stats/src/Taxi.cpp

CMakeFiles/Taxi.dir/src/Taxi.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Taxi.dir/src/Taxi.cpp.i"
	C:/Users/mateu/Downloads/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/mateu/OneDrive/Dokumenty/GitHub/Taxi-stats/src/Taxi.cpp > CMakeFiles/Taxi.dir/src/Taxi.cpp.i

CMakeFiles/Taxi.dir/src/Taxi.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Taxi.dir/src/Taxi.cpp.s"
	C:/Users/mateu/Downloads/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/mateu/OneDrive/Dokumenty/GitHub/Taxi-stats/src/Taxi.cpp -o CMakeFiles/Taxi.dir/src/Taxi.cpp.s

# Object files for target Taxi
Taxi_OBJECTS = \
"CMakeFiles/Taxi.dir/main.cpp.obj" \
"CMakeFiles/Taxi.dir/src/Taxi.cpp.obj"

# External object files for target Taxi
Taxi_EXTERNAL_OBJECTS =

Taxi.exe: CMakeFiles/Taxi.dir/main.cpp.obj
Taxi.exe: CMakeFiles/Taxi.dir/src/Taxi.cpp.obj
Taxi.exe: CMakeFiles/Taxi.dir/build.make
Taxi.exe: CMakeFiles/Taxi.dir/linkLibs.rsp
Taxi.exe: CMakeFiles/Taxi.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:/Users/mateu/OneDrive/Dokumenty/GitHub/Taxi-stats/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Taxi.exe"
	"C:/Program Files/CMake/bin/cmake.exe" -E rm -f CMakeFiles/Taxi.dir/objects.a
	C:/Users/mateu/Downloads/MinGW/bin/ar.exe qc CMakeFiles/Taxi.dir/objects.a @CMakeFiles/Taxi.dir/objects1.rsp
	C:/Users/mateu/Downloads/MinGW/bin/g++.exe -g -Wl,--whole-archive CMakeFiles/Taxi.dir/objects.a -Wl,--no-whole-archive -o Taxi.exe -Wl,--out-implib,libTaxi.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/Taxi.dir/linkLibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/Taxi.dir/build: Taxi.exe
.PHONY : CMakeFiles/Taxi.dir/build

CMakeFiles/Taxi.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Taxi.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Taxi.dir/clean

CMakeFiles/Taxi.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" C:/Users/mateu/OneDrive/Dokumenty/GitHub/Taxi-stats C:/Users/mateu/OneDrive/Dokumenty/GitHub/Taxi-stats C:/Users/mateu/OneDrive/Dokumenty/GitHub/Taxi-stats/build C:/Users/mateu/OneDrive/Dokumenty/GitHub/Taxi-stats/build C:/Users/mateu/OneDrive/Dokumenty/GitHub/Taxi-stats/build/CMakeFiles/Taxi.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Taxi.dir/depend

