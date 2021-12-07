 //Declaring header files
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

//Declaring Variables
int qualifyinground();
int question1();
int question2();
int question3();
int mainround();
int mainroundq1();
int mainroundq2();
int mainroundq3();
int mainroundq4();
int mainroundq5();
int mainroundq6();
int mainroundq7();
int mainroundq8();
int mainroundq9();
int mainroundq10();
int mainroundq11();
int mainroundq12();
int mainroundq13();
int mainroundq14();
int mainroundq15();
int mainroundq16();
int mainroundq17();
int mainroundq18();
int mainroundq19();
int mainroundq20();

//The main function
int main()
{
	char option=' ';
	int qualifier;
	int mainroundfunction;
	char enter;
    
	mainmenu: //label used for for returning to main menu.
	printf("\t\t\t==============================\n");
	printf("\t\t\tWHO WANTS TO BE A MILLIONAIRE?\n");
	printf("\t\t\t==============================\n");
	printf("\t\t\t     Welcome to the game!\n");
	printf("\t\t\tPress 's' to start the game.\n");
	printf("\t\t\tPress 'e' to exit the game.\n");
	printf("\t\t\tPress 'i' for game instructions\n");
	option = getche(); //getche function used for the option to perform a specific task and will only require user to only press the alpha keys.
	system("cls");
	switch(option)
	{
		case's':      
		    //Code for the game.It will also check wether the user has qualified to the main round or not.It will also check wether the user has answered all the answers in the main round correctly.
			printf("\t\t\t\t********************************\n");
			printf("\t\t\t\t        Qualifying Round      \n"); 
			printf("\t\t\t\t********************************\n\n");	
			if(qualifyinground())
			{
				system("cls");//Will clear the window and show a new window in the prompt.
				if(mainround())
				{
					system("cls");
					goto mainmenu; //This is the code by which my code will redirect the user back to the main menu when prompted.
				}
				else
				{
					system("cls");
					goto mainmenu;
				}  	          
			}
			else
			{
				system("cls");
				goto mainmenu;   
			} 
			break;


		case 'i':
			printf("\t\t======================\n");
			printf("\t\t     Instructions\n");
			printf("\t\t======================\n");
			printf(" 1. To play the game, first you have to qualify for the main round by playing the qualifying round.\n 2. You have to answer atleast 2 out of 3 questions correctly to qualify for the main round.\n 3. You have to answer all the questions in the main round correctly.\n 4. In order to give the answers you have to press the keys according to the options displayed such as A,B,C or D.\n 5.Now go on and enjoy your game.\n\t\t      THANK YOU!!\n");
			printf("Press any key to return to the main menu.\n");
			{
			  enter=getche();
		      if(enter>=0 && enter<=128)
		     {
			   system("cls");
			   goto mainmenu;
		     }	
			}
			break;
	
		case'e':
			exit(1);
			break;
			
		 default:
		 printf("Invalid option.");
		 break;	
	}
	return 0;
}

//Qualifying Validator function
int qualifyinground() 
{   
	int option;
	char enter;
	
  
	if(question1()) 
	{   
   	   	if(question2() || question3()) //If question1 of the qualifying round is correct then either question2 or question3 should be correct.
		{	
			printf("Congrats! You have qualified for the main round.\n");
   	    }
    
		printf("Press any key to continue");
		enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}   
		return 1; // This code will tell the function of qualifying round called in the if condition in the main function wether it is true or not.
	}
   
	else if(question2()) //If question1 is not correct of qualifying round then both question2 and question3 should be correct.
	{
		system("cls");
		if(question3())
		{
			system("cls");
			printf("Congrats! You have qualified to the main round.\n");
		}
    
		printf("Press any key to continue");
		enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}
		return 1;//This code will tell the function of qualifying round called in the if condition in the main function wether it is true or not.
	}

	else
	{	 
		printf("Press any key to return to the main menu");
		enter=getche();
		if(enter>=0 && enter<=128)
		{
			// Coding to return the user back to the main menu.
			main();             
			system("cls");
		}
		return 0; //This code will tell the function of qualifying round called in the if condition in the main function wether it is true or not.
	}
}

