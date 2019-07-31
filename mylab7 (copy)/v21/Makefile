app.bin: main.o read_person_data.o write_person_data.o insert_plist.o search_age_person_data.o search_height_person_data.o delete_person_data.o
	gcc -o app.bin main.o  -L . -l myplist

libmyplist.so:read_person_data.o write_person_data.o insert_plist.o search_age_person_data.o search_height_person_data.o delete_person_data.o
	gcc -shared -o libmyplist.so read_person_data.o write_person_data.o insert_plist.o search_age_person_data.o search_height_person_data.o delete_person_data.o

export LD_LIBRARY_PATH=./

main.o: main.c person.h
	gcc -c -fPIC main.c

read_person_data.o: read_person_data.c person.h
	gcc -c -fPIC read_person_data.c

write_person_data.o: write_person_data.c person.h
	gcc -c -fPIC write_person_data.c 

insert_plist.o: insert_plist.c person.h
	gcc -c -fPIC insert_plist.c

search_age_person_data.o: search_age_person_data.c person.h
	gcc -c -fPIC search_age_person_data.c

search_height_person_data.o: search_height_person_data.c person.h
	gcc -c -fPIC search_height_person_data.c
delete_person_data.o: delete_person_data.c person.h
	gcc -c -fPIC delete_person_data.c

