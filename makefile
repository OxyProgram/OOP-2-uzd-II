output: src.o functions.o functionsList.o functionsDeque.o TestingFunctions.o student.o
	g++ src.o functions.o functionsList.o functionsDeque.o TestingFunctions.o student.o -O2 -o output -lm -lpsapi

src.o: src.cpp header.h
	g++ -c src.cpp

src2.o: functions.cpp header.h
	g++ -c functions.cpp

src3.o: functionsList.cpp header.h
	g++ -c functionsList.cpp

src4.o: functionsDeque.cpp header.h
	g++ -c functionsDeque.cpp

src5.o: TestingFunctions.cpp header.h
	g++ -c TestingFunctions.cpp

src6.o: student.cpp header.h
	g++ -c student.cpp
clean:
	rm *.o
	rm *.txt