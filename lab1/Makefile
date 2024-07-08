# Define compilation flag variables
CFLAGS = -Wall -Werror -Wextra -O3

# Declare phony targets
.PHONY: all clean format check

# all target
all: reverse_test

# Compile object files using pattern rules
%.o: %.c reverse.h
	gcc $(CFLAGS) -c $< -o $@

# Compile reverse_test target
reverse_test: test_reverse.o reverse.o
	gcc $(CFLAGS) test_reverse.o reverse.o -o reverse_test

# clean target
clean:
	rm -f reverse_test *.o

# format target
format:
	clang-format -style=Google -i reverse.c test_reverse.c reverse.h

# check target
check: reverse_test
	./reverse_test
