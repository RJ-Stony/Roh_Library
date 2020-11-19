#include "Student.h"

void InsertStudent(char *name, int ID) {
	struct Student s;
	strcpy(s.name, name);
	s.student_ID = ID;
	printf("%s %d\n", s.name, s.student_ID);
}