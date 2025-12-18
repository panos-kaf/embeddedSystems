CC = gcc

FLAGS = -g
THUMB_FLAGS = -mthumb

all: arm thumb

arm:
	$(CC) $(FLAGS) -c string_manipulation.c
	$(CC) $(FLAGS) -c strlib.s
	$(CC) $(FLAGS) string_manipulation.o strlib.o -o arm-prog

thumb:
	$(CC) $(THUMB_FLAGS) -c string_manipulation.c -o string_manipulation_thumb.o
	$(CC) $(THUMB_FLAGS) -c strlib_thumb.s
	$(CC) $(THUMB_FLAGS) string_manipulation_thumb.o strlib.o -o thumb-prog

clean:
	$(RM) *.o arm-prog thumb-prog
