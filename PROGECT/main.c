#include <stdio.h>
#include <stdlib.h>
void lines(){
int numLines = 6;
    int starsPerLine = 10;

    int i, j;
    for (i = 0; i < numLines; i++) {
        for (j = 0; j < starsPerLine; j++) {
            printf("*          ");
        }
        printf("\n");
}
}

void staff(){
  int id, bin, age, result;
    printf("Enter your ID: ");
    scanf("%d", &id);
    printf("Enter your BIN code: ");
    scanf("%d", &bin);
    lines ();

    if (id == 221008111 && bin == 4455) {
        char name1[50], name2[50], name3[50], name4[50];
        printf("Welcome Eng Mohamed Salah\n\n");
        printf("Enter student first name: ");
        scanf("%s", name1);
        printf("Enter student second name: ");
        scanf("%s", name2);
        printf("Enter student third name: ");
        scanf("%s", name3);
        printf("Enter student fourth name: ");
        scanf("%s", name4);
        printf("Student name: %s %s %s %s\n", name1, name2, name3, name4);

        printf("Enter student age: ");
        scanf("%d", &age);

        if (age < 18 && age>50) {
            printf("Sorry, you can't register.\n");
        }
        else {
            printf("Enter student result in high school  ");
            scanf("%d", &result);

            if (result < 245 && result  > 410 )  {
                printf("Sorry, you have not reached our minimum acceptance rate in our college.\n");
            }
            else {

                int pass;
                printf("Select the student's major in high school:\n");
                printf("1. Literary\n");
                printf("2. Scientific Mathematics\n");
                printf("3. Scientific Science\n");
                scanf("%d", &pass);

                if (pass == 1) {
                    printf("Sorry, you can't be accepted in our college.\n");
                }
                else if (pass==2){
                    FILE *fptr;
                    char sub11[10], sub22[10], sub33[10], sub44[10], sub55[10], sub66[10], sub77[10];
                    char gradee1[10], gradee2[10], gradee3[10], gradee4[10], gradee5[10], gradee6[10], gradee7[10];
                    char num1[100], num2[100], num3[100], num4[100], num5[100], num6[100], num7[100];
lines();
    printf("Your first term subjects are:\n");
    fptr = fopen("new student s.txt", "r");

    fscanf(fptr, "%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s%s ", sub11, num1, gradee1, sub22, num2, gradee2, sub33, num3, gradee3, sub44, num4, gradee4, sub55, num5, gradee5, sub66, num6, gradee6, sub77, num7, gradee7);
    printf("%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s", sub11, num1, gradee1, sub22, num2, gradee2, sub33, num3, gradee3, sub44, num4, gradee4, sub55, num5, gradee5, sub66, num6, gradee6, sub77, num7, gradee7);

                    printf("\n*****************\n ***********************\n");
                    lines();
                    printf("Enter subjects to register (enter 0 to finish):\n");
                    fclose(fptr);

                    fptr = fopen("student ew.txt", "w");
                    if (fptr == NULL) {
                        printf("Error opening the file.\n");
                        return;
                    }

                    char subb1[100];
                    char registeredSubjects[1000] = "";

                    do {
                        scanf("%s", subb1);
                        if (!strcmp(subb1, "LH135")) {
                            printf("ESP1\n");
                            if (strstr(registeredSubjects, "ESP1") == NULL) {
                                fprintf(fptr, "ESP1 ");
                                strcat(registeredSubjects, "ESP1 ");
                            }
                        } else if (!strcmp(subb1, "BA113")) {
                            printf("Physics\n");
                            if (strstr(registeredSubjects, "Physics") == NULL) {
                                fprintf(fptr, "Physics ");
                                strcat(registeredSubjects, "Physics ");
                            }
                        } else if (!strcmp(subb1, "CS111")) {
                            printf("introduction to computers\n");
                            if (strstr(registeredSubjects, "introduction_to_computers") == NULL) {
                                fprintf(fptr, "introduction_to_computers ");
                                strcat(registeredSubjects, "introduction_to_computers ");
                            }
                        } else if (!strcmp(subb1, "BA101")) {
                            printf("Calculus 1\n");
                            if (strstr(registeredSubjects, "Calculus1") == NULL) {
                                fprintf(fptr, "Calculus_1 ");
                                strcat(registeredSubjects, "Calculus_1 ");
                            }
                        } else if (!strcmp(subb1, "NC172")) {
                            printf("fundamental of business\n");
                            if (strstr(registeredSubjects, "fundamental_of_business") == NULL) {
                                fprintf(fptr, "fundamental_of_business ");
                                strcat(registeredSubjects, "fundamental_of_business ");
                            }
                        } else if (!strcmp(subb1, "BA003")) {
                            printf("creativity and innovation\n");
                            if (strstr(registeredSubjects, "creativity_and_innovation") == NULL) {
                                fprintf(fptr, "creativity_and_innovation ");
                                strcat(registeredSubjects, "creativity_and_innovation ");
                            }
                        } else if (!strcmp(subb1, "IS171")) {
                            printf("information system\n");
                            if (strstr(registeredSubjects, "information_system") == NULL) {
                                fprintf(fptr, "information_system ");
                                strcat(registeredSubjects, "information_system ");
                            }
                        } else if (!strcmp(subb1, "0")) {
                            break;
                        } else {
                            printf("\nPlease re-enter the subject code.\n");
                        }
                    } while (strcmp(subb1, "0") != 0);

                    fflush(fptr);
                    fclose(fptr);
                    lines();
                    nw();
                }
                else if (pass == 3) {
                    FILE *fptr;
                    char sub11[10], sub22[10], sub33[10], sub44[10], sub55[10], sub66[10], sub77[10];
                    char gradee1[10], gradee2[10], gradee3[10], gradee4[10], gradee5[10], gradee6[10], gradee7[10];
                    char num1[100], num2[100], num3[100], num4[100], num5[100], num6[100], num7[100];
lines();
    printf("Your first term subjects are:\n");
    fptr = fopen("new student.txt", "r");

    fscanf(fptr, "%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s%s ", sub11, num1, gradee1, sub22, num2, gradee2, sub33, num3, gradee3, sub44, num4, gradee4, sub55, num5, gradee5, sub66, num6, gradee6, sub77, num7, gradee7);
    printf("%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s", sub11, num1, gradee1, sub22, num2, gradee2, sub33, num3, gradee3, sub44, num4, gradee4, sub55, num5, gradee5, sub66, num6, gradee6, sub77, num7, gradee7);

                    printf("\n*****************\n ***********************\n");
                    lines();
                    printf("Enter subjects to register (enter 0 to finish):\n");
                    fclose(fptr);

                    fptr = fopen("student ew.txt", "w");

                    if (fptr == NULL) {
                        printf("Error opening the file.\n");
                        return;
                    }

                    char subb1[100];
                    char registeredSubjects[1000] = "";

                    do {
                        scanf("%s", subb1);
                        if (!strcmp(subb1, "LH135")) {
                            printf("ESP1\n");
                            if (strstr(registeredSubjects, "ESP1") == NULL) {
                                fprintf(fptr, "ESP1 ");
                                strcat(registeredSubjects, "ESP1 ");
                            }
                        } else if (!strcmp(subb1, "BA113")) {
                            printf("Physics\n");
                            if (strstr(registeredSubjects, "Physics") == NULL) {
                                fprintf(fptr, "Physics ");
                                strcat(registeredSubjects, "Physics ");
                            }
                        } else if (!strcmp(subb1, "CS111")) {
                            printf("introduction to computers\n");
                            if (strstr(registeredSubjects, "introduction_to_computers") == NULL) {
                                fprintf(fptr, "introduction_to_computers ");
                                strcat(registeredSubjects, "introduction_to_computers ");
                            }
                        } else if (!strcmp(subb1, "BA003")) {
                            printf("Precalculus\n");
                            if (strstr(registeredSubjects, "Precalculus") == NULL) {
                                fprintf(fptr, "Precalculus ");
                                strcat(registeredSubjects, "Precalculus ");
                            }
                        } else if (!strcmp(subb1, "NC172")) {
                            printf("fundamental of business\n");
                            if (strstr(registeredSubjects, "fundamental_of_business") == NULL) {
                                fprintf(fptr, "fundamental_of_business ");
                                strcat(registeredSubjects, "fundamental_of_business ");
                            }
                        } else if (!strcmp(subb1, "EC134")) {
                            printf("creativity and innovation\n");
                            if (strstr(registeredSubjects, "creativity_and_innovation") == NULL) {
                                fprintf(fptr, "creativity_and_innovation ");
                                strcat(registeredSubjects, "creativity_and_innovation ");
                            }
                        } else if (!strcmp(subb1, "CCS1001")) {
                            printf("information system\n");
                            if (strstr(registeredSubjects, "information_system") == NULL) {
                                fprintf(fptr, "information_system ");
                                strcat(registeredSubjects, "information_system ");
                            }
                        } else if (!strcmp(subb1, "0")) {
                            break;
                        } else {
                            printf("\nPlease re-enter the subject code.\n");
                        }
                    } while (strcmp(subb1, "0") != 0);

                    fflush(fptr);
                    fclose(fptr);
                    lines();
                    nw();
                }
            }
        }
    }
    else
        {
        printf("Invalid ID or BIN code.\n");
    }
}
double calculateGradePoints(char grade) {
    double gradeP;
    switch (grade) {
        case 'A':
        case 'a':
            gradeP= 4.0;
            break;
        case 'B':
        case 'b':
            gradeP= 3.0;
            break;
        case 'C':
        case 'c':
            gradeP= 2.0;
            break;
        case 'D':
        case 'd':
            gradeP= 1.0;
            break;
        case 'F':
        case 'f':
            gradeP= 0.0;
            break;
        default:
            gradeP= -1.0;
            break;
    }
    return gradeP;
}