//Function for the 1st question in qualifying round.
int question1() 
{  
	char answer=' ';
	char enter;
    
	
	printf("\t\t\t\t================================\n");
    printf("\t\t\t\t*******Qualifying Round 1*******\n");
    printf("\t\t\t\t================================\n");
    
	printf("What is the Capital of Pakistan?\n\n");
	printf("A) Islamabad \t\t\tB) Karachi \n\nC) Peshawar \t\t\tD) Quetta \n\n");
	printf("Enter your Answer : ");
	answer=getch();
	if(answer=='a' || answer=='A')
	{
		printf("\nYour answer is correct : A) Islamabad\n\n");
		printf("The present Capital of Pakistan is Islamabad.\n");
	
		printf("Press any key to continue");
	    enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}
		return 1;
    }
      
	else
	{
		printf("The correct answer is A) Islamabad\n");
		printf("The present Capital of Pakistan is Islamabad.\n");
	
		printf("Press any key to continue");
	    enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}
		return 0;
	}  
	return answer;
}

//Function for the 2nd question in qualifying round.
int question2()
{
    char answer=' ';
    char enter=' ';
	printf("\t\t\t\t********************************\n");
	printf("\t\t\t\t        Qualifying Round      \n"); 
	printf("\t\t\t\t********************************\n\n");	
  
    printf("\t\t\t\t================================\n");
    printf("\t\t\t\t*******Qualifying Round 2*******\n");
    printf("\t\t\t\t================================\n");

    printf("What was the first Capital of Pakistan?\n\n");
    printf("A) Islamabad\t\t\tB) Karachi\n\nC) Peshawar\t\t\tD) Quetta\n\n");
    printf("Enter your Answer : ");
    answer=getche();
    if(answer=='B' || answer=='b')
    {
		printf("\nYour answer is correct : B) Karachi\n\n");
		printf("Karachi was the first Capital of Pakistan before it was changed to Islamabad on 14 August 1967.\n");
    
		printf("Press any key to continue");
	    enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}
		return 1;
    }
    else
    {
		printf("\nThe correct answer is B) Karachi\n");
		printf("Karachi was the first Capital of Pakistan before it was changed to Islamabad on 14 August 1967.\n");
    
		printf("Press any key to continue");
	    enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}
		return 0;
    }
	return answer;
}

//Function for the 3rd question in qualifying round.
int question3()
{
    int answer=' ';
    char enter=' ';
	printf("\t\t\t\t********************************\n");
	printf("\t\t\t\t        Qualifying Round      \n"); 
	printf("\t\t\t\t********************************\n\n");	
  
    printf("\t\t\t\t================================\n");
    printf("\t\t\t\t*******Qualifying Round 3*******\n");
    printf("\t\t\t\t================================\n");

    printf("When did Pakistan win the ODI Cricket World Cup?:\n\n");
    printf(" A) 1996\t\t\t B) 1999 \n\n C) 1987\t\t\t D) 1992\n\n");
    printf("Enter your Answer : ");
    
    answer=getche();
	
    if(answer=='d' || answer=='D')
    {
		printf("\nYour answer is correct : D) 1992\n\n");
		printf("Pakistan won the ODI Cricket World Cup in the year 1992 under the captaincy of their current Prime Minister Imran Khan\n");
    
		printf("Press any key to continue");
	    enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}
		return 1;
    }
    else
    {
    	printf("\nThe answer is incorrect.\n");
		printf("Pakistan won the ODI Cricket World Cup in the year 1992 under the captaincy of their current Prime Minister Imran Khan\n");
	
		printf("Press any key to continue");
	    enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}	
		return 0;
    }
    return answer;
}

//Function for the main round which also checks wether the questions 
int mainround()
{
    char enter=' ';

    if (mainroundq1() && mainroundq2() && mainroundq3() && mainroundq4() && mainroundq5() && mainroundq6() && mainroundq7() && mainroundq8() && mainroundq9() && mainroundq10() && mainroundq11() && mainroundq12() && mainroundq13() && mainroundq14() && mainroundq15() && mainroundq16() && mainroundq17() && mainroundq18() && mainroundq19() && mainroundq20() )
    {   
	    printf("=======================================================================================================\n"); 
    	printf("\t\t\t\t\tCongratulations, YOU ARE A MILLIONAIRE!\n");
    	printf("\t\t\t\t\t The Amount you won is: PKR 1,000,000\n");
    	printf("=======================================================================================================\n");
    	
    	printf("Press any key to continue");
	    enter=getche();
   	    if(enter>=0 && enter<=128)
   	    {
   	      	system("cls");
   	        main();  
        }
		return 1;
    }
     
    else
	{	 	
    	printf("Press any key to go to the main menu");
	    enter=getche();
        if(enter>=0 && enter<=128)
   	    {   	       	 	 	   
   	        system("cls");
   	        main();        
	    }   	    
		return 0;
    }
}

