run:	main.o minion.o melee.o goomba.o chainchomp.o flying.o boo.o paratroopa.o range.o hammerbro.o magikoopa.o
	g++ main.o minion.o melee.o goomba.o chainchomp.o flying.o boo.o paratroopa.o range.o hammerbro.o magikoopa.o -o run

main.o:	minion.h melee.h goomba.h chainchomp.h flying.h boo.h paratroopa.h range.h hammerbro.h magikoopa.h main.cpp
	g++ -c main.cpp

mininon.o:	minion.h minion.cpp
	g++ -c minion.cpp

melee.o:	melee.h melee.cpp
	g++ -c melee.cpp

goomba.o:	goomba.h goomba.cpp
	g++ -c goomba.cpp

chainchomp.o:	chainchomp.h chainchomp.cpp
	g++ -c chainchomp.cpp

flyinh.o:	flying.h flying.cpp
	g++ -c flyinh.cpp

boo.o:	boo.h boo.cpp
	g++ -c boo.cpp

paratroopa.o:	paratroopa.h paratroopa.cpp
	g++ -c paratroopa.cpp

range.o:	range.h range.cpp
	g++ -c range.cpp

hammerbro.o:	hammerbro.h hammerbro.cpp
	g++ -c hammerbro.cpp

magikoopa.o:	magikoopa.h magikoopa.cpp
	g++ -c magikoopa.cpp
clear:
	rm *.o run
