# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.7.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.7.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/tanner/Desktop/ECE 442/client-application"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/tanner/Desktop/ECE 442/client-application"

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/local/Cellar/cmake/3.7.2/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/local/Cellar/cmake/3.7.2/bin/ccmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start "/Users/tanner/Desktop/ECE 442/client-application/CMakeFiles" "/Users/tanner/Desktop/ECE 442/client-application/CMakeFiles/progress.marks"
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start "/Users/tanner/Desktop/ECE 442/client-application/CMakeFiles" 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named client_application

# Build rule for target.
client_application: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 client_application
.PHONY : client_application

# fast build rule for target.
client_application/fast:
	$(MAKE) -f CMakeFiles/client_application.dir/build.make CMakeFiles/client_application.dir/build
.PHONY : client_application/fast

client.o: client.cpp.o

.PHONY : client.o

# target to build an object file
client.cpp.o:
	$(MAKE) -f CMakeFiles/client_application.dir/build.make CMakeFiles/client_application.dir/client.cpp.o
.PHONY : client.cpp.o

client.i: client.cpp.i

.PHONY : client.i

# target to preprocess a source file
client.cpp.i:
	$(MAKE) -f CMakeFiles/client_application.dir/build.make CMakeFiles/client_application.dir/client.cpp.i
.PHONY : client.cpp.i

client.s: client.cpp.s

.PHONY : client.s

# target to generate assembly for a file
client.cpp.s:
	$(MAKE) -f CMakeFiles/client_application.dir/build.make CMakeFiles/client_application.dir/client.cpp.s
.PHONY : client.cpp.s

fpga.o: fpga.cpp.o

.PHONY : fpga.o

# target to build an object file
fpga.cpp.o:
	$(MAKE) -f CMakeFiles/client_application.dir/build.make CMakeFiles/client_application.dir/fpga.cpp.o
.PHONY : fpga.cpp.o

fpga.i: fpga.cpp.i

.PHONY : fpga.i

# target to preprocess a source file
fpga.cpp.i:
	$(MAKE) -f CMakeFiles/client_application.dir/build.make CMakeFiles/client_application.dir/fpga.cpp.i
.PHONY : fpga.cpp.i

fpga.s: fpga.cpp.s

.PHONY : fpga.s

# target to generate assembly for a file
fpga.cpp.s:
	$(MAKE) -f CMakeFiles/client_application.dir/build.make CMakeFiles/client_application.dir/fpga.cpp.s
.PHONY : fpga.cpp.s

logger.o: logger.cpp.o

.PHONY : logger.o

# target to build an object file
logger.cpp.o:
	$(MAKE) -f CMakeFiles/client_application.dir/build.make CMakeFiles/client_application.dir/logger.cpp.o
.PHONY : logger.cpp.o

logger.i: logger.cpp.i

.PHONY : logger.i

# target to preprocess a source file
logger.cpp.i:
	$(MAKE) -f CMakeFiles/client_application.dir/build.make CMakeFiles/client_application.dir/logger.cpp.i
.PHONY : logger.cpp.i

logger.s: logger.cpp.s

.PHONY : logger.s

# target to generate assembly for a file
logger.cpp.s:
	$(MAKE) -f CMakeFiles/client_application.dir/build.make CMakeFiles/client_application.dir/logger.cpp.s
.PHONY : logger.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/client_application.dir/build.make CMakeFiles/client_application.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/client_application.dir/build.make CMakeFiles/client_application.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/client_application.dir/build.make CMakeFiles/client_application.dir/main.cpp.s
.PHONY : main.cpp.s

preprocessor.o: preprocessor.cpp.o

.PHONY : preprocessor.o

# target to build an object file
preprocessor.cpp.o:
	$(MAKE) -f CMakeFiles/client_application.dir/build.make CMakeFiles/client_application.dir/preprocessor.cpp.o
.PHONY : preprocessor.cpp.o

preprocessor.i: preprocessor.cpp.i

.PHONY : preprocessor.i

# target to preprocess a source file
preprocessor.cpp.i:
	$(MAKE) -f CMakeFiles/client_application.dir/build.make CMakeFiles/client_application.dir/preprocessor.cpp.i
.PHONY : preprocessor.cpp.i

preprocessor.s: preprocessor.cpp.s

.PHONY : preprocessor.s

# target to generate assembly for a file
preprocessor.cpp.s:
	$(MAKE) -f CMakeFiles/client_application.dir/build.make CMakeFiles/client_application.dir/preprocessor.cpp.s
.PHONY : preprocessor.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... client_application"
	@echo "... client.o"
	@echo "... client.i"
	@echo "... client.s"
	@echo "... fpga.o"
	@echo "... fpga.i"
	@echo "... fpga.s"
	@echo "... logger.o"
	@echo "... logger.i"
	@echo "... logger.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... preprocessor.o"
	@echo "... preprocessor.i"
	@echo "... preprocessor.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
