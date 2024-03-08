//case study of banking system using c-programming
#include <stdio.h>

int main() {
  char con;
  int age = 19, choice, pin = 1234, initial_deposit = 10000, id = 3304,
      id_check, pin_check;
  unsigned int aadhaar_num = 987654321;
  int deposit, withdraw;
  char name; 
  printf("********WELCOME TO ONLINE BANKING**************\n");
  while (1) {

    printf("\nWelcome to Simple Banking System\n");
    printf("\n1. Create a new account \n");
    printf("2. Display account information and current balance \n");
    printf("3. Deposit \n");
    printf("4. Withdraw \n");
    printf("5. Logout or press (ctrl+c) \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar(); 

    switch (choice) {
    case 1:
      printf("Enter your name (single character): ");
      scanf(" %c", &name); 
      printf("Enter your age: ");
      scanf("%d", &age);
      if (age <= 0) {
        printf("INVALID AGE \n");
        break;
      }
      printf("Enter your Aadhaar Number: ");
      scanf("%d", &aadhaar_num);
      if (aadhaar_num == 123456789) {
        printf("Account is already exist\n");
      } else {

        printf("Enter the initial deposit amount: Rs.");
        scanf("%d", &initial_deposit);
        if (initial_deposit < 5000) {
          printf("pay minimun balance of Rs.5000\n");
        } else {
          printf("Signup your account!\n");
          printf("Your Customer ID: 3304\n");
          printf("Create 4 digit password: ");
          scanf("%d", &pin);
          printf("CAUTION: Do not share your password with anyone! \n");
          printf("Account is created successfully! \n");
        }
      }
      break;
    case 2:
      printf("Enter your Customer ID: ");
      scanf("%d", &id_check);
      if (id == id_check) {
        printf("Enter your 4 digit password: ");
        scanf("%d", &pin_check);
        if (pin == pin_check)
          ;
        {
          printf("Customer ID %d\n", id);
          printf("Customer name: %c\n", name);
          printf("Age: %d\n", age);
          printf("Aadhaar Number: %d \n", aadhaar_num);
          printf("current balnce: %d \n", initial_deposit);
        }
      } else {
        printf("INVALID Credentials Try Again!\n");
      }

      break;
    case 3:
      printf("Enter amount to deposit: Rs.");
      scanf("%d", &deposit);
      if(deposit > 0){
        printf("Amount is deposited successfully\n");
        initial_deposit += deposit;
        printf("Your current balance is: Rs.%d\n", initial_deposit);
      }
      else{
        printf("INVALID AMOUNT\n");
      }
      break;
    case 4:
      printf("Enter your Customer ID: ");
      scanf("%d", &id_check);
      if (id == id_check) {
        printf("Enter your 4 digit password: ");
        scanf("%d", &pin_check);
        if (pin == pin_check){
          printf("Enter the amount to withdraw: Rs.");
          scanf("%d", &withdraw);
          if(withdraw > 0){
            if (withdraw < initial_deposit){
              printf("Amount is withdrawn successfully\n");
              initial_deposit -= withdraw;
              printf("Your current balance is: Rs.%d\n", initial_deposit);
            }
            else{
              printf("Money in your account is not enough to withdraw\n");
            }
          }
          else{
            printf("INVALID AMOUNT\n");
          }
        }
      } else {
        printf("INVALID Credentials Try Again!\n");
      }

      break;
    case 5:
      printf("You have successfully logged out!\n");
      break;
    default:
      printf("Invalid! Try Again!\n");
    }

   
    while ((con = getchar()) != '\n' && con != EOF)
      ;

    printf("Do you want to continue? If yes, enter 'y' or 'Y': ");
    scanf("%c", &con);
    if (con == 'y' || con == 'Y') {
      continue;
    } else {
      printf("try again!");
      break;
    }
  }

  return 0;
}