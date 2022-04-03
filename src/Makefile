CC = mkoctfile
FLAGS = -g 
OFILES = ndarray_ext.o comb.o test_comb.o
MAIN = comb.oct

all: $(MAIN)

$(MAIN): $(OFILES)
	$(CC) $(FLAGS) -o $@ $^

%.o: %.cc
	$(CC) $(FLAGS)  -c $? -o $@

.PHONY: clean

clean: 
	rm *.o *.oct main

