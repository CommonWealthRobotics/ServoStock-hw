# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hpham/the-technocopia-project/third-party/free-cad

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hpham/the-technocopia-project/third-party/free-cad-build

# Include any dependencies generated for this target.
include src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/depend.make

# Include the progress variables for this target.
include src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/progress.make

# Include the compile flags for this target's objects.
include src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/flags.make

bin/pivy/__init__.py: /home/hpham/the-technocopia-project/third-party/free-cad/src/3rdParty/Pivy-0.5/__init__.py
	$(CMAKE_COMMAND) -E cmake_progress_report /home/hpham/the-technocopia-project/third-party/free-cad-build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../../../bin/pivy/__init__.py"
	cd /home/hpham/the-technocopia-project/third-party/free-cad-build/src/3rdParty/Pivy-0.5 && /usr/bin/cmake -E copy /home/hpham/the-technocopia-project/third-party/free-cad/src/3rdParty/Pivy-0.5/__init__.py /home/hpham/the-technocopia-project/third-party/free-cad-build/bin/pivy/__init__.py

bin/pivy/coin.py: /home/hpham/the-technocopia-project/third-party/free-cad/src/3rdParty/Pivy-0.5/coin.py
	$(CMAKE_COMMAND) -E cmake_progress_report /home/hpham/the-technocopia-project/third-party/free-cad-build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../../../bin/pivy/coin.py"
	cd /home/hpham/the-technocopia-project/third-party/free-cad-build/src/3rdParty/Pivy-0.5 && /usr/bin/cmake -E copy /home/hpham/the-technocopia-project/third-party/free-cad/src/3rdParty/Pivy-0.5/coin.py /home/hpham/the-technocopia-project/third-party/free-cad-build/bin/pivy/coin.py

bin/pivy/sogui.py: /home/hpham/the-technocopia-project/third-party/free-cad/src/3rdParty/Pivy-0.5/sogui.py
	$(CMAKE_COMMAND) -E cmake_progress_report /home/hpham/the-technocopia-project/third-party/free-cad-build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../../../bin/pivy/sogui.py"
	cd /home/hpham/the-technocopia-project/third-party/free-cad-build/src/3rdParty/Pivy-0.5 && /usr/bin/cmake -E copy /home/hpham/the-technocopia-project/third-party/free-cad/src/3rdParty/Pivy-0.5/sogui.py /home/hpham/the-technocopia-project/third-party/free-cad-build/bin/pivy/sogui.py

src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/coin_wrap.cpp.o: src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/flags.make
src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/coin_wrap.cpp.o: /home/hpham/the-technocopia-project/third-party/free-cad/src/3rdParty/Pivy-0.5/coin_wrap.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/hpham/the-technocopia-project/third-party/free-cad-build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/coin_wrap.cpp.o"
	cd /home/hpham/the-technocopia-project/third-party/free-cad-build/src/3rdParty/Pivy-0.5 && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/coin.dir/coin_wrap.cpp.o -c /home/hpham/the-technocopia-project/third-party/free-cad/src/3rdParty/Pivy-0.5/coin_wrap.cpp

src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/coin_wrap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coin.dir/coin_wrap.cpp.i"
	cd /home/hpham/the-technocopia-project/third-party/free-cad-build/src/3rdParty/Pivy-0.5 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/hpham/the-technocopia-project/third-party/free-cad/src/3rdParty/Pivy-0.5/coin_wrap.cpp > CMakeFiles/coin.dir/coin_wrap.cpp.i

src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/coin_wrap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coin.dir/coin_wrap.cpp.s"
	cd /home/hpham/the-technocopia-project/third-party/free-cad-build/src/3rdParty/Pivy-0.5 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/hpham/the-technocopia-project/third-party/free-cad/src/3rdParty/Pivy-0.5/coin_wrap.cpp -o CMakeFiles/coin.dir/coin_wrap.cpp.s

src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/coin_wrap.cpp.o.requires:
.PHONY : src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/coin_wrap.cpp.o.requires

src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/coin_wrap.cpp.o.provides: src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/coin_wrap.cpp.o.requires
	$(MAKE) -f src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/build.make src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/coin_wrap.cpp.o.provides.build
.PHONY : src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/coin_wrap.cpp.o.provides

src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/coin_wrap.cpp.o.provides.build: src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/coin_wrap.cpp.o

# Object files for target coin
coin_OBJECTS = \
"CMakeFiles/coin.dir/coin_wrap.cpp.o"

# External object files for target coin
coin_EXTERNAL_OBJECTS =

bin/pivy/_coin.so: src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/coin_wrap.cpp.o
bin/pivy/_coin.so: src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/build.make
bin/pivy/_coin.so: /usr/lib/libCoin.so
bin/pivy/_coin.so: /usr/lib/libpython2.7.so
bin/pivy/_coin.so: src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../../bin/pivy/_coin.so"
	cd /home/hpham/the-technocopia-project/third-party/free-cad-build/src/3rdParty/Pivy-0.5 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/coin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/build: bin/pivy/_coin.so
.PHONY : src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/build

src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/requires: src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/coin_wrap.cpp.o.requires
.PHONY : src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/requires

src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/clean:
	cd /home/hpham/the-technocopia-project/third-party/free-cad-build/src/3rdParty/Pivy-0.5 && $(CMAKE_COMMAND) -P CMakeFiles/coin.dir/cmake_clean.cmake
.PHONY : src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/clean

src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/depend: bin/pivy/__init__.py
src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/depend: bin/pivy/coin.py
src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/depend: bin/pivy/sogui.py
	cd /home/hpham/the-technocopia-project/third-party/free-cad-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hpham/the-technocopia-project/third-party/free-cad /home/hpham/the-technocopia-project/third-party/free-cad/src/3rdParty/Pivy-0.5 /home/hpham/the-technocopia-project/third-party/free-cad-build /home/hpham/the-technocopia-project/third-party/free-cad-build/src/3rdParty/Pivy-0.5 /home/hpham/the-technocopia-project/third-party/free-cad-build/src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/3rdParty/Pivy-0.5/CMakeFiles/coin.dir/depend

