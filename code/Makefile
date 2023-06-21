CXX = g++
CXXFLAGS = -std=c++17

# List of source files
SRCS = experimentacion.cpp main.cpp

# Generate the object file names
OBJS = $(SRCS:.cpp=.o)

# Name of the executable
TARGET = main

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
