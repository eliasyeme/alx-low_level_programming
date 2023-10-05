FLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89
T = test/*
F = *.c
O = test/res

make:
	gcc $(FLAGS) $(T) $(F) -o $(O)

clean:
	rm -rf $(O)

run:
	./$(O)
