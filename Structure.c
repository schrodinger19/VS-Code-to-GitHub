#include<stdio.h>
#include <string.h>


// struct myStructure
// {
//     int mynum;
//     char myname;
//     char mystring[50];
// };

// int main(){

    // struct myStructure S1;
    // S1.mynum = 13;
    // S1.myname = 'B';
    // strcpy(S1.mystring, "Shubham");
    

    // printf("%d\n", S1.mynum);
    // printf("%c\n", S1.myname);
    // printf("%s\n", S1.mystring);

//     struct myStructure S1 = {14, 'B', "Shubham Maurya"};
//     struct myStructure S2;

//     S2 = S1;

//     S2.mynum = 35;
//     S2.myname = 'S';
//     strcpy(S2.mystring, "Maurya Shubham");

    

    
    

//     printf("%d %c %s\n", S2.mynum, S2.myname, S2.mystring);
//     printf("%d %c %s\n", S1.mynum, S1.myname, S1.mystring);
    

    
// }


// struct Car
// {
//     char brand[50];
//     char name[50];
//     int year;

// };


struct MyFriends
{
    char name[50];
    char nickname[50];
    int age;
};


int main(){


    struct MyFriends Bhaumik = {"Bhaumik", "Billu", 20};
    struct MyFriends Sourav = {"Sourav", "Rizzler", 21};
    struct MyFriends Sowmya = {"Sowmya", "Penguin", 20};

    strcpy(Bhaumik.name, "Bhaumik" );
    strcpy(Bhaumik.nickname, "The OG");
    Bhaumik.age = 21;


    printf("Here are the details of my Friends:\n");
    printf("%s, %s, %d\n", Bhaumik.name, Bhaumik.nickname, Bhaumik.age);
    printf("%s, %s, %d\n", Sourav.name, Sourav.nickname, Sourav.age);
    printf("%s, %s, %d\n", Sowmya.name, Sowmya.nickname, Sowmya.age);

    // struct Car car1 = {"BMW", "XF5", 1998};
    // struct Car car2 = {"Audi", "FG8", 2004};
    // struct Car car3 = {"Toyota", "TX1", 2018};

    // printf("details of the cars are as bellow:\n");
    // printf("%s %s %d\n", car1.brand, car1.name, car1.year);
    // printf("%s %s %d\n", car2.brand, car2.name, car2.year);
    // printf("%s %s %d\n", car3.brand, car3.name, car3.year);
    
    
}
