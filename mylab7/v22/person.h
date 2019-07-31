typedef struct person { 
   unsigned short age; 
   char *name; // first name, no spaces  
   struct height {int feet; int inches;} vertical;
   int idenifier; // unique identifier 
   struct person *next; 
} person_t;


