#include "grade-school.h"

void init_roster(roster_t *roster)
{
    *roster = (roster_t) {0};
}

roster_t get_grade(roster_t *roster, uint8_t grade)
{
    roster_t grade_roster;
    init_roster(&grade_roster);
    for (size_t i = 0; i < roster->count; i++)
    {
        if (roster->students[i].grade == grade)
            add_student(&grade_roster, roster->students[i].name, i);
    }
    return grade_roster;
}

bool add_student(roster_t *roster, const char *name, uint8_t grade)
{
    for (size_t i = 0; i < roster->count; i++)
    {
        if (!strcmp(roster->students[i].name, name))
            return false;
    }
    strcpy(roster->students[roster->count].name, name);
    roster->students[roster->count].grade = grade;
    roster->count++;
    qsort(roster->students, roster->count, sizeof(student_t), compare_students);
    return true;
}

int compare_students(const void *lhs, const void *rhs)
{
    const student_t *l = lhs, *r = rhs;
    if (l->grade == r->grade)
        return strcmp(l->name, r->name);
    return l->grade - r->grade;
}
