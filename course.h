#ifndef COURSE_H
#define COURSE_H

namespace gc {
    class Course {
        char m_name[50];
        char m_code[7];
        double m_grade;
        int m_numberOfItems;
    public:
        Course();
        Course(char name, char code);
        char getName();
        char getCode();
        double getGrade();
        int getNumberOfItems();
    };
}

#endif