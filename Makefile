OBJECTS = main.o Array.o RangeArray.o

CC = g++
CFLAGS = -c

TARGET = test

$(TARGET): $(OBJECTS) Array.h RangeArray.h
	$(CC) -o $(TARGET) $(OBJECTS)

main.o: main.cpp Array.h RangeArray.h
	$(CC) $(CFLAGS) -o main.o main.cpp

Array.o: Array.cpp Array.h
	$(CC) $(CFLAGS) -o Array.o Array.cpp

RangeArray.o: RangeArray.cpp RangeArray.h
	$(CC) $(CFLAGS) -o RangeArray.o RangeArray.cpp

.PHONY : clean
clean:
	rm $(OBJECTS) $(TARGET)
