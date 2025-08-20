#include <stdio.h>

int main() 
{
     int language_choice;
     int recharge_choice;

    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");
    printf("Enter your choice: ");
    scanf("%d", &language_choice);

    switch (language_choice) 
        {
           case 1: // English
               printf("\nPress 1 for Internet Recharge\n");
               printf("Press 2 for Top-up Recharge\n");
               printf("Press 3 for Special Recharge\n");
               printf("Enter your choice: ");
               scanf("%d", &recharge_choice);

            switch (recharge_choice) 
             {
                case 1:
                    printf("You have successfully done an Internet Recharge.\n");
                    break;
                case 2:
                    printf("You have successfully done a Top-up Recharge.\n");
                    break;
                case 3:
                    printf("You have successfully done a Special Recharge.\n");
                    break;
                default:
                    printf("Invalid recharge choice.\n");
              }
            break;

         case 2: // Hindi
            printf("\nInternet Recharge ke liye 1 dabaiye\n");
            printf("Top-up Recharge ke liye 2 dabaiye\n");
            printf("Special Recharge ke liye 3 dabaiye\n");
            printf("Enter your choice: ");
            scanf("%d", &recharge_choice);

            switch (recharge_choice) 
            {
                case 1:
                    printf("Aapne safalta purvak Internet Recharge kiya hai.\n");
                    break;
                case 2:
                    printf("Aapne safalta purvak Top-up Recharge kiya hai.\n");
                    break;
                case 3:
                    printf("Aapne safalta purvak Special Recharge kiya hai.\n");
                    break;
                default:
                    printf("Galat recharge vikalp.\n");
            }
            break;

         case 3:
         printf("\nઇન્ટરનેટ રીચાર્જ માટે 1 દબાવો .\n");
            printf("ટોપ-અપ રીચાર્જ માટે 2 દબાવો . \n");
            printf("સ્પેશિયલ રીચાર્જ માટે 3 દબાવો.  \n");
            printf("તમારી પસંદ દાખલ કરો(1-3) : ");
            scanf("%d", &recharge_choice);

            switch (recharge_choice) 
            {
                case 1:
                    printf("તમે સફળતાપૂર્વક ઇન્ટરનેટ રીચાર્જ કર્યું છે .\n");
                    break;
                case 2:
                    printf("તમે સફળતાપૂર્વક ટોપ-અપ રીચાર્જ કર્યું છે.\n");
                    break;
                case 3:
                    printf("તમે સફળતાપૂર્વક સ્પેશિયલ રીચાર્જ કર્યું છે.\n");
                    break;
                default:
                    printf("ખોટો વિકલ્પ  પસંદ કરેલ છે !.\n");
            }
            break;

           default:
            printf("Invalid language choice.\n");
        }

    return 0;
}
