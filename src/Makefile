# Компилатор
CXX = g++

# Флагове
CXXFLAGS = -std=c++17 -Wall -Wextra

# Файлове
SRC = main.cpp task.cpp TaskManager.cpp
OBJ = $(SRC:.cpp=.o)

# Име на програмата
TARGET = taskmanager

# Основна команда
all: $(TARGET)

# Линкване
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(TARGET)

# Компилиране на .cpp -> .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Почистване
clean:
	rm -f $(OBJ) $(TARGET)
