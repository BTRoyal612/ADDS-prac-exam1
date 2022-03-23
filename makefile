all : ArtificialPet.o Furby.o main.o
	g++ ArtificialPet.o Furby.o main.o -o a.out

clean :
	rm a.out *.o

main.o : main.cpp
	g++ -c main.cpp -o main.o

ArtificialPet.o : ArtificialPet.h ArtificialPet.cpp
	g++ -c ArtificialPet.cpp -o ArtificialPet.o

Furby.o : Furby.h Furby.cpp ArtificialPet.h
	g++ -c Furby.cpp -o Furby.o