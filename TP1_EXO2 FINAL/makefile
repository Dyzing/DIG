all:
	moc vue.hh -o a.cc
	moc traducteur.hh -o b.cc
	g++ -Wall -std=c++14 -fPIC $(shell pkg-config --cflags Qt5Widgets) main.cpp vue.cc a.cc moteur.cc traducteur.cc b.cc -o tp1bus $(shell pkg-config --libs Qt5Widgets)
