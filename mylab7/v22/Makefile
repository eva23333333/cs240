app.bin: main.o read_person_data.o write_person_data.o insert_flist.o
	gcc -o app.bin main.o -L . -l myplist

libmyplist.so:read_person_data.o write_person_data.o insert_flist.o 
	gcc -shared -o libmyplist.so read_person_data.o write_person_data.o insert_flist.o 
export LD_LIBRARY_PATH=./

main.o: main.c person.h
	gcc -c -fPIC main.c

read_person_data.o: read_person_data.c person.h
	gcc -c -fPIC read_person_data.c

write_person_data.o: write_person_data.c person.h
	gcc -c -fPIC write_person_data.c 

insert_flist.o: insert_flist.c person.h
	gcc -c -fPIC insert_flist.c