//Function for the 1st round.
int mainroundq1()
{
	char answer=' ';
	char enter=' ';
	printf("\n---------------------------------------------------- ROUND 1 ----------------------------------------------------\n\n");
    printf("Who is most successful captain in ODI cricket?\n\n");
    printf("A) MS Dhoni \t\t\t\tB) Ricky Ponting\n\nC) Stephen Fleming\t\t\tD) Kumar Sangakarra\n\n");
    printf("Enter your Answer : ");
    answer=getche();
    if (answer=='b' || answer=='B')
    {
        printf("\nYour answer is correct: B) Ricky Ponting\n\n");
        
		printf("The most successful captain in ODI cricket is Ricky Ponting, who lead his side to victory in 165 ODIs.\n\n");
		printf("You have won PKR 1000\n");
        printf("Press any key to continue");
        
	    enter=getche();
	    
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}
        return 1;
    }
	else
    {
        printf("\nThe correct answer is : B) Ricky Ponting\n\n");        
        printf("The most successful captain in ODI cricket is Ricky Ponting, who lead his side to victory in 165 ODIs.\n\n");
        printf("=======================================================================================================\n"); 
        printf("\t\t\t\t\tYou have won: PKR 0\n");
     	printf("=======================================================================================================\n");

		return 0;
    }
    
	return answer;
}

//Function for the 2nd round.
int mainroundq2()
{	
	char answer=' ';
	char enter=' ';
	
	printf("\n---------------------------------------------------- ROUND 2 ----------------------------------------------------\n\n");
	
	printf("When did Mughals came to India?\n\n");
	printf("A) 1526\t\t\t\tB) 1527\n\nC) 1528\t\t\t\tD) 1529\n\n");
	printf("Enter your Answer : ");
    answer=getche();
    
    if (answer == 'a' || answer=='A')
    {
		printf("\nYour answer is correct : D) 1526\n\n");
       
        printf("The Mughals first came to India in 1526, when the first Mughal Emperor Babar stepped in India.\n\n");
        printf("You have won PKR 5000\n");
        printf("Press any key to continue");
        
	    enter=getche();
	    
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}
        return 1;    
    }
	else
    {
        printf("\nThe correct answer is : D) 1526\n\n");
        printf("The Mughals first came to India in 1526, when the first Mughal Emperor Babar stepped in India.\n\n");
        printf("=======================================================================================================\n"); 
        printf("\t\t\t\t\tYou have won: PKR 1000\n");
     	printf("=======================================================================================================\n");

		return 0;
    }

	return answer;
}

//Function for the 3rd round.
int mainroundq3()
{
	char answer=' ';
	char enter=' ';
	printf("\n---------------------------------------------------- ROUND 3 ----------------------------------------------------\n\n");

	printf("How many Panipat battles were fought?\n\n");
	printf("A) 1\t\t\t B) 2\n\nC) 3\t\t\t D) 4\n\n");
	printf("Enter your Answer : ");
    answer=getche();
    if (answer=='C' || answer=='c')
    {
        printf("\nYour answer is correct : C) 3\n\n");
        printf("There were 3 Panipat battles fought. The first battle was fought in 1526, the second one in 1556 and the third battle was fought in the year 1761.\n\n");
        printf("You have won PKR 7000\n");
        printf("Press any key to continue");
	    enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}
        return 1;
    }
    else
    {
        printf("\nThe correct answer is : C) 3\n\n");
        printf("There were 3 Panipat battles fought. The first battle was fought in 1526, the second one in 1556 and the third battle was fought in the year 1761.\n\n");       
		printf("=======================================================================================================\n"); 
		printf("\t\t\t\t\tYou have won: PKR 5000\n");
     	printf("=======================================================================================================\n");
    }
	
    return answer;
}

//Function for the 4th round.
int mainroundq4()
{
	char answer=' ';
	char enter=' ';
	printf("\n---------------------------------------------------- ROUND 4 ----------------------------------------------------\n\n");	
	printf("What is the capital of Tuvalu?: \n\n");
	printf("A) Funafuti \t\t\tB) Douglas\n\nC) Honiara\t\t\tD) Kigali\n\n");
	printf("Enter your Answer : ");
    answer=getche();
    if (answer == 'a' || answer=='A')
    {
        printf("\nYour answer is correct : A) Funafuti\n\n");
        printf("Funafuti is the capital of Tuvalu, an independent island nation within the British Commonwealth, located in the Polynesian subregion of Oceania.\n\n");
        printf("You have won PKR 10,000\n");
        printf("Press any key to continue");
	    enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}    
        return 1;
    }
    else
    {
        printf("\nThe correct answer is : A) Funafuti\n\n");
        printf("Funafuti is the capital of Tuvalu, an independent island nation within the British Commonwealth, located in the Polynesian subregion of Oceania.\n\n");
        printf("=======================================================================================================\n"); 
        printf("\t\t\t\t\tYou have won: PKR 7,000\n");
     	printf("=======================================================================================================\n");

        return 0;
    }
	
    return answer;
}

