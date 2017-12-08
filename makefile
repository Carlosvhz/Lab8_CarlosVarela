run:	main.o minion.o melee.o goomba.o chainchomp.o
	g++ main.o minion.o melee.o goomba.o chainchomp.o -o run

main.o:	minion.h melee.h goomba.h chainchomp.h main.cpp
	g++ -c main.cpp

mininon.o:	minion.h minion.cpp
	g++ -c minion.cpp

melee.o:	melee.h melee.cpp
	g++ -c melee.cpp

goomba.o:	goomba.h goomba.cpp
	g++ -c goomba.cpp

chainchomp.o:	chainchomp.h chainchomp.cpp
	g++ -c chainchomp.cpp

clear:
	rm *.o run
