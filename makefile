plot.png:datos.dat plot.py
	python plot.py

%.dat : a.out
	./a.out 

a.out: ejercicio.cpp
	g++ ejercicio.cpp
