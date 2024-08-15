# Define the default target
all: $(patsubst %.c,%,$(wildcard *.c)) $(patsubst %.cpp,%,$(wildcard *.cpp))

# Rule to build C executables
%: %.c
    gcc $< -o $@

# Rule to build C++ executables
%: %.cpp
    g++ $< -o $@

# Clean rule
clean:
    rm -f $(patsubst %.c,%,$(wildcard *.c)) $(patsubst %.cpp,%,$(wildcard *.cpp))