double calculater(int numcourses, char grades[], double credithours[]) {
    double totalcredithours = 0.0;
    double totalGradePoints = 0.0;

    for (int i = 0; i < numcourses; i++) {
        double gradePoints = calculateGradePoints(grades[i]);
        if (gradePoints == -1.0) {
            printf("Invalid grade entered for course %d. Please try again.\n", i + 1);
            return -1.0;
        }
        totalcredithours += credithours[i];
        totalGradePoints += (credithours[i] * gradePoints);
    }
    double gpa = totalGradePoints / totalcredithours;
     return gpa;
}

void sjoud() {
    printf("\nWelcome sjoud mohamed\n");
    lines();
    printf("Student result:\n");

    FILE *fptr;
    fptr = fopen("sjoud.txt", "r");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    float grade[50];
    char sub1[50], sub2[50], sub3[50], sub4[50], sub5[50], sub6[50], sub7[50];
    char grade1[10], grade2[10], grade3[10], grade4[10], grade5[10], grade6[10], grade7[10];
    char num1[100], num2[100], num3[100], num4[100], num5[100], num6[100], num7[100];
    char sub11[10], sub22[10], sub33[10], sub44[10], sub55[10], sub66[10], sub77[10];
    char gradee1[10], gradee2[10], gradee3[10], gradee4[10], gradee5[10], gradee6[10], gradee7[10];
    char numm11;

    //////////////////////////////////////////////////////////////////////////
    fscanf(fptr, " %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s", sub1, grade1, sub2, grade2, sub3, grade3, sub4, grade4, sub5, grade5, sub6, grade6, sub7, grade7, grade);
    printf("%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n %s\n", sub1, grade1, sub2, grade2, sub3, grade3, sub4, grade4, sub5, grade5, sub6, grade6, sub7, grade7,grade);
    fclose(fptr);

    lines();
    printf("\n\nAllowed subjects to record\n\n");


    fptr = fopen("normal student.txt", "r");
    fscanf(fptr, "%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s%s ", sub11, num1, gradee1, sub22, num2, gradee2, sub33, num3, gradee3, sub44, num4, gradee4, sub55, num5, gradee5, sub66, num6, gradee6, sub77, num7, gradee7);
    printf("%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n", sub11, num1, gradee1, sub22, num2, gradee2, sub33, num3, gradee3, sub44, num4, gradee4, sub55, num5, gradee5, sub66, num6, gradee6, sub77, num7, gradee7);


    printf("\nenter subjects to register\n\n");
    fclose(fptr);

    fptr = fopen("sjoud ew.txt", "w");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    char subb1[100];
    char registeredSubjects[1000] = "";

    do {
        scanf("%s", subb1);
        if (!strcmp(subb1, "UNR1407")) {
            printf("Academic writing\n");
            if (strstr(registeredSubjects, "Academic_writing") == NULL) {
                fprintf(fptr, "Academic_writing ");
                strcat(registeredSubjects, "Academic_writing ");
            }
        } else if (!strcmp(subb1, "BA216")) {
            printf("Advanced Physics\n");
            if (strstr(registeredSubjects, "Advanced_Physics") == NULL) {
                fprintf(fptr, "Advanced_Physics ");
                strcat(registeredSubjects, "Advanced_Physics ");
            }
        } else if (!strcmp(subb1, "CCS1302")) {
            printf("Problem solving\n");
            if (strstr(registeredSubjects, "Problem_solving") == NULL) {
                fprintf(fptr, "Problem_solving ");
                strcat(registeredSubjects, "Problem_solving ");
            }
        } else if (!strcmp(subb1, "EBA1203")) {
            printf("Calculus I\n");
            if (strstr(registeredSubjects, "CalculusI") == NULL) {
                fprintf(fptr, "CalculusI ");
                strcat(registeredSubjects, "CalculusI ");
            }
        } else if (!strcmp(subb1, "CNC1401")) {
            printf("Entrepreneurship\n");
            if (strstr(registeredSubjects, "Entrepreneurship") == NULL) {
                fprintf(fptr, "Entrepreneurship ");
                strcat(registeredSubjects, "Entrepreneurship ");
            }
        } else if (!strcmp(subb1, "NC133")) {
            printf("Communication skills\n");
            if (strstr(registeredSubjects, "Communication_skills") == NULL) {
                fprintf(fptr, "Communication_skills ");
                strcat(registeredSubjects, "Communication_skills ");
            }
        } else if (!strcmp(subb1, "CCS1001")) {
            printf("Discrete structure\n");
            if (strstr(registeredSubjects, "Discrete_structure") == NULL) {
                fprintf(fptr, "Discrete_structure ");
                strcat(registeredSubjects, "Discrete_structure ");
            }
        } else if (!strcmp(subb1, "0")) {
            break;
        } else {
            printf("\nPlease reenter the subject code\n");
        }
    } while (subb1 != 0);

    fflush(fptr);
    fclose(fptr);
    lines();
    printf("your subjects are :\n");
    sj();
}

