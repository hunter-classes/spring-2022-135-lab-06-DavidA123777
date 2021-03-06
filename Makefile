main: main.o caesar.o vigenere.o
	g++ -o main main.o caesar.o vigenere.o

tests: tests.o caesar.o vigenere.o
		g++ -o tests tests.o caesar.o vigenere.o

test-ascii: test-ascii.o
			g++ -o test-ascii test-ascii.o

main.o: main.cpp caesar.h vigenere.h

vigenere.o: vigenere.cpp vigenere.h

caesar.o: caesar.cpp caesar.h


tests.o: tests.cpp doctest.h caesar.h


test-ascii.o: test-ascii.cpp

clean:
	rm -f main.o caesar.o vigenere.o tests.o test-ascii.o
