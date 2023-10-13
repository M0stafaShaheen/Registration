#include<stdio.h>
#include<string.h>

/// make complex data type of users ( name & password )
struct map{
char name[30];
char password[30];
}users[100];

/// variables
int count = 0 ;
char user_name[30] ;
char password[30] ;
char c ;

/// Login Function
  void Login()
  {
    printf("Please Enter UserName : ");
    scanf("%s" , &user_name) ;
    strcpy(user_name , &user_name);
    printf("Please Enter Password : ") ;
    scanf("%s" ,&password) ;
    strcpy(password , &password) ;

    int found = 0; /// flag to check if user is already founded
    for(int i=0 ; i<100 ; i++)
    {
        if((users[i].name == user_name) && (users[i].password == password))
        {
            found = 1 ;
            break ;
        }
    }

    if(found == 1)
    {
        printf("Welcome To Your Account") ;
    }
    else
    {
        printf("Your UserName Or Your Password Is False") ;
    }
  }

int main()
{

int count = 0 ; /// Variable to Count the number of users

/// check if the user have account or not ?
printf("Are You Have An Account(Y/N)? ");
scanf("%c" , &c) ;

if(c =='Y' || c == 'y')
{
    /// Call Login Function
  Login();
}

///Register
else
{
    char new_user_name[30] ;
    char new_password[30] ;
    printf("Enter your UserName To Regeister : ");
    scanf("%s",&new_user_name) ;
    strcpy(users[count].name , &new_user_name) ;
    printf("Enter Your Password : ") ;
    scanf("%s" , &new_password) ;
    strcpy(users[count].password , &password) ;
    printf("%s" , "Please Login  : \n");
    /// After Registration Go To Login
    Login();
    count++;
}

    return 0;
}
