all : RandomComputer.o Avalanche.o Bureaucrat.o Toolbox.o Crescendo.o PaperDoll.o FistfullODollars.o Human.o Referee.o Tournament.o main.o
	g++ RandomComputer.o Avalanche.o Bureaucrat.o Toolbox.o Crescendo.o PaperDoll.o FistfullODollars.o Human.o Referee.o Tournament.o main.o
  
clean :
	rm a.out *.o

main.o : main.cpp
	g++ -c main.cpp -o main.o

RandomComputer.o : RandomComputer.cpp RandomComputer.h Player.h
	g++ -c RandomComputer.cpp -o RandomComputer.o

Avalanche.o : Avalanche.cpp Avalanche.h Player.h
	g++ -c Avalanche.cpp -o Avalanche.o

Bureaucrat.o : Bureaucrat.cpp Bureaucrat.h Player.h
	g++ -c Bureaucrat.cpp -o Bureaucrat.o

Toolbox.o : Toolbox.cpp Toolbox.h Player.h
	g++ -c Toolbox.cpp -o Toolbox.o

Crescendo.o : Crescendo.cpp Crescendo.h Player.h
	g++ -c Crescendo.cpp -o Crescendo.o

PaperDoll.o : PaperDoll.cpp PaperDoll.h Player.h
	g++ -c PaperDoll.cpp -o PaperDoll.o

FistfullODollars.o : FistfullODollars.cpp FistfullODollars.h Player.h
	g++ -c FistfullODollars.cpp -o FistfullODollars.o

Human.o : Human.cpp Human.h Player.h
	g++ -c Human.cpp -o Human.o

Referee.o : Referee.cpp Referee.h 
	g++ -c Referee.cpp -o Referee.o

Tournament.o : Tournament.cpp Tournament.h Player.h Referee.h
	g++ -c Tournament.cpp -o Tournament.o