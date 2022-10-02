run: linked_list.c
	gcc linked_list.c -o linked_list.o
	chmod +x linked_list.o
	echo "=========OUTPUT========="
	./linked_list.o

clean: linked_list.o
	echo "Removing output"
	rm linked_list.o