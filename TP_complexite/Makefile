CXXFLAGS = -O2 -std=c++14 -Wall -Wextra 

SRC = $(shell find . -name "*.cpp")
BIN = $(SRC:.cpp=.out)

all: $(BIN)

%.out: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $< 

clean:
	rm -f $(BIN)

