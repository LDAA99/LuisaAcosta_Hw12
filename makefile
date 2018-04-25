grafica.png: LA_graph.py advection.txt
	python LA_graph.py
advection.txt: 12
	./12 > advection.txt
12:LA_advection.cpp
	c++ LA_advection.cpp -o 12
