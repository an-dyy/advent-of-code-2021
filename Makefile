DAY ?= ./solutions/DAY-01
CC = g++

all: a.out clean

a.out: $(DAY)
	cd $(DAY); $(CC) ./main.cpp ../helper.cpp

run: a.out
	cd $(DAY); ./a.out

clean:
	cd $(DAY); rm ./a.out
