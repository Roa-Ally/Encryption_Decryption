# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2023.3.3\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2023.3.3\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Encryption_Decryption

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Encryption_Decryption\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Encryption_Decryption.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Encryption_Decryption.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Encryption_Decryption.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Encryption_Decryption.dir/flags.make

CMakeFiles/Encryption_Decryption.dir/main.c.obj: CMakeFiles/Encryption_Decryption.dir/flags.make
CMakeFiles/Encryption_Decryption.dir/main.c.obj: C:/Encryption_Decryption/main.c
CMakeFiles/Encryption_Decryption.dir/main.c.obj: CMakeFiles/Encryption_Decryption.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Encryption_Decryption\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Encryption_Decryption.dir/main.c.obj"
	"C:\PROGRA~1\JETBRA~1\CLion 2023.3.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Encryption_Decryption.dir/main.c.obj -MF CMakeFiles\Encryption_Decryption.dir\main.c.obj.d -o CMakeFiles\Encryption_Decryption.dir\main.c.obj -c C:\Encryption_Decryption\main.c

CMakeFiles/Encryption_Decryption.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Encryption_Decryption.dir/main.c.i"
	"C:\PROGRA~1\JETBRA~1\CLion 2023.3.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Encryption_Decryption\main.c > CMakeFiles\Encryption_Decryption.dir\main.c.i

CMakeFiles/Encryption_Decryption.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Encryption_Decryption.dir/main.c.s"
	"C:\PROGRA~1\JETBRA~1\CLion 2023.3.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Encryption_Decryption\main.c -o CMakeFiles\Encryption_Decryption.dir\main.c.s

# Object files for target Encryption_Decryption
Encryption_Decryption_OBJECTS = \
"CMakeFiles/Encryption_Decryption.dir/main.c.obj"

# External object files for target Encryption_Decryption
Encryption_Decryption_EXTERNAL_OBJECTS =

Encryption_Decryption.exe: CMakeFiles/Encryption_Decryption.dir/main.c.obj
Encryption_Decryption.exe: CMakeFiles/Encryption_Decryption.dir/build.make
Encryption_Decryption.exe: CMakeFiles/Encryption_Decryption.dir/linkLibs.rsp
Encryption_Decryption.exe: CMakeFiles/Encryption_Decryption.dir/objects1.rsp
Encryption_Decryption.exe: CMakeFiles/Encryption_Decryption.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Encryption_Decryption\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Encryption_Decryption.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Encryption_Decryption.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Encryption_Decryption.dir/build: Encryption_Decryption.exe
.PHONY : CMakeFiles/Encryption_Decryption.dir/build

CMakeFiles/Encryption_Decryption.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Encryption_Decryption.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Encryption_Decryption.dir/clean

CMakeFiles/Encryption_Decryption.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Encryption_Decryption C:\Encryption_Decryption C:\Encryption_Decryption\cmake-build-debug C:\Encryption_Decryption\cmake-build-debug C:\Encryption_Decryption\cmake-build-debug\CMakeFiles\Encryption_Decryption.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Encryption_Decryption.dir/depend

