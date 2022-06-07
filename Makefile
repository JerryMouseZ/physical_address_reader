all: test reader

test: test.c
	$(CC) -o $@ $<

reader: reader.c
	$(CC) -o $@ $<
