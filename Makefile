CC = g++
CFLAGS = -std=c++11 -Wall

all: target

target: functions_to_implement.o main.cpp
	$(CC) $(CFLAGS) main.cpp functions_to_implement.o -o target

test: functions_to_implement.o catch.hpp test.cpp
	$(CC) $(CFLAGS) test.cpp functions_to_implement.o -o test

functions_to_implement.o: functions_to_implement.cpp 
	$(CC) $(CFLAGS) -c functions_to_implement.cpp

clean:
	rm functions_to_implement.o target