void sj() {
    char sub1[100];
    FILE *fptr;
    fptr = fopen("sjoud ew.txt", "r");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }


    while (fscanf(fptr, "%s", sub1) != EOF) {
        printf("%s\n", sub1);
    }

    fclose(fptr);
}

void nw(){
 char sub1[100];
    FILE *fptr;
    fptr = fopen("student ew.txt", "r");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }

   while (fscanf(fptr, "%s", sub1) != EOF) {
        printf("%s\n", sub1);
    }

    fclose(fptr);
}
void hs(){
char sub1[100];
    FILE *fptr;
    fptr = fopen("hassan ew.txt", "r");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    while (fscanf(fptr, "%s", sub1) != EOF) {
        printf("%s\n", sub1);
    }

    fclose(fptr);
}
void es(){
char sub1[100];
    FILE *fptr;
    fptr = fopen("eslam ew.txt", "r");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }

     while (fscanf(fptr, "%s", sub1) != EOF) {
        printf("%s\n", sub1);
    }

    fclose(fptr);
}
void ab(){
char sub1[100];
    FILE *fptr;
    fptr = fopen("abdullah ew.txt", "r");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }

  while (fscanf(fptr, "%s", sub1) != EOF) {
        printf("%s\n", sub1);
    }

    fclose(fptr);
    }
 void   aq(){
    char sub1[100];
    FILE *fptr;
    fptr = fopen("aboqalil ew.txt", "r");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }
 while (fscanf(fptr, "%s", sub1) != EOF) {
        printf("%s\n", sub1);
    }

    fclose(fptr);
    }
void ng(){
      char sub1[100];
    FILE *fptr;
    fptr = fopen("nagham ew.txt", "r");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }

   while (fscanf(fptr, "%s", sub1) != EOF) {
        printf("%s\n", sub1);
    }

    fclose(fptr);
    }
void ma(){
      char sub1[100];
    FILE *fptr;
    fptr = fopen("malak ew.txt", "r");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }

   while (fscanf(fptr, "%s", sub1) != EOF) {
        printf("%s\n", sub1);
    }

    fclose(fptr);
    }
void ml(){
      char sub1[100];
    FILE *fptr;
    fptr = fopen("malllakk ew.txt", "r");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }
while (fscanf(fptr, "%s", sub1) != EOF) {
        printf("%s\n", sub1);
    }

    fclose(fptr);
    }
