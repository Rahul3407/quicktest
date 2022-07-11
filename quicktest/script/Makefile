CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

all: sysPrg

sysPrg: $(OBJ)/sysPrg.o
	$(CC) $(LFLAGS) $(BIN)/sysPrg $(OBJ)/sysPrg.o

$(OBJ)/sysPrg.o: $(SRC)/sysPrg.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/sysPrg.cpp 
	mv *.o $(OBJ)

clean:
	@echo "Cleaning is in Progress"
	rm -f a.out sysPrg
	rm -f *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/sysPrg
	@echo "Done!