main: main.o RacingStrategy.o Aggressive.o LaidBack.o Neutral.o
	g++ -o main main.o RacingStrategy.o Aggressive.o LaidBack.o Neutral.o
	
main.o: main.cpp RacingStrategy.h Aggressive.h LaidBack.h Neutral.h
	g++ -c main.cpp

RacingStrategy.o: RacingStrategy.h RacingStrategy.cpp
	g++ -c RacingStrategy.cpp

Aggressive.o: Aggressive.h Aggressive.cpp
	g++ -c Aggressive.cpp

LaidBack.o: LaidBack.h LaidBack.cpp
	g++ -c LaidBack.cpp

Neutral.o: Neutral.h Neutral.cpp
	g++ -c Neutral.cpp

run:
	./main
	
clean:
	rm *.o main