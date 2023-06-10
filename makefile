hepsi: derle calistir

derle: 
	g++ -I ./include/ -o ./lib/Node.o -c ./src/Node.cpp
	g++ -I ./include/ -o ./lib/List.o -c ./src/List.cpp
	g++ -I ./include/ -o ./bin/Test ./src/Test.cpp ./lib/Node.o ./lib/List.o
	 
calistir:
	./bin/Test