CXX=g++
FLAGS=-g -std=c++11 -Wall -W
PROG=board

$(PROG): main.o generalboard.o 
	$(CXX) $(FLAGS) -o $(PROG) main.o generalboard.o 

generalboard.o: generalboard.cpp generalboard.h IScoreboard.h
	$(CXX) $(FLAGS) -c generalboard.cpp

main.o: main.cpp generalboard.h 
	$(CXX) $(FLAGS) -c main.cpp

clean: 
	rm *.o $(PROG)
