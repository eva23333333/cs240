app.bin: main.o read_person_data.o write_person_data.o insert_plist.o
	gcc -o app.bin main.o read_person_data.o write_person_data.o insert_plist.o

main.o: main.c person.h
	gcc -c main.c

read_person_data.o: read_person_data.c person.h
	gcc -c read_person_data.c

write_person_data.o: write_person_data.c person.h
	gcc -c write_person_data.c 

insert_plist.o: insert_plist.c person.h
	gcc -c insert_plist.c