void mh(){
  char sub1[100];
    FILE *fptr;
    fptr = fopen("mahdy ew.txt", "r");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }

   while (fscanf(fptr, "%s", sub1) != EOF) {
        printf("%s\n", sub1);
    }

    fclose(fptr);
}
void sk(){
char sub1[100];
    FILE *fptr;
    fptr = fopen("shawky ew.txt", "r");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }

   while (fscanf(fptr, "%s", sub1) != EOF) {
        printf("%s\n", sub1);
    }

    fclose(fptr);
}
////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void hassan (){
    printf("\nWelcome Hassan Nasser \n");
    lines();
    printf("Student result:\n");

    FILE *fptr;
    fptr = fopen("hassan.txt", "r");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    float grade[50];
    char sub1[50], sub2[50], sub3[50], sub4[50], sub5[50], sub6[50], sub7[50];
    char grade1[10], grade2[10], grade3[10], grade4[10], grade5[10], grade6[10], grade7[10];
    char num1[100], num2[100], num3[100], num4[100], num5[100], num6[100], num7[100];
    char sub11[10], sub22[10], sub33[10], sub44[10], sub55[10], sub66[10], sub77[10];
    char gradee1[10], gradee2[10], gradee3[10], gradee4[10], gradee5[10], gradee6[10], gradee7[10];
    char numm11;

    //////////////////////////////////////////////////////////////////////////
    fscanf(fptr, " %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s", sub1, grade1, sub2, grade2, sub3, grade3, sub4, grade4, sub5, grade5, sub6, grade6, sub7, grade7, grade);
     printf("%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n %s\n", sub1, grade1, sub2, grade2, sub3, grade3, sub4, grade4, sub5, grade5, sub6, grade6, sub7, grade7,grade);
    fclose(fptr);
    lines();
    printf("\n\nAllowed subjects to record\n\n");

    fptr = fopen("normal student.txt", "r");
    fscanf(fptr, "%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s%s ", sub11, num1, gradee1, sub22, num2, gradee2, sub33, num3, gradee3, sub44, num4, gradee4, sub55, num5, gradee5, sub66, num6, gradee6, sub77, num7, gradee7);
    printf("%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n", sub11, num1, gradee1, sub22, num2, gradee2, sub33, num3, gradee3, sub44, num4, gradee4, sub55, num5, gradee5, sub66, num6, gradee6, sub77, num7, gradee7);

    printf("\nenter subjects to register\n\n");
    fclose(fptr);

    fptr = fopen("hassan ew.txt", "w");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    char subb1[100];
    char registeredSubjects[1000] = "";

    do {
        scanf("%s", subb1);
        if (!strcmp(subb1, "UNR1407")) {
            printf("Academic writing\n");
            if (strstr(registeredSubjects, "Academic_writing") == NULL) {
                fprintf(fptr, "Academic_writing ");
                strcat(registeredSubjects, "Academic_writing ");
            }
        } else if (!strcmp(subb1, "BA216")) {
            printf("Advanced Physics\n");
            if (strstr(registeredSubjects, "Advanced_Physics") == NULL) {
                fprintf(fptr, "Advanced_Physics ");
                strcat(registeredSubjects, "Advanced_Physics ");
            }
        } else if (!strcmp(subb1, "CCS1302")) {
            printf("Problem solving\n");
            if (strstr(registeredSubjects, "Problem_solving") == NULL) {
                fprintf(fptr, "Problem_solving ");
                strcat(registeredSubjects, "Problem_solving ");
            }
        } else if (!strcmp(subb1, "EBA1203")) {
            printf("Calculus I\n");
            if (strstr(registeredSubjects, "CalculusI") == NULL) {
                fprintf(fptr, "CalculusI ");
                strcat(registeredSubjects, "CalculusI ");
            }
        } else if (!strcmp(subb1, "CNC1401")) {
            printf("Entrepreneurship\n");
            if (strstr(registeredSubjects, "Entrepreneurship") == NULL) {
                fprintf(fptr, "Entrepreneurship ");
                strcat(registeredSubjects, "Entrepreneurship ");
            }
        } else if (!strcmp(subb1, "NC133")) {
            printf("Communication skills\n");
            if (strstr(registeredSubjects, "Communication_skills") == NULL) {
                fprintf(fptr, "Communication_skills ");
                strcat(registeredSubjects, "Communication_skills ");
            }
        } else if (!strcmp(subb1, "CCS1001")) {
            printf("Discrete structure\n");
            if (strstr(registeredSubjects, "Discrete_structure") == NULL) {
                fprintf(fptr, "Discrete_structure ");
                strcat(registeredSubjects, "Discrete_structure ");
            }
        } else if (!strcmp(subb1, "0")) {
            break;
        } else {
            printf("\nPlease reenter the subject code\n");
        }
    } while (subb1 != 0);

    fflush(fptr);
    fclose(fptr);
    lines();
    printf("your subjects are :\n");
    hs();

}
////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
void esllam (){
     printf("\nWelcome Esllam Nasser \n");
          lines();
    printf("Student result:\n");

    FILE *fptr;
    fptr = fopen("esllam.txt", "r");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    float grade[50];
    char sub1[50], sub2[50], sub3[50], sub4[50], sub5[50], sub6[50], sub7[50];
    char grade1[10], grade2[10], grade3[10], grade4[10], grade5[10], grade6[10], grade7[10];
    char num1[100], num2[100], num3[100], num4[100], num5[100], num6[100], num7[100];
    char sub11[10], sub22[10], sub33[10], sub44[10], sub55[10], sub66[10], sub77[10];
    char gradee1[10], gradee2[10], gradee3[10], gradee4[10], gradee5[10], gradee6[10], gradee7[10];
    char numm11;

    //////////////////////////////////////////////////////////////////////////
    fscanf(fptr, " %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s", sub1, grade1, sub2, grade2, sub3, grade3, sub4, grade4, sub5, grade5, sub6, grade6, sub7, grade7, grade);
   printf("%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n %s\n", sub1, grade1, sub2, grade2, sub3, grade3, sub4, grade4, sub5, grade5, sub6, grade6, sub7, grade7,grade);
    fclose(fptr);
         lines();
    printf("\n\nAllowed subjects to record\n\n");

    fptr = fopen("normal student.txt", "r");
    fscanf(fptr, "%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s%s ", sub11, num1, gradee1, sub22, num2, gradee2, sub33, num3, gradee3, sub44, num4, gradee4, sub55, num5, gradee5, sub66, num6, gradee6, sub77, num7, gradee7);
    printf("%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n", sub11, num1, gradee1, sub22, num2, gradee2, sub33, num3, gradee3, sub44, num4, gradee4, sub55, num5, gradee5, sub66, num6, gradee6, sub77, num7, gradee7);
         lines();
    printf("\nenter subjects to register\n\n");
    fclose(fptr);

    fptr = fopen("eslam ew.txt", "w");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    char subb1[100];
    char registeredSubjects[1000] = "";

    do {
        scanf("%s", subb1);
        if (!strcmp(subb1, "UNR1407")) {
            printf("Academic writing\n");
            if (strstr(registeredSubjects, "Academic_writing") == NULL) {
                fprintf(fptr, "Academic_writing ");
                strcat(registeredSubjects, "Academic_writing ");
            }
        } else if (!strcmp(subb1, "BA216")) {
            printf("Advanced Physics\n");
            if (strstr(registeredSubjects, "Advanced_Physics") == NULL) {
                fprintf(fptr, "Advanced_Physics ");
                strcat(registeredSubjects, "Advanced_Physics ");
            }
        } else if (!strcmp(subb1, "CCS1302")) {
            printf("Problem solving\n");
            if (strstr(registeredSubjects, "Problem_solving") == NULL) {
                fprintf(fptr, "Problem_solving ");
                strcat(registeredSubjects, "Problem_solving ");
            }
        } else if (!strcmp(subb1, "EBA1203")) {
            printf("Calculus I\n");
            if (strstr(registeredSubjects, "CalculusI") == NULL) {
                fprintf(fptr, "CalculusI ");
                strcat(registeredSubjects, "CalculusI ");
            }
        } else if (!strcmp(subb1, "CNC1401")) {
            printf("Entrepreneurship\n");
            if (strstr(registeredSubjects, "Entrepreneurship") == NULL) {
                fprintf(fptr, "Entrepreneurship ");
                strcat(registeredSubjects, "Entrepreneurship ");
            }
        } else if (!strcmp(subb1, "NC133")) {
            printf("Communication skills\n");
            if (strstr(registeredSubjects, "Communication_skills") == NULL) {
                fprintf(fptr, "Communication_skills ");
                strcat(registeredSubjects, "Communication_skills ");
            }
        } else if (!strcmp(subb1, "CCS1001")) {
            printf("Discrete structure\n");
            if (strstr(registeredSubjects, "Discrete_structure") == NULL) {
                fprintf(fptr, "Discrete_structure ");
                strcat(registeredSubjects, "Discrete_structure ");
            }
        } else if (!strcmp(subb1, "0")) {
            break;
        } else {
            printf("\nPlease reenter the subject code\n");
        }
    } while (subb1 != 0);

    fflush(fptr);
    fclose(fptr);
         lines();
         printf("your subjects are:\n ");
    es();


}
//////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void abdullah (){
   printf("\nWelcome Abdullah Ahmed \n");
        lines();
    printf("Student result:\n");

    FILE *fptr;
    fptr = fopen("abdullah.txt", "r");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    float grade[50];
    char sub1[50], sub2[50], sub3[50], sub4[50], sub5[50], sub6[50], sub7[50];
    char grade1[10], grade2[10], grade3[10], grade4[10], grade5[10], grade6[10], grade7[10];
    char num1[100], num2[100], num3[100], num4[100], num5[100], num6[100], num7[100];
    char sub11[10], sub22[10], sub33[10], sub44[10], sub55[10], sub66[10], sub77[10];
    char gradee1[10], gradee2[10], gradee3[10], gradee4[10], gradee5[10], gradee6[10], gradee7[10];
    char numm11;

    //////////////////////////////////////////////////////////////////////////
    fscanf(fptr, " %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s", sub1, grade1, sub2, grade2, sub3, grade3, sub4, grade4, sub5, grade5, sub6, grade6, sub7, grade7, grade);
     printf("%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n %s\n", sub1, grade1, sub2, grade2, sub3, grade3, sub4, grade4, sub5, grade5, sub6, grade6, sub7, grade7,grade);
    fclose(fptr);
         lines();
    printf("\n\nAllowed subjects to record\n\n");

    fptr = fopen("normal student.txt", "r");
    fscanf(fptr, "%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s%s ", sub11, num1, gradee1, sub22, num2, gradee2, sub33, num3, gradee3, sub44, num4, gradee4, sub55, num5, gradee5, sub66, num6, gradee6, sub77, num7, gradee7);
    printf("%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n", sub11, num1, gradee1, sub22, num2, gradee2, sub33, num3, gradee3, sub44, num4, gradee4, sub55, num5, gradee5, sub66, num6, gradee6, sub77, num7, gradee7);
         lines();
    printf("\nenter subjects to register\n\n");
    fclose(fptr);

    fptr = fopen("abdullah ew.txt", "w");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    char subb1[100];
    char registeredSubjects[1000] = "";

    do {
        scanf("%s", subb1);
        if (!strcmp(subb1, "UNR1407")) {
            printf("Academic writing\n");
            if (strstr(registeredSubjects, "Academic_writing") == NULL) {
                fprintf(fptr, "Academic_writing ");
                strcat(registeredSubjects, "Academic_writing ");
            }
        } else if (!strcmp(subb1, "BA216")) {
            printf("Advanced Physics\n");
            if (strstr(registeredSubjects, "Advanced_Physics") == NULL) {
                fprintf(fptr, "Advanced_Physics ");
                strcat(registeredSubjects, "Advanced_Physics ");
            }
        } else if (!strcmp(subb1, "CCS1302")) {
            printf("Problem solving\n");
            if (strstr(registeredSubjects, "Problem_solving") == NULL) {
                fprintf(fptr, "Problem_solving ");
                strcat(registeredSubjects, "Problem_solving ");
            }
        } else if (!strcmp(subb1, "EBA1203")) {
            printf("Calculus I\n");
            if (strstr(registeredSubjects, "CalculusI") == NULL) {
                fprintf(fptr, "CalculusI ");
                strcat(registeredSubjects, "CalculusI ");
            }
        } else if (!strcmp(subb1, "CNC1401")) {
            printf("Entrepreneurship\n");
            if (strstr(registeredSubjects, "Entrepreneurship") == NULL) {
                fprintf(fptr, "Entrepreneurship ");
                strcat(registeredSubjects, "Entrepreneurship ");
            }
        } else if (!strcmp(subb1, "NC133")) {
            printf("Communication skills\n");
            if (strstr(registeredSubjects, "Communication_skills") == NULL) {
                fprintf(fptr, "Communication_skills ");
                strcat(registeredSubjects, "Communication_skills ");
            }
        } else if (!strcmp(subb1, "CCS1001")) {
            printf("Discrete structure\n");
            if (strstr(registeredSubjects, "Discrete_structure") == NULL) {
                fprintf(fptr, "Discrete_structure ");
                strcat(registeredSubjects, "Discrete_structure ");
            }
        } else if (!strcmp(subb1, "0")) {
            break;
        } else {
            printf("\nPlease reenter the subject code\n");
        }
    } while (subb1 != 0);

    fflush(fptr);
    fclose(fptr);
         lines();
         printf("your subjects are :\n");
    ab();
}
/////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void aboqalil (){
  printf("\nWelcome Abdullah Aboqalil \n");
       lines();
    printf("Student result:\n");

    FILE *fptr;
    fptr = fopen("aboqalil.txt", "r");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    float grade[50];
    char sub1[50], sub2[50], sub3[50], sub4[50], sub5[50], sub6[50], sub7[50];
    char grade1[10], grade2[10], grade3[10], grade4[10], grade5[10], grade6[10], grade7[10];
    char num1[100], num2[100], num3[100], num4[100], num5[100], num6[100], num7[100];
    char sub11[10], sub22[10], sub33[10], sub44[10], sub55[10], sub66[10], sub77[10];
    char gradee1[10], gradee2[10], gradee3[10], gradee4[10], gradee5[10], gradee6[10], gradee7[10];
    char numm11;

    //////////////////////////////////////////////////////////////////////////
    fscanf(fptr, " %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s", sub1, grade1, sub2, grade2, sub3, grade3, sub4, grade4, sub5, grade5, sub6, grade6, sub7, grade7, grade);
    printf("%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n %s\n", sub1, grade1, sub2, grade2, sub3, grade3, sub4, grade4, sub5, grade5, sub6, grade6, sub7, grade7,grade);
    fclose(fptr);
         lines();
    printf("\n\nAllowed subjects to record\n\n");

    fptr = fopen("normal student.txt", "r");
    fscanf(fptr, "%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s%s ", sub11, num1, gradee1, sub22, num2, gradee2, sub33, num3, gradee3, sub44, num4, gradee4, sub55, num5, gradee5, sub66, num6, gradee6, sub77, num7, gradee7);
    printf("%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n", sub11, num1, gradee1, sub22, num2, gradee2, sub33, num3, gradee3, sub44, num4, gradee4, sub55, num5, gradee5, sub66, num6, gradee6, sub77, num7, gradee7);
         lines();
    printf("\nenter subjects to register\n\n");
    fclose(fptr);

    fptr = fopen("aboqalil ew.txt", "w");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    char subb1[100];
    char registeredSubjects[1000] = "";

    do {
        scanf("%s", subb1);
        if (!strcmp(subb1, "UNR1407")) {
            printf("Academic writing\n");
            if (strstr(registeredSubjects, "Academic_writing") == NULL) {
                fprintf(fptr, "Academic_writing ");
                strcat(registeredSubjects, "Academic_writing ");
            }
        } else if (!strcmp(subb1, "BA216")) {
            printf("Advanced Physics\n");
            if (strstr(registeredSubjects, "Advanced_Physics") == NULL) {
                fprintf(fptr, "Advanced_Physics ");
                strcat(registeredSubjects, "Advanced_Physics ");
            }
        } else if (!strcmp(subb1, "CCS1302")) {
            printf("Problem solving\n");
            if (strstr(registeredSubjects, "Problem_solving") == NULL) {
                fprintf(fptr, "Problem_solving ");
                strcat(registeredSubjects, "Problem_solving ");
            }
        } else if (!strcmp(subb1, "EBA1203")) {
            printf("Calculus I\n");
            if (strstr(registeredSubjects, "CalculusI") == NULL) {
                fprintf(fptr, "CalculusI ");
                strcat(registeredSubjects, "CalculusI ");
            }
        } else if (!strcmp(subb1, "CNC1401")) {
            printf("Entrepreneurship\n");
            if (strstr(registeredSubjects, "Entrepreneurship") == NULL) {
                fprintf(fptr, "Entrepreneurship ");
                strcat(registeredSubjects, "Entrepreneurship ");
            }
        } else if (!strcmp(subb1, "NC133")) {
            printf("Communication skills\n");
            if (strstr(registeredSubjects, "Communication_skills") == NULL) {
                fprintf(fptr, "Communication_skills ");
                strcat(registeredSubjects, "Communication_skills ");
            }
        } else if (!strcmp(subb1, "CCS1001")) {
            printf("Discrete structure\n");
            if (strstr(registeredSubjects, "Discrete_structure") == NULL) {
                fprintf(fptr, "Discrete_structure ");
                strcat(registeredSubjects, "Discrete_structure ");
            }
        } else if (!strcmp(subb1, "0")) {
            break;
        } else {
            printf("\nPlease reenter the subject code\n");
        }
    } while (subb1 != 0);

    fflush(fptr);
    fclose(fptr);
         lines();
         printf("your subjects are :\n");
    aq();

}
////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void nagham (){
  printf("\nWelcome Nagham Mohamed \n");
       lines();
    printf("Student result:\n");

    FILE *fptr;
    fptr = fopen("nagham.txt", "r");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    float grade[50];
    char sub1[50], sub2[50], sub3[50], sub4[50], sub5[50], sub6[50], sub7[50];
    char grade1[10], grade2[10], grade3[10], grade4[10], grade5[10], grade6[10], grade7[10];
    char num1[100], num2[100], num3[100], num4[100], num5[100], num6[100], num7[100];
    char sub11[10], sub22[10], sub33[10], sub44[10], sub55[10], sub66[10], sub77[10];
    char gradee1[10], gradee2[10], gradee3[10], gradee4[10], gradee5[10], gradee6[10], gradee7[10];
    char numm11;

    //////////////////////////////////////////////////////////////////////////
    fscanf(fptr, " %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s", sub1, grade1, sub2, grade2, sub3, grade3, sub4, grade4, sub5, grade5, sub6, grade6, sub7, grade7, grade);
    printf("%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n %s\n", sub1, grade1, sub2, grade2, sub3, grade3, sub4, grade4, sub5, grade5, sub6, grade6, sub7, grade7,grade);
    fclose(fptr);
         lines();
    printf("\n\nAllowed subjects to record\n\n");

    fptr = fopen("normal student.txt", "r");
    fscanf(fptr, "%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s%s ", sub11, num1, gradee1, sub22, num2, gradee2, sub33, num3, gradee3, sub44, num4, gradee4, sub55, num5, gradee5, sub66, num6, gradee6, sub77, num7, gradee7);
    printf("%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n", sub11, num1, gradee1, sub22, num2, gradee2, sub33, num3, gradee3, sub44, num4, gradee4, sub55, num5, gradee5, sub66, num6, gradee6, sub77, num7, gradee7);
         lines();
    printf("\nenter subjects to register\n\n");
    fclose(fptr);

    fptr = fopen("nagham ew.txt", "w");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    char subb1[100];
    char registeredSubjects[1000] = "";

    do {
        scanf("%s", subb1);
        if (!strcmp(subb1, "UNR1407")) {
            printf("Academic writing\n");
            if (strstr(registeredSubjects, "Academic_writing") == NULL) {
                fprintf(fptr, "Academic_writing ");
                strcat(registeredSubjects, "Academic_writing ");
            }
        } else if (!strcmp(subb1, "BA216")) {
            printf("Advanced Physics\n");
            if (strstr(registeredSubjects, "Advanced_Physics") == NULL) {
                fprintf(fptr, "Advanced_Physics ");
                strcat(registeredSubjects, "Advanced_Physics ");
            }
        } else if (!strcmp(subb1, "CCS1302")) {
            printf("Problem solving\n");
            if (strstr(registeredSubjects, "Problem_solving") == NULL) {
                fprintf(fptr, "Problem_solving ");
                strcat(registeredSubjects, "Problem_solving ");
            }
        } else if (!strcmp(subb1, "EBA1203")) {
            printf("Calculus I\n");
            if (strstr(registeredSubjects, "CalculusI") == NULL) {
                fprintf(fptr, "CalculusI ");
                strcat(registeredSubjects, "CalculusI ");
            }
        } else if (!strcmp(subb1, "CNC1401")) {
            printf("Entrepreneurship\n");
            if (strstr(registeredSubjects, "Entrepreneurship") == NULL) {
                fprintf(fptr, "Entrepreneurship ");
                strcat(registeredSubjects, "Entrepreneurship ");
            }
        } else if (!strcmp(subb1, "NC133")) {
            printf("Communication skills\n");
            if (strstr(registeredSubjects, "Communication_skills") == NULL) {
                fprintf(fptr, "Communication_skills ");
                strcat(registeredSubjects, "Communication_skills ");
            }
        } else if (!strcmp(subb1, "CCS1001")) {
            printf("Discrete structure\n");
            if (strstr(registeredSubjects, "Discrete_structure") == NULL) {
                fprintf(fptr, "Discrete_structure ");
                strcat(registeredSubjects, "Discrete_structure ");
            }
        } else if (!strcmp(subb1, "0")) {
            break;
        } else {
            printf("\nPlease reenter the subject code\n");
        }
    } while (subb1 != 0);

    fflush(fptr);
    fclose(fptr);
         lines();
         printf("your subjects are :\n");
    ng();

}/////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void malak (){
  printf("\nWelcome Malak Ahmed \n");
       lines();
    printf("Student result:\n");

    FILE *fptr;
    fptr = fopen("malak.txt", "r");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    float grade[50];
    char sub1[50], sub2[50], sub3[50], sub4[50], sub5[50], sub6[50], sub7[50];
    char grade1[10], grade2[10], grade3[10], grade4[10], grade5[10], grade6[10], grade7[10];
    char num1[100], num2[100], num3[100], num4[100], num5[100], num6[100], num7[100];
    char sub11[10], sub22[10], sub33[10], sub44[10], sub55[10], sub66[10], sub77[10];
    char gradee1[10], gradee2[10], gradee3[10], gradee4[10], gradee5[10], gradee6[10], gradee7[10];
    char numm11;

    //////////////////////////////////////////////////////////////////////////
    fscanf(fptr, " %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s", sub1, grade1, sub2, grade2, sub3, grade3, sub4, grade4, sub5, grade5, sub6, grade6, sub7, grade7, grade);
   printf("%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n %s\n", sub1, grade1, sub2, grade2, sub3, grade3, sub4, grade4, sub5, grade5, sub6, grade6, sub7, grade7,grade);
    fclose(fptr);
         lines();
    printf("\n\nAllowed subjects to record\n\n");

    fptr = fopen("normal student.txt", "r");
    fscanf(fptr, "%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s%s ", sub11, num1, gradee1, sub22, num2, gradee2, sub33, num3, gradee3, sub44, num4, gradee4, sub55, num5, gradee5, sub66, num6, gradee6, sub77, num7, gradee7);
    printf("%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n", sub11, num1, gradee1, sub22, num2, gradee2, sub33, num3, gradee3, sub44, num4, gradee4, sub55, num5, gradee5, sub66, num6, gradee6, sub77, num7, gradee7);
         lines();
    printf("\nenter subjects to register\n\n");
    fclose(fptr);

    fptr = fopen("malak ew.txt", "w");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    char subb1[100];
    char registeredSubjects[1000] = "";

    do {
        scanf("%s", subb1);
        if (!strcmp(subb1, "UNR1407")) {
            printf("Academic writing\n");
            if (strstr(registeredSubjects, "Academic_writing") == NULL) {
                fprintf(fptr, "Academic_writing ");
                strcat(registeredSubjects, "Academic_writing ");
            }
        } else if (!strcmp(subb1, "BA216")) {
            printf("Advanced Physics\n");
            if (strstr(registeredSubjects, "Advanced_Physics") == NULL) {
                fprintf(fptr, "Advanced_Physics ");
                strcat(registeredSubjects, "Advanced_Physics ");
            }
        } else if (!strcmp(subb1, "CCS1302")) {
            printf("Problem solving\n");
            if (strstr(registeredSubjects, "Problem_solving") == NULL) {
                fprintf(fptr, "Problem_solving ");
                strcat(registeredSubjects, "Problem_solving ");
            }
        } else if (!strcmp(subb1, "EBA1203")) {
            printf("Calculus I\n");
            if (strstr(registeredSubjects, "CalculusI") == NULL) {
                fprintf(fptr, "CalculusI ");
                strcat(registeredSubjects, "CalculusI ");
            }
        } else if (!strcmp(subb1, "CNC1401")) {
            printf("Entrepreneurship\n");
            if (strstr(registeredSubjects, "Entrepreneurship") == NULL) {
                fprintf(fptr, "Entrepreneurship ");
                strcat(registeredSubjects, "Entrepreneurship ");
            }
        } else if (!strcmp(subb1, "NC133")) {
            printf("Communication skills\n");
            if (strstr(registeredSubjects, "Communication_skills") == NULL) {
                fprintf(fptr, "Communication_skills ");
                strcat(registeredSubjects, "Communication_skills ");
            }
        } else if (!strcmp(subb1, "CCS1001")) {
            printf("Discrete structure\n");
            if (strstr(registeredSubjects, "Discrete_structure") == NULL) {
                fprintf(fptr, "Discrete_structure ");
                strcat(registeredSubjects, "Discrete_structure ");
            }
        } else if (!strcmp(subb1, "0")) {
            break;
        } else {
            printf("\nPlease reenter the subject code\n");
        }
    } while (subb1 != 0);

    fflush(fptr);
    fclose(fptr);
         lines();
         printf("your subjects are :\n");
    ma();

}
//////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void malllakk(){
  printf("\nWelcome Malak Mohamed \n");
       lines();
    printf("Student result:\n");

    FILE *fptr;
    fptr = fopen("malllakk.txt", "r");
    if (fptr == NULL) {

        printf("Error opening the file.\n");
        return;
    }

    float grade[50];
    char sub1[50], sub2[50], sub3[50], sub4[50], sub5[50], sub6[50], sub7[50];
    char grade1[10], grade2[10], grade3[10], grade4[10], grade5[10], grade6[10], grade7[10];
    char num1[100], num2[100], num3[100], num4[100], num5[100], num6[100], num7[100];
    char sub11[10], sub22[10], sub33[10], sub44[10], sub55[10], sub66[10], sub77[10];
    char gradee1[10], gradee2[10], gradee3[10], gradee4[10], gradee5[10], gradee6[10], gradee7[10];
    char numm11;

    //////////////////////////////////////////////////////////////////////////
    fscanf(fptr, " %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s", sub1, grade1, sub2, grade2, sub3, grade3, sub4, grade4, sub5, grade5, sub6, grade6, sub7, grade7, grade);
   printf("%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n %s\n", sub1, grade1, sub2, grade2, sub3, grade3, sub4, grade4, sub5, grade5, sub6, grade6, sub7, grade7,grade);
    fclose(fptr);
         lines();
    printf("\n\nAllowed subjects to record\n\n");

    fptr = fopen("normal student.txt", "r");
    fscanf(fptr, "%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s%s ", sub11, num1, gradee1, sub22, num2, gradee2, sub33, num3, gradee3, sub44, num4, gradee4, sub55, num5, gradee5, sub66, num6, gradee6, sub77, num7, gradee7);
    printf("%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n", sub11, num1, gradee1, sub22, num2, gradee2, sub33, num3, gradee3, sub44, num4, gradee4, sub55, num5, gradee5, sub66, num6, gradee6, sub77, num7, gradee7);
         lines();
    printf("\nenter subjects to register\n\n");
    fclose(fptr);

    fptr = fopen("malllakk ew.txt", "w");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    char subb1[100];
    char registeredSubjects[1000] = "";

    do {
        scanf("%s", subb1);
        if (!strcmp(subb1, "UNR1407")) {
            printf("Academic writing\n");
            if (strstr(registeredSubjects, "Academic_writing") == NULL) {
                fprintf(fptr, "Academic_writing ");
                strcat(registeredSubjects, "Academic_writing ");
            }
        } else if (!strcmp(subb1, "BA216")) {
            printf("Advanced Physics\n");
            if (strstr(registeredSubjects, "Advanced_Physics") == NULL) {
                fprintf(fptr, "Advanced_Physics ");
                strcat(registeredSubjects, "Advanced_Physics ");
            }
        } else if (!strcmp(subb1, "CCS1302")) {
            printf("Problem solving\n");
            if (strstr(registeredSubjects, "Problem_solving") == NULL) {
                fprintf(fptr, "Problem_solving ");
                strcat(registeredSubjects, "Problem_solving ");
            }
        } else if (!strcmp(subb1, "EBA1203")) {
            printf("Calculus I\n");
            if (strstr(registeredSubjects, "CalculusI") == NULL) {
                fprintf(fptr, "CalculusI ");
                strcat(registeredSubjects, "CalculusI ");
            }
        } else if (!strcmp(subb1, "CNC1401")) {
            printf("Entrepreneurship\n");
            if (strstr(registeredSubjects, "Entrepreneurship") == NULL) {
                fprintf(fptr, "Entrepreneurship ");
                strcat(registeredSubjects, "Entrepreneurship ");
            }
        } else if (!strcmp(subb1, "NC133")) {
            printf("Communication skills\n");
            if (strstr(registeredSubjects, "Communication_skills") == NULL) {
                fprintf(fptr, "Communication_skills ");
                strcat(registeredSubjects, "Communication_skills ");
            }
        } else if (!strcmp(subb1, "CCS1001")) {
            printf("Discrete structure\n");
            if (strstr(registeredSubjects, "Discrete_structure") == NULL) {
                fprintf(fptr, "Discrete_structure ");
                strcat(registeredSubjects, "Discrete_structure ");
            }
        } else if (!strcmp(subb1, "0")) {
            break;
        } else {
            printf("\nPlease reenter the subject code\n");
        }
    } while (subb1 != 0);

    fflush(fptr);
    fclose(fptr);
         lines();
         printf("your subjects are :\n");
    ml();


}
///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void mahdy (){
  printf("\nWelcome Mahdy Omar \n");
       lines();
    printf("Student result:\n");

    FILE *fptr;
    fptr = fopen("mahdy.txt", "r");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    float grade[50];
    char sub1[50], sub2[50], sub3[50], sub4[50], sub5[50], sub6[50], sub7[50];
    char grade1[10], grade2[10], grade3[10], grade4[10], grade5[10], grade6[10], grade7[10];
    char num1[100], num2[100], num3[100], num4[100], num5[100], num6[100], num7[100];
    char sub11[10], sub22[10], sub33[10], sub44[10], sub55[10], sub66[10], sub77[10];
    char gradee1[10], gradee2[10], gradee3[10], gradee4[10], gradee5[10], gradee6[10], gradee7[10];
    char numm11;

    //////////////////////////////////////////////////////////////////////////
    fscanf(fptr, " %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s", sub1, grade1, sub2, grade2, sub3, grade3, sub4, grade4, sub5, grade5, sub6, grade6, sub7, grade7, grade);
  printf("%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n %s\n", sub1, grade1, sub2, grade2, sub3, grade3, sub4, grade4, sub5, grade5, sub6, grade6, sub7, grade7,grade);
    fclose(fptr);
         lines();
    printf("\n\nAllowed subjects to record\n\n");

    fptr = fopen("preqoust.txt", "r");
    fscanf(fptr, "%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s%s ", sub11, num1, gradee1, sub22, num2, gradee2, sub33, num3, gradee3, sub44, num4, gradee4, sub55, num5, gradee5, sub66, num6, gradee6, sub77, num7, gradee7);
    printf("%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n", sub11, num1, gradee1, sub22, num2, gradee2, sub33, num3, gradee3, sub44, num4, gradee4, sub55, num5, gradee5, sub66, num6, gradee6, sub77, num7, gradee7);
         lines();
    printf("\nenter subjects to register\n\n");
    fclose(fptr);

    fptr = fopen("mahdy ew.txt", "w");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    char subb1[100];
    char registeredSubjects[1000] = "";

    do {
        scanf("%s", subb1);
        if (!strcmp(subb1, "UNR1407")) {
            printf("Academic writing\n");
            if (strstr(registeredSubjects, "Academic_writing") == NULL) {
                fprintf(fptr, "Academic_writing ");
                strcat(registeredSubjects, "Academic_writing ");
            }
        } else if (!strcmp(subb1, "BA216")) {
            printf("Advanced Physics\n");
            if (strstr(registeredSubjects, "Advanced_Physics") == NULL) {
                fprintf(fptr, "Advanced_Physics ");
                strcat(registeredSubjects, "Advanced_Physics ");
            }
        } else if (!strcmp(subb1, "CCS1302")) {
            printf("Problem solving\n");
            if (strstr(registeredSubjects, "Problem_solving") == NULL) {
                fprintf(fptr, "Problem_solving ");
                strcat(registeredSubjects, "Problem_solving ");
            }
        } else if (!strcmp(subb1, "BA003")) {
            printf("Calculus 0\n");
            if (strstr(registeredSubjects, "Calculus0") == NULL) {
                fprintf(fptr, "Calculus0 ");
                strcat(registeredSubjects, "Calculus0 ");
            }
        } else if (!strcmp(subb1, "CNC1401")) {
            printf("Entrepreneurship\n");
            if (strstr(registeredSubjects, "Entrepreneurship") == NULL) {
                fprintf(fptr, "Entrepreneurship ");
                strcat(registeredSubjects, "Entrepreneurship ");
            }
        } else if (!strcmp(subb1, "NC133")) {
            printf("Communication skills\n");
            if (strstr(registeredSubjects, "Communication_skills") == NULL) {
                fprintf(fptr, "Communication_skills ");
                strcat(registeredSubjects, "Communication_skills ");
            }
        } else if (!strcmp(subb1, "CCS1001")) {
            printf("Discrete structure\n");
            if (strstr(registeredSubjects, "Discrete_structure") == NULL) {
                fprintf(fptr, "Discrete_structure ");
                strcat(registeredSubjects, "Discrete_structure ");
            }
        }

        else if (!strcmp(subb1, "0")) {
            break;
        } else {
            printf("\nPlease reenter the subject code\n");
        }
    } while (subb1 != 0);

    fflush(fptr);
    fclose(fptr);
         lines();
         printf("your subjects are :\n");
    mh();


}
///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void shawky (){

