#include<stdio.h>
#include<stdio.h>
void main()
{
	int i,a[10],n=0;
	printf("WELCOME TO THE GAME""KAUN BANEGA CROREPATHI""It contains10 QUESTIONS each carries 10 LAKHS");

	for(i=1;i<=10;i++)
	{
		n=0;
		switch(i)
		{
		case 1:
			printf("In what direction muslim pray 1.East 2.South 3.Nearby Mosque's direction 4.Mecca's direction ");
			scanf("%d",&n);
			if(n==4)
			{
					printf("You have entered the correct answer Now you have won Rs.%d00000 Your Next Question is ",i);
			}
			else
			{
				printf(" You have entered the wrong answer Better Luck Next Time You have earned Rs.%d00000",i-1);
				i=11;
			}
			break;
		case 2:
			printf("Who is the Mother of RAMA in Ramayana 1.Kousalya 2.Kaikai 3.Sumitra 4.Mantra ");
			scanf("%d",&n);
			if(n==1)
			{
					printf("You have entered the correct answer Now you have won Rs.%d00000 Your Next Question is ",i);
			}
			else
			{
				printf(" You have entered the wrong answer Better Luck Next Time You have earned Rs.%d00000",i-1);
				i=11;
			}
			break;
		case 3:
			printf("What is the Symbol of Nazis(Army of Great Hitler) 1.Cross 2.Skull and Bones 3.Owl 4.Swastika ");
			scanf("%d",&n);
			if(n==4)
			{
					printf("You have entered the correct answer Now you have won Rs.%d00000 Your Next Question is ",i);
			}
			else
			{
				printf(" You have entered the wrong answer Better Luck Next Time You have earned Rs.%d00000",i-1);
				i=11;
			}
			break;
		case 4:
			printf("Who among these is not an Railway Minister 1.Mamtha Banerjee 2.Lal Bahadur Shastri 3.Geetha Mukerjee 4.George Fernandis ");
			scanf("%d",&n);
			if(n==3)
			{
					printf("You have entered the correct answer Now you have won Rs.%d00000 Your Next Question is ",i);
			}
			else
			{
				printf(" You have entered the wrong answer Better Luck Next Time You have earned Rs.%d00000",i-1);
				i=11;
			}
			break;
		case 5:
			printf("Who Correctly Answered to Yaksha's Questions 1.Drona 2.Abimanyu 3.Yudishtira 4.Arjuna");
			scanf("%d",&n);
			if(n==3)
			{
					printf("You have entered the correct answerNow you have wonRs.%d00000Your Next Question is",i);
			}
			else
			{
				printf("You have entered the wrong answerBetter Luck NextTimeYou have earned Rs.%d00000",i-1);
				i=11;
			}
			break;
		case 6:
			printf("Who Heads Reserve Bank of India1.FinanceMinister2.Commissioner3.Chief Bank Manager4.Governor");
			scanf("%d",&n);
			if(n==4)
			{
					printf("You have entered the correct answerNow you have wonRs.%d00000Your Next Question is",i);
			}
			else
			{
				printf("You have entered the wrong answerBetter Luck NextTimeYou have earned Rs.%d00000",i-1);
				i=11;
			}
			break;
		case 7:
			printf("Which of these AnimalsLaughs1.Monkey2.Tiger3.Giraffe4.Hyna");
			scanf("%d",&n);
			if(n==4)
			{
					printf("You have entered the correct answerNow you have wonRs.%d00000Your Next Question is",i);
			}
			else
			{
				printf("You have entered the wrong answerBetter Luck NextTimeYou have earned Rs.%d00000",i-1);
				i=11;
			}
			break;
		case 8:
			printf("Which is the system of Governance inChina1.communism2.communalism3.Monarchy4.Democratic");
			scanf("%d",&n);
			if(n==1)
			{
					printf("You have entered the correct answerNow you have wonRs.%d00000Your Next Question is",i);
			}
			else
			{
				printf("You have entered the wrong answerBetter Luck NextTimeYou have earned Rs.%d00000",i-1);
				i=11;
			}
			break;
		case 9:
			printf("How many Rings does Olympic Symbolhave1.32.23.64.5");
			scanf("%d",&n);
			if(n==4)
			{
					printf("You have entered the correct answerNow you have wonRs.%d00000Your Next Question is",i);
			}
			else
			{
				printf("You have entered the wrong answerBetter Luck NextTimeYou have earned Rs.%d00000",i-1);
				i=11;
			}
			break;
		case 10:
			printf("Who patronised Kalidas1.Akbar2.Chandra Guptha3.VikramaAditya4.Krishna Devaraya");
			scanf("%d",&n);
			if(n==3)
			{
					printf("You have entered the correct answerNow you have wonRs.%d00000*YOU HAVE BECOME CROREPATHI OF THIS WEEK*",i);
			}
			else
			{
				printf("You have entered the wrong answerBetter Luck NextTimeYou have earned Rs.%d00000",i-1);
				i=11;
			}
			break;
		default:
			break;
			}
			}
			getch();
			}
