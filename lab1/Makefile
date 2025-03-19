CC = g++
CFLAGS = -std=c++17 -O3

# Переменная для выбора типа массива
USE_FLOAT = 1

# Если USE_FLOAT установлено в 1, то используем float
ifeq ($(USE_FLOAT), 1)
    DEFINES = -DUSE_FLOAT
else
    DEFINES = -DUSE_DOUBLE
endif

sine_array: main.cpp
	$(CC) $(CFLAGS) $(DEFINES) main.cpp -o sine_array

run: sine_array
	./sine_array