int total = 12;
    int counter = 0;
    printf("\nWelcome Mahmoud Shawky \n");
         lines();
    printf("Student result : \n");
    FILE* fptr;
    fptr = fopen("shawky.txt", "r");
    float grade[50];
    char sub1[50], sub2[50], sub3[50], sub4[50], sub5[50], sub6[50], sub7[50];
    char grade1[10], grade2[10], grade3[10], grade4[10], grade5[10], grade6[10], grade7[10];
    char num1[100], num2[100], num3[100], num4[100], num5[100], num6[100], num7[100];
    char sub11[10], sub22[10], sub33[10], sub44[10], sub55[10], sub66[10], sub77[10];
    char gradee1[10], gradee2[10], gradee3[10], gradee4[10], gradee5[10], gradee6[10], gradee7[10];

    //////////////////////////////////////////////////////////////////////////
    fscanf(fptr, " %s %s %s %s %s %s %s %s %s %s %s %s %s%s %s", sub1, grade1, sub2, grade2, sub3, grade3, sub4, grade4, sub5, grade5, sub6, grade6, sub7, grade7, grade);
    printf("%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n %s\n", sub1, grade1, sub2, grade2, sub3, grade3, sub4, grade4, sub5, grade5, sub6, grade6, sub7, grade7, grade);
    fclose(fptr);
         lines();
    printf("\n\n Allowed subjects to record\n\n");

    fptr = fopen("faield.txt", "r");
    fscanf(fptr, "%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s%s ", sub11, num1, gradee1, sub22, num2, gradee2, sub33, num3, gradee3, sub44, num4, gradee4, sub55, num5, gradee5, sub66, num6, gradee6, sub77, num7, gradee7);
    printf("%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s\n%s %s %s \n ", sub11, num1, gradee1, sub22, num2, gradee2, sub33, num3, gradee3, sub44, num4, gradee4, sub55, num5, gradee5, sub66, num6, gradee6, sub77, num7, gradee7);
         lines();
    printf("\n enter subjects to register\nnote: you can't register more than 12 hours credit. \n");
    fptr = fopen("shawky ew.txt", "w");

    char subb1[100];
    char registeredSubjects[100] = "";

    do {
        scanf("%s", subb1);
        if (strcmp(subb1, "0") == 0) {
            break;
        }
        else if (strstr(registeredSubjects, subb1) != NULL) {
            printf("You have already registered for this subject.\n");
            continue;
        }
        else if (strcmp(subb1, "UNR1407") == 0) {
            printf("Academic writing\n");
            fprintf(fptr, "Academic_writing\n");
            counter++;
            counter++;
        }
        else if (strcmp(subb1, "BA216") == 0) {
            printf("Physics\n");
            fprintf(fptr, "Physics\n");
            counter++;
            counter++;
            counter++;
        }
        else if (strcmp(subb1, "CCS1302") == 0) {
            printf("Problem solving\n");
            fprintf(fptr, "Problem_solving\n");
            counter++;
            counter++;
            counter++;
        }
        else if (strcmp(subb1, "EBA1203") == 0) {
            printf("CalculusI\n");
            fprintf(fptr, "Calculus_I");
            counter++;
            counter++;
            counter++;
        }
        else if (strcmp(subb1, "CNC1401") == 0) {
            printf("Entrepreneurship\n");
            fprintf(fptr, "Entrepreneurship\n");
            counter++;
            counter++;
        }
        else if (strcmp(subb1, "NC133") == 0) {
            printf("Communication skills\n");
            fprintf(fptr, "Communication_skills\n");
            counter++;
            counter++;
        }
        else if (strcmp(subb1, "CCS1001") == 0) {
            printf("Discrete structure\n");
            fprintf(fptr, "Discrete_structure\n");
            counter++;
            counter++;
            counter++;
        }
        else {
            printf("\nInvalid subject code. Please reenter the subject code\n");
            continue;
        }

        strcat(registeredSubjects, subb1);
        strcat(registeredSubjects, " ");

        if (counter > total) {
            printf("Failed to register. You have exceeded the maximum credit hours.\n");
            break;
        }

    } while (1);

    fclose(fptr);
         lines();
         if (counter > total) {
            printf("Failed to register. You have exceeded the maximum credit hours.\n");

        }

         else {printf("youre subjects are :\n");
    sk();}



}


