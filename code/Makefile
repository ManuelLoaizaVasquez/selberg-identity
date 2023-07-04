CXX = g++
CXXFLAGS = -std=c++17

# Lista de archivos fuente
SRCS = experimentacion.cpp main.cpp

# Nombres de los archivos de objetos
OBJS = $(SRCS:.cpp=.o)

# Nombre del ejecutable
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