//Function for the 5th round.
int mainroundq5()
{	
	char answer=' ';
	char enter=' ';
	printf("\n---------------------------------------------------- ROUND 5 ----------------------------------------------------\n\n");
    printf("What colour is found on 75 percent of the world's flags: \n\n");
    printf("A) Red\t\t\t\tB) White\n\nC) Yellow\t\t\tD) Blue\n\n");
	printf("Enter your Answer : ");
    answer=getche();
    if (answer=='A' || answer=='a')
    {
        printf("\nYour answer is correct : A) Red\n\n");
        printf("Red is the most popular color being found on approximately 75 per cent of all national flags of the world.\n\n");
        printf("You have won PKR 50,000\n");
        printf("Press any key to continue");
	    enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}    
        return 1;
    }
	else
    {
        printf("\nThe correct answer is : A) Red\n\n");
        printf("Red is the most popular color being found on approximately 75 per cent of all national flags of the world.\n\n");
        printf("=======================================================================================================\n"); 
        printf("\t\t\t\t\tYou have won: PKR 10,000\n");
     	printf("=======================================================================================================\n");

        return 0;
    }
    
    return answer;
}

//Function for the 6th round.
int mainroundq6()
{
	char answer=' ';
	char enter=' ';
	printf("\n---------------------------------------------------- ROUND 6 ----------------------------------------------------\n\n");
	printf("Who was the first ODI captain of Pakistan?\n\n");
	printf("A) Zaheer Abbas\t\t\t B) Hanif Muhammad\n\nC) Intikhab Alam\t\t D) Imran Khan\n\n");
	printf("Enter your Answer : ");
	answer = getche();
	if (answer == 'C' || answer == 'c')
	{
		printf("\nYour answer is correct : C) Intikhab Alam\n\n");
		printf("Intikhab Alam captained Pakistan in its first ever ODI on 11th February 1973 against New Zealand at AMI Stadium, Christchurch.\n\n");
		printf("You have won PKR 100,000\n");
		printf("Press any key to continue");
	    enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}
		return 1;
	}
	else 
	{
		printf("\nThe correct answer is : C) Intikhab Alam\n\n");
		printf("Intikhab Alam captained Pakistan in its first ever ODI on 11th February 1973 against New Zealand at AMI Stadium, Christchurch.\n\n");    
		printf("=======================================================================================================\n"); 
        printf("\t\t\t\t\tYou have won: PKR 50,000\n");
     	printf("=======================================================================================================\n");

		return 0;
	}
	
	return answer;
}

//Function for the 7th round.
int mainroundq7()
{
	char answer=' ';
	char enter=' ';
	printf("\n---------------------------------------------------- ROUND 7 ----------------------------------------------------\n\n");
	printf("In the movie \"Aladin (2019)\", who sang the song \"Arabian Nights\"?\n\n");
	printf("A) Will Smith\t\t\t B) DJ Khalid\n\nC) Mena Massoud\t\t\t D) Zayn Malik\n\n");
	printf("Enter your Answer : ");
	answer = getche();
	if (answer == 'A' || answer == 'a')
	{
		printf("\nYour answer is correct : A) Will Smith\n\n");
		printf("Popular American actor, rapper, producer, & comedian Will Smith; who played the genie's role in the movie, sang 3 songs for it as well, namely : \"Arabian Nights\",\"Friend Like Me\", & \"Prince Ali\".\n\n");
		printf("You have won PKR 200,000\n");
		printf("Press any key to continue");
	    enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}
        return 1;	    
	}
	else 
	{
		printf("\nThe correct answer is : A) Will Smith\n\n");
		printf("Popular American actor, rapper, producer, & comedian Will Smith; who played the genie's role in the movie, sang 3 songs for it as well, namely : \"Arabian Nights\",\"Friend Like Me\", & \"Prince Ali\".\n\n");	
		printf("=======================================================================================================\n"); 
        printf("\t\t\t\t\tYou have won: PKR 100,000\n");
     	printf("=======================================================================================================\n");

		return 0;
	}
	
	return answer;
}

//Function for the 8th round.
int mainroundq8()
{
	
	char answer=' ';
	char enter=' ';
	printf("\n---------------------------------------------------- ROUND 8 ----------------------------------------------------\n\n");
	printf("As the Chief of Army Staff of Pakistan, General Pervez Musharraf was preceded by whom?\n\n");
	printf("A) General Zia ul Haq\t\t\t B) General Jehangir Karamat\n\nC) General Ashfaq Pervez Kayani\t\t D) General Abdul Waheed Kakar\n\n");
	printf("Enter your Answer : ");
	answer = getche();
	if (answer == 'B' || answer == 'b')
	{
		printf("\nYour answer is correct : B) General Jehangir Karamat\n\n");
		printf("General Jehangir Karamat resigned on 8th October 1998, 3 months prior to his retirement due to differences with the then Prime Minister Nawaz Shareef. Mr Shareef then appointed General Pervez Musharraf as the next COAS the same day.\n\n");
		printf("You have won PKR 350,000\n");
		printf("Press any key to continue");
	    enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}
		return 1;
	}
	else 
	{
		printf("\nThe correct answer is : B) General Jehangir Karamat\n\n");
		printf("General Jehangir Karamat resigned on 8th October 1998, 3 months prior to his retirement due to differences with the then Prime Minister Nawaz Shareef. Mr Shareef then appointed General Pervez Musharraf as the next COAS the same day.\n\n");
		printf("=======================================================================================================\n"); 
        printf("\t\t\t\t\tYou have won: PKR 200,000\n");
     	printf("=======================================================================================================\n");

		return 0;
	}
	
	return answer;
}

//Function for the 9th round.
int mainroundq9()
{
	char answer=' ';
	char enter=' ';
	
	printf("\n---------------------------------------------------- ROUND 9 ----------------------------------------------------\n\n"); 
	printf("Pakistan's first artificial satellite BADR-1 was launched from which country?\n\n");
	printf("A) USA\t\t\t B) Pakistan\n\nC) Russia\t\t D) China\n\n");
	printf("Enter your Answer : ");
	answer = getche();
	if (answer == 'D' || answer == 'd')
	{
		printf("\nYour answer is correct : D) China\n\n");
		printf("BADR-1 was Pakistan's first indigenously developed and manufactured artificial and digital communications satellite, launched into the low earth orbit by SUPARCO on 16th July 1990 through a Chinese carrier rocket (Long March 2E) from Xichang Satellite Launch Center in China.\n\n");
		printf("You have won PKR 400,000\n");
		printf("Press any key to continue");
	    enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}
		return 1;
	}
	else 
	{
		printf("\nThe correct answer is : D) China\n\n");
		printf("BADR-1 was Pakistan's first indigenously developed and manufactured artificial and digital communications satellite, launched into the low earth orbit by SUPARCO on 16th July 1990 through a Chinese carrier rocket (Long March 2E) from Xichang Satellite Launch Center in China.\n\n");
		printf("=======================================================================================================\n"); 
        printf("\t\t\t\t\tYou have won: PKR 350,000\n");
     	printf("=======================================================================================================\n");

		return 0;
	}
	
	return answer;
}

//Function for the 10th round.
int mainroundq10()
{
	char answer=' ';
	char enter=' ';
	printf("\n---------------------------------------------------- ROUND 10 ----------------------------------------------------\n\n");
	printf("What was Genghis Khan's real name?\n\n");
	printf("A) Borte\t\t\t B) Temujin\n\nC) Yesugei\t\t\t D) Zhenjin\n\n");
	printf("Enter your Answer : ");
	answer = getche();
	if (answer == 'B' || answer == 'b')
	{
		printf("\nYour answer is correct : B) Temujin\n\n");
		printf("The famous Mongolian leader Genghis Khan was born around 1162 A.D. near the border between modern Mongolia and Siberia, to Yesugei and Hoelun, who named him Temujin. However, after establishing his empire, he came to be known as Genghis Khan, which roughly translates to \"Universal Ruler.\"\n\n");
		printf("You have won PKR 500,000\n");
		printf("Press any key to continue");
	    enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}
		return 1;
	}
	else 
	{
		printf("\nThe correct answer is : B) Temujin\n\n");
		printf("The famous Mongolian leader Genghis Khan was born around 1162 A.D. near the border between modern Mongolia and Siberia, to Yesugei and Hoelun, who named him Temujin. However, after establishing his empire, he came to be known as Genghis Khan, which roughly translates to \"Universal Ruler.\"\n\n");
		printf("=======================================================================================================\n"); 
        printf("\t\t\t\t\tYou have won: PKR 400,000\n");
     	printf("=======================================================================================================\n");
		
		return 0;
	}
	
	return answer;
}

