CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = hello_os
SOURCES = main.cpp
$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)
clean:
	rm -f $(TARGET)

help:
	@echo "Доступные цели: make (сборка), make clean (очистка), make help (помощь)"
.PHONY: clean help