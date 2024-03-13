COMPILER=g++
OPTIONS=-g -std=c++17 -pedantic -Wall -Wextra -Wshadow -Wconversion -Wunreachable-code
COMPILE=$(COMPILER) $(OPTIONS)

output:	main.o
	${COMPILE} main.o -o output

main.o:	main.cpp
	@echo "Compiling the main.cpp file"
	${COMPILE} -c main.cpp

clean:
	@echo "Cleaning All Executables"
	rm *.o output