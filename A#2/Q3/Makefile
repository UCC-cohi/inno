FLAGS = -pedantic-errors -std=c++11

main3.o: main3.cpp d2boh.h
	g++ $(FLAGS) -c $<


d2boh.o: d2boh.cpp d2boh.h
	g++ $(FLAGS) -c $<


3: main3.o d2boh.o
	g++ $(FLAGS) $^  -o $@

clean:
	rm -f *.o main3

tar:
	tar -cvf Q3.tar main3.cpp d2boh.cpp d2boh.h Makefile

.PHONY: clean tar
