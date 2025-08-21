#include <stdio.h>

int main() 
{
     int language_choice;
     int recharge_choice;

    printf("Press 1 for English\n");
    printf("हिन्दी के लिए 2 दबाए  । \n");
    printf("ગુજરાતી માટે 3 દબાવો.\n");
    printf("Enter your choice: ");
    scanf("%d", &language_choice);

    switch (language_choice) 
        {
           case 1: 
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

         case 2: 
            printf("\nइंटरनेट रिचार्ज के लिए 1 दबाए । \n");
            printf("टॉप-अपरिचार्ज के लिए 2 दबाए । \n");
            printf("स्पेशल रिचार्ज के लिए 3 दबाए । \n");
            printf("अपनी पसंद दाखिल कीजिए : ");
            scanf("%d", &recharge_choice);

            switch (recharge_choice) 
            {
                case 1:
                    printf("आपने सफलतापूर्वक इंटरनेट रिचार्ज कर लिया है । \n");
                    break;
                case 2:
                    printf("आपने सफलतापूर्वक टॉप-अप रिचार्ज कर लिया है। \n");
                    break;
                case 3:
                    printf("आपने सफलतापूर्वक स्पेशल रिचार्ज कर लिया है । \n");
                    break;
                default:
                    printf("गलत  रिचार्ज वीकल्प । \n");
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