//Function for the 11th round.
int mainroundq11()
{
	char answer=' ';
	char enter=' ';
	printf("\n---------------------------------------------------- ROUND 11 ----------------------------------------------------\n\n");
	printf("What is the most difficult language to learn in the world?\n\n");
	printf("A) Japanese\t\t\t B) Mandarin\n\nC) Korean\t\t\t D) Basque\n\n");
	printf("Enter your Answer : ");
	answer = getche();
	if (answer == 'B' || answer == 'b')
	{
		printf("\nYour answer is correct : B) Mandarin\n\n");
		printf("Mandarin. This is a tonal language which, is extremely difficult to master. It is also full of idioms, aphorisms and homophones making it very hard to learn without learning some of the culture as well. And then of course, it has its own alphabets on top of that!\"\n\n");
		printf("You have won PKR 550,000\n");
		printf("Press any key to continue");
	    enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}	
		return 1;
	}
	else 
	{
		printf("\nThe correct answer is : B) Mandarin\n\n");
		printf("Mandarin. This is a tonal language which, is extremely difficult to master. It is also full of idioms, aphorisms and homophones making it very hard to learn without learning some of the culture as well. And then of course, it has its own alphabets on top of that!\"\n\n");
		printf("=======================================================================================================\n"); 
        printf("\t\t\t\t\tYou have won: PKR 500,000\n");
     	printf("=======================================================================================================\n");

		return 0;
	}
	
	return answer;
}

//Function for the 12th round.
int mainroundq12()
{
	char answer=' ';
	char enter=' ';
	printf("\n---------------------------------------------------- ROUND 12 ----------------------------------------------------\n\n");
	printf("Which is the most hottest continent in the  world?\n\n");
	printf("A) Asia\t\t\t\t\tB) Africa\n\nC) North America\t\t\tD) South America\n\n");
	printf("Enter your Answer : ");
	answer = getche();
	if (answer == 'B' || answer == 'b')
	{
		printf("\nYour answer is correct : B) Africa\n\n");
		printf("Africa is the hottest continent on the planet.\n\n");
		printf("You have won PKR 600,000\n");
		printf("Press any key to continue");
	    enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}
		return 1;
	}
	else 
	{
		printf("\nThe correct answer is : B) Africa\n\n");
		printf("Africa is the hottest continent on the planet.\n\n");	
		printf("=======================================================================================================\n"); 
        printf("\t\t\t\t\tYou have won: PKR 550,000\n");
     	printf("=======================================================================================================\n");

		return 0;
	}
	
	return answer;
}

//Function for the 13th round.
int mainroundq13()
{
	char answer=' ';
	char enter=' ';
	printf("\n---------------------------------------------------- ROUND 13 ----------------------------------------------------\n\n");
	printf("Which club won the UEFA Super Cup in 2017?\n\n");
	printf("A) Real Madrid\t\t\tB) Manchester United\n\nC) Bayern Munich\t\tD) Juventus\n\n");
	printf("Enter your Answer : ");
	answer = getche();
	if (answer == 'A' || answer == 'a')
	{
		printf("\nYour answer is correct : A) Real Madrid\n\n");
		printf("Real Madrid were the winners of 2017 UEFA Super Cup as they defeated Manchester United By the scoreline of 2-1\n\n");
		printf("You have won PKR 650,000\n");
		printf("Press any key to continue");
	    enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}
		return 1;
	}
	else 
	{
		printf("\nReal Madrid were the winners of 2017 UEFA Super Cup as they defeated Manchester United by the scoreline of 2-1\n\n");
		printf("\nThe correct answer is : A) Real Madrid\n\n");	
		printf("=======================================================================================================\n"); 
        printf("\t\t\t\t\tYou have won: PKR 600,000\n");
     	printf("=======================================================================================================\n");

		return 0;
	}
	
	return answer;
}

//Function for the 14th round.
int mainroundq14()
{
	char answer=' ';
	char enter=' ';
	printf("\n---------------------------------------------------- ROUND 14 ----------------------------------------------------\n\n");
	printf("Which singer was known amongst other things as 'The King of Pop'?:\n\n");
	printf("A) Shawn Mendis\t\t\t B) Freddy Mercury\n\nC) Madonna\t\t\t D) Michael Jackson\n\n");
	printf("You have won PKR 750,000\n");
	printf("Enter your Answer : ");
	answer = getche();
	if (answer == 'D' || answer == 'd')
	{
		printf("\nYour answer is correct : D) Michael Jackson\n\n");
		printf("Michael Joseph Jackson (August 29, 1958 – June 25, 2009) was an American singer, songwriter, and dancer. Dubbed the King of Pop, he is regarded as one of the most significant cultural figures of the 20th century.\n\n");
		printf("Press any key to continue");
	    enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}
		return 1;
	}
	else 
	{   
		printf("\nThe correct answer is : D) Michael Jackson\n\n");
		printf("Michael Joseph Jackson (August 29, 1958 – June 25, 2009) was an American singer, songwriter, and dancer. Dubbed the King of Pop, he is regarded as one of the most significant cultural figures of the 20th century.\n\n");
        printf("=======================================================================================================\n"); 
        printf("\t\t\t\t\tYou have won: PKR 650,000\n");
     	printf("=======================================================================================================\n");
				
		return 0;
	}
	
	return answer;

}

//Function for the 15th round.
int mainroundq15()
{
	char answer=' ';
	char enter=' ';
	printf("\n---------------------------------------------------- ROUND 15 ----------------------------------------------------\n\n");
	printf("In which Year the Famous English Premier League was founded?\n\n");
	printf("A) 1989\t\t\t B) 1990\n\nC) 1992\t\t\t D) 1995\n\n");
	printf("Enter your Answer : ");
	answer = getche();
	if (answer == 'C' || answer == 'c')
	{
		printf("\nYour answer is correct : C) 1992\n\n");
		printf("The English Premier League was founded in the year 1992. The first edition was held in the seasonal year 1992-1993 which was won by Manchester United \n\n");
		printf("You have won PKR 775,000\n");
		printf("Press any key to continue");
	    enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}
		return 1;
	}
	else 
	{
		printf("\nThe correct answer is : C) 1992\n\n");
		printf("The English Premier League was founded in the year 1992. The first edition was held in the seasonal year 1992-1993 which was won by Manchester United \n\n");
		printf("=======================================================================================================\n"); 
        printf("\t\t\t\t\tYou have won: PKR 750,000\n");
     	printf("=======================================================================================================\n");
		
		return 0;
	}
	
	return answer;
}

//Function for the 16th round.
int mainroundq16()
{
	char answer=' ';
	char enter=' ';
	printf("\n---------------------------------------------------- ROUND 16 ----------------------------------------------------\n\n");
	printf("What was the code name for the 1999 Kargil operation?\n\n");
	printf("A) Operation Gibraltor\t\t\tB) Operation Khilafat\n\nC) Operation Koh Paima\t\t\tD) Operation Midnight Jackal\n\n");
	printf("Enter your Answer : ");
	answer = getche();
	if (answer == 'C' || answer == 'c')
	{
		printf("\nYour answer is correct : C) Operation Koh Paima\n\n");
		printf("Operation Koh Paima was the code name for the Kargil operation, planned by the then COAS of Pakistan Gen. Pervez Musharraf and his aides. This operation later proved to be the beginning of the Kargil War (1999)\n\n");
		printf("You have won PKR 800,000\n");
		printf("Press any key to continue");
	    enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}
		return 1;
	}
	else 
	{
		printf("\nThe correct answer is :  C) Operation Koh Paima\n\n");
		printf("Operation Koh Paima was the code name for the Kargil operation, planned by the then COAS of Pakistan Gen. Pervez Musharraf and his aides. This operation was the beginning of the Kargil War (1999)\n\n");
		printf("=======================================================================================================\n"); 
        printf("\t\t\t\t\tYou have won: PKR 775,000\n");
     	printf("=======================================================================================================\n");

		return 0;
	}
	
	return answer;
}

//Function for the 17th round.
int mainroundq17()
{
	char answer=' ';
	char enter=' ';
	printf("\n---------------------------------------------------- ROUND 17 ----------------------------------------------------\n\n");
	printf("Who was the first man in space?\n\n");
	printf("A) Yuri Gagarin\t\t\t\t B) Neil Armstrong\n\nC) Valery Legasov\t\t\t D) Michael Collins\n\n");
	printf("Enter your Answer : ");
	answer = getche();
	if (answer == 'A' || answer == 'a')
	{
		printf("\nYour answer is correct : A) Yuri Gagarin\n\n");
		printf("Yuri Alekseyevich Gagarian was a Soviet Air Force pilot and cosmonout who became the first human to fly in space on 12th April 1961. He spent a total of 1 hour, 48 minutes in space during which he completed one orbit of the earth in his capsule named Vostok 1\n\n");
		printf("You have won PKR 825,000\n");
		printf("Press any key to continue");
	    enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}
		return 1;
	}
	else 
	{
		printf("\nThe correct answer is :  A) Yuri Gagarin\n\n");
		printf("Yuri Alekseyevich Gagarian was a Soviet Air Force pilot and cosmonout who became the first human to fly in space on 12th April 1961. He spent a total of 1 hour, 48 minutes in space during which he completed one orbit of the earth in his capsule named Vostok 1\n\n");
		printf("=======================================================================================================\n"); 
        printf("\t\t\t\t\tYou have won: PKR 800,000\n");
     	printf("=======================================================================================================\n");

		return 0;
	}
	
	return answer;
}