///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    system("color 5f");
    printf("                            Arab Academy for Science ,Technology and Maritime Transport\n");
    printf("                                 college of computing and information technology\n");
    printf("                                                  computer science.\n");
    int select;
    printf("for student register press 1 \n");
    printf("for GPA calculator press 2 \n");
    printf("for staff press 3 \n");
    printf("to close the program press any other key\n");
    scanf("%d",&select);
    if (select==1){

    int id;
    int bin;
    FILE *ptr;
  printf("Enter student ID : ");
  scanf("%d",&id);
  printf("\nEnter student bin code : ");
  scanf("%d",&bin);
  if(id==221008111&&bin==4641){
    sjoud();
  }
 else if (id==221008222&&bin==8182){
    hassan();
  }
  else if (id==221008333&&bin==2004){
    esllam();
  }
  else if(id==221008444&&bin==1111){
    abdullah();
  }

  else if(id==221008121&&bin==1212){
    nagham();
  }
  else if (id==221008777&&bin==1225){
    malak();
  }
    else if(id==221008666&&bin==5512){
        aboqalil();
    }
  else if(id==221008888&&bin==6010){
    shawky();
  }
  else if (id==221008999&&bin==2008){
    mahdy();
  }
  else if(id==221088121&&bin==8888){
    malllakk();
  }
  else {printf("No student found"); }

return 0;
}
else if (select==2){
     int numcourses;
    printf("Enter number of courses: ");
    scanf("%d", &numcourses);
    char grades[numcourses];
    double credit[numcourses];
    for (int i = 0; i < numcourses; i++) {
     printf("Enter grade for course %d (A, A+, A-, B, B+, B-, C, C+, C-, D, D+, D-, F): ", i + 1);
    scanf(" %c", &grades[i]);
    printf("enter credit hours for course %d: ", i + 1);
        scanf("%lf", &credit[i]);
    }

    double gpa = calculater(numcourses, grades, credit);
      if (gpa != -1.0) {
        printf("\nGPA: %.2f\n", gpa);
    }

    return 0;
}
else if (select==3){
        staff();
    }

}




