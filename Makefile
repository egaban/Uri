SRCS = $(wildcard */*.cpp)
BIN_NAMES = $(SRCS:%.cpp=%.out)
CXXC = g++
CXX_FLAGS = -Wall -std=c++11
COMPILE = $(CXXC) $(CXX_FLAGS) $^ -o $@

all: $(BIN_NAMES)
%.out: %.cpp
	$(COMPILE)
clean:
	rm -v *.out
