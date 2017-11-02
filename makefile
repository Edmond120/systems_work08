all: stats.c
	gcc -o stats stats.c

run: all
	./stats

clean:
	rm -f stats