//Function for the 18th round.
int mainroundq18()
{
	char answer=' ';
	char enter=' ';
	printf("\n---------------------------------------------------- ROUND 18 ----------------------------------------------------\n\n");
	printf("Who was the first Nobel laureate from Pakistan?\n\n");
	printf("A) Malala Yousufzai\t\t\tB) Dr. Abdus Salam\n\nC) Abdul Sattar Edhi\t\t\tD) Fatima Jinnah\n\n");
	printf("Enter your Answer : ");
	answer = getche();
	if (answer == 'B' || answer == 'b')
	{
		printf("\nYour answer is correct : B) Dr. Abdus Salam\n\n");
		printf("In the year 1979, theoretical physicist Dr. Abdus Salam became the first Pakistani to be awarded the Noble Prize in Physics for his contribution in the Electroweak Unification Theory (aka Weinberg-Salam Theory)\n\n");
		printf("You have won PKR 900,000\n");
		printf("Press any key to continue");
	    enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}
		return 1;
	}
	else 
	{
		printf("\nThe correct answer is :  B) Dr. Abdus Salam\n\n");
		printf("In the year 1979, theoretical physicist Dr. Abdus Salam became the first Pakistani to be awarded the Noble Prize in Physics for his contribution in the Electroweak Unification Theory (aka Weinberg-Salam Theory)\n\n");
		printf("=======================================================================================================\n"); 
        printf("\t\t\t\t\tYou have won: PKR 825,000\n");
     	printf("=======================================================================================================\n");

		return 0;
	}
	
	return answer;
}

//Function for the 19th round.
int mainroundq19()
{
	char answer=' ';
	char enter=' ';
	printf("\n---------------------------------------------------- ROUND 19 ----------------------------------------------------\n\n");
	printf("Who has scored the most ODI centuries for Pakistan?\n\n");
	printf("A) Inzamam ul Haq\t\t\tB) Muhammad Yousuf\n\nC) Javed Miandad\t\t\tD) Saeed Anwar\n\n");
	printf("Enter your Answer : ");
	answer = getche();
	if (answer == 'D' || answer == 'd')
	{
		printf("\nYour answer is correct : D) Saeed Anwar\n\n");
		printf("The left-handed opening batsman Saeed Anwar scored 20 ODI centuries in his career, which is the most by any Pakistani till now\n\n");
		printf("You have won PKR 950,000\n");
		printf("Press any key to continue");
	    enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}
		return 1;
	}
	else 
	{
		printf("\nThe correct answer is :  D) Saeed Anwar\n\n");
		printf("The left-handed opening batsman Saeed Anwar scored 20 ODI centuries in his career, which is the most by any Pakistani till now\n\n");
		printf("=======================================================================================================\n"); 
        printf("\t\t\t\t\tYou have won: PKR 900,000\n");
     	printf("=======================================================================================================\n");

		return 0;
	}
	
	return answer;
}

//Function for the 20th round.
int mainroundq20()
{
	char answer=' ';
	char enter=' ';
	printf("\n---------------------------------------------------- ROUND 20 ----------------------------------------------------\n\n");
	printf("The 2016 film \"The Founder\" is based on the story of:\n\n");
	printf("A) Tesla & SpaceX\t\t\tB) Pizza Hut\n\nC) McDonald's\t\t\t\tD) Alibaba\n\n");
	printf("Enter your Answer : ");
	answer = getche();
	if (answer == 'C' || answer == 'c')
	{
		printf("\nYour answer is correct : C) McDonald's\n\n");
		printf("The Founder is is biographical drama film directed by John Lee Hancock which portrays the story of the creation of McDonald's fast-food chain\n\n");
		printf("Press any key to continue");
	    enter=getche();
		if(enter>=0 && enter<=128)
		{
			system("cls");
		}
		return 1;
	}
	else 
	{
		printf("\nThe correct answer is :  C) McDonald's\n\n");
		printf("The Founder is is biographical drama film directed by John Lee Hancock which portrays the story of the creation of McDonald's fast-food chain\n\n");
		printf("=======================================================================================================\n"); 
        printf("\t\t\t\t\tYou have won: PKR 950,000\n");
     	printf("=======================================================================================================\n");

		return 0;
	}
	
	return answer;
}