b_tree_app: b_tree_lib.o main.c
	gcc -Wall -Wextra b_tree_lib.o main.c -o b_tree_app

llist.o: b_tree_lib.h b_tree_lib.c
	gcc -Wall -Wextra -fPIC b_tree_lib.h -c b_tree_lib.c

clean:
	rm -rf *.o *.gch b_tree_app