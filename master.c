#include <stdio.h>
#include <stdbool.h>


int main() {

    // Types of variables ::

    //==============> Entier (int / long) <================

    int age; // declartion 
    age = 18; // initialization
    int yearOfGradtion = 2022; // declartion and initialization
    int ageofGradution;
    int yearofbirth = 2004;
    int currentyear = 2022;
    int salaire = 70000;
    int salaire_annuel;
    int a=10 ,b=4 ;
    int div, rest;

    int score = 100; // Integer (< 6)
    printf("my score is : %d\n" , score);
    long score2 = 78157271; // long (> 5)
    printf("My score is : %d \n", score2);

    //==============> caractere / chaine de caractere (char) <================

    char FirstNameLetter = 'R'; // single char
    char FullName[] = "Rabie"; // array of chars 

    printf("The first letter in my name is : %c \n", FirstNameLetter);
    printf("My full name is : %s\n", FullName);

    //=============> Reel (float) <================

    float FloatNumber = 3.03; // 6 to 7 digits 
    double DouleNumber = 7.0856444645600004; // up to 16 digits
    
    printf("My float number is : %f\n", FloatNumber);
    printf("My double number is : %lf\n", DouleNumber);

    //==============> Booleans (true / false) <================

    bool isTrue = true;
    printf("%d\n", isTrue);
    bool isFalse = false;
    printf("%d\n", isFalse);

    //==============> Les operateurs <================

    ageofGradution = yearOfGradtion - yearofbirth;   //soustraction
    printf("My age when a graduted was : %d\n",ageofGradution);
    currentyear = ageofGradution + yearofbirth;    //addition
    printf("The current year is : %d \n",currentyear);
    salaire_annuel  = salaire * 12;       //multiplication
    printf("Your annual salary is : %d\n",salaire_annuel);
    div = a / b ;     // divise le premier opérande par le second.
    printf("le resultat de la division est : %d \n",div);
    rest = a % b ;      // renvoie le reste lorsque le premier opérande est divisé par le second
    printf("le rest de la division est : %d \n",rest);
    
    //==============> Les conditions <================
    if (salaire_annuel > 120000 )  //condition simple (IF)
       printf("i will maybe buy a car \n");
    

    if (ageofGradution < 18) //condition alternative (else)
       printf("i will finish my studies in Poland");
    else printf("la fac is the way\n");
    
    
    if (currentyear > 2025 && salaire_annuel > 12000)  //condition imbrique (else if)
       printf("gasoil may get sheeper when i buy my car \n");
    
    else if (currentyear=2024 || salaire_annuel < 12000)
       printf("i dont think gasoil will get any sheeper \n");
    
    else printf("i wont buy a car \n");
    
    int User;
    printf("Veileur entrer votre Usertag:");
    scanf("%d",&User);
    
    switch (User) 
    {
    case 1 : printf("you can do it Rabie");
    
        break;
    
    case 2 : printf("Work hard salma , its not over yet");
      
        break;
    
    case 3 : printf("Take it seriously , you only have one shot");

       break;
    
    default: printf("user inconnu");
        break;
    }
    
    
    
  

       



    return 0;
};