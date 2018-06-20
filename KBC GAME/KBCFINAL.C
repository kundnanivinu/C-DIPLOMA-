/*
	ษออออออออออออออออออออออออออออออออออออออออออออป
	บ             KAUN BANEGA CROREPATI          บ
	ศออออออออออออออออออออออออออออออออออออออออออออผ
*/

#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

//------------------------------ GLOBAL -------------------------------
void quit();
void instructions();
void play();
void priceList();
int selectQuestion();
int printQuestion(int);
int getAnswer();
int check(int,int);
int winCheck(int,int);
void wrongAnswer();
void rightAnswer();

int quesNumber = 1;
char price[15][20] = {
			"1.    1,000",
			"2.    2,000",
			"3.    3,000",
			"4.    5,000",
			"5.    10,000",
			"6.    20,000",
			"7.    40,000",
			"8.    80,000",
			"9.    1,60,000",
			"10.   3,20,000",
			"11.   6,25,000",
			"12.   12,50,000",
			"13.   25,00,000",
			"14.   50,00,000",
			"15.   1,00,00,000"
		     };


//-------------------------- STRUCTURE FOR GAME --------------------------


struct Crorepati
{
	char question[80];
	char optionA[50];
	char optionB[50];
	char optionC[50];
	char optionD[50];
	char result;
	int repeated;
}kbc[60];


//------------------------- INITIALISE FUNCTION ----------------------------


void initialise()
{
	strcpy( kbc[0].question ,"Where in your body is Cranium ?");
	strcpy(kbc[0].optionA , "A. Head");
	strcpy(kbc[0].optionB , "B. Neck");
	strcpy(kbc[0].optionC , "C. leg");
	strcpy(kbc[0].optionD , "D. Hand");
	kbc[0].result = 'A';

	strcpy(kbc[1].question , "Who wrote Mein Kampf ?");
	strcpy(kbc[1].optionA , "A. Mahatma Gandhi");
	strcpy(kbc[1].optionB , "B. Jawaharlal Nehru");
	strcpy(kbc[1].optionC , "C. Mussolini");
	strcpy(kbc[1].optionD , "D. A.Hitler");
	kbc[1].result = 'D';

	strcpy(kbc[2].question , "Which day of week is named after Norse God Odin ?");
	strcpy(kbc[2].optionA , "A. Monday");
	strcpy(kbc[2].optionB , "B. Tuesday");
	strcpy(kbc[2].optionC , "C. Wednesday");
	strcpy(kbc[2].optionD , "D. Thursday");
	kbc[2].result = 'C';

	strcpy(kbc[3].question , "Where do mosquitoes lay egg ?");
	strcpy(kbc[3].optionA , "A. Land");
	strcpy(kbc[3].optionB , "B. Water");
	strcpy(kbc[3].optionC , "C. Air");
	strcpy(kbc[3].optionD , "D. Any of the 3 above");
	kbc[3].result = 'B';

	strcpy(kbc[4].question , "Which team begins with Face Off ?");
	strcpy(kbc[4].optionA  ,"A. Icehockey");
	strcpy(kbc[4].optionB , "B. Rugby");
	strcpy(kbc[4].optionC , "C. Baseball");
	strcpy(kbc[4].optionD , "D. Basketball");
	kbc[4].result = 'A';

	strcpy(kbc[5].question , "Which month of the year is named after Roman God of War ?");
	strcpy(kbc[5].optionA ,"A. January");
	strcpy(kbc[5].optionB , "B. February");
	strcpy(kbc[5].optionC , "C. March");
	strcpy(kbc[5].optionD , "D. May");
	kbc[5].result = 'C';

	strcpy(kbc[6].question , "In literature how many Arabian Nights are there ?");
	strcpy(kbc[6].optionA , "1000");
	strcpy(kbc[6].optionB , "1001");
	strcpy(kbc[6].optionC , "1002");
	strcpy(kbc[6].optionD , "1003");
	kbc[6].result = 'B';

	strcpy(kbc[7].question , "How many players are there in Hockey team ?");
	strcpy(kbc[7].optionA , "6");
	strcpy(kbc[7].optionB , "10");
	strcpy(kbc[7].optionC , "11");
	strcpy(kbc[7].optionD , "14");
	kbc[7].result = 'C';

	strcpy(kbc[8].question , "In which game does the word Canon occurs ?");
	strcpy(kbc[8].optionA , "Billiards");
	strcpy(kbc[8].optionB , "Wrestling");
	strcpy(kbc[8].optionC , "Chess");
	strcpy(kbc[8].optionD , "Rugby");
	kbc[8].result = 'A';

	strcpy(kbc[9].question , "In which sport do we talk about half Nelson ?");
	strcpy(kbc[9].optionA , "Cricket");
	strcpy(kbc[9].optionB , "Baseball");
	strcpy(kbc[9].optionC , "Wrestling");
	strcpy(kbc[9].optionD , "Hockey");
	kbc[9].result = 'C';

	strcpy(kbc[10].question , "How many cents are there in American Nickel ?");
	strcpy(kbc[10].optionA , "5");
	strcpy(kbc[10].optionB , "10");
	strcpy(kbc[10].optionC , "50");
	strcpy(kbc[10].optionD , "100");
	kbc[10].result = 'A';

	strcpy(kbc[11].question , " Which of these animal laughs?");
	strcpy(kbc[11].optionA , "Lion");
	strcpy(kbc[11].optionB , "Tiger");
	strcpy(kbc[11].optionC , "Elephant");
	strcpy(kbc[11].optionD , "Hyna");
	kbc[11].result = 'D';

	strcpy(kbc[12].question , "Which sea borders Europe in South ?");
	strcpy(kbc[12].optionA , "Meditterian Sea");
	strcpy(kbc[12].optionB , "Yellow Sea");
	strcpy(kbc[12].optionC , "Arabian Sea");
	strcpy(kbc[12].optionD , "Black Sea");
	kbc[12].result = 'A';

	strcpy(kbc[13].question , "Who was the brother of Lord Krishna in Mahabharata ?");
	strcpy(kbc[13].optionA , "Balaram");
	strcpy(kbc[13].optionB , "Parshuram");
	strcpy(kbc[13].optionC , "Sitharam");
	strcpy(kbc[13].optionD , "Sudhama");
	kbc[13].result = 'D';

	strcpy(kbc[14].question , "In literature how many Arabian Nights are there ?");
	strcpy(kbc[14].optionA , "1000");
	strcpy(kbc[14].optionB , "1001");
	strcpy(kbc[14].optionC , "1002");
	strcpy(kbc[14].optionD , "1003");
	kbc[14].result = 'B';

	strcpy(kbc[15].question , "What was the symbol of Nazi's ?");
	strcpy(kbc[15].optionA , "Cross");
	strcpy(kbc[15].optionB , "Skull and Bones");
	strcpy(kbc[15].optionC , "Owl");
	strcpy(kbc[15].optionD , "Swasthika");
	kbc[15].result = 'D';

	strcpy(kbc[16].question , "Which is the Tallest Grass ?");
	strcpy(kbc[16].optionA , "Wheat");
	strcpy(kbc[16].optionB , "Palm");
	strcpy(kbc[16].optionC , "Sugarcane");
	strcpy(kbc[16].optionD , "Bamboo");
	kbc[16].result = 'D';

	strcpy(kbc[17].question , "Which is the European Currency ?");
	strcpy(kbc[17].optionA , "Euro");
	strcpy(kbc[17].optionB , "Yen");
	strcpy(kbc[17].optionC , "European Dollar");
	strcpy(kbc[17].optionD , "Pound Sterling");
	kbc[17].result = 'A';

	strcpy(kbc[18].question , "Where is Wailing Wall ?");
	strcpy(kbc[18].optionA , "Rome");
	strcpy(kbc[18].optionB , "Paris");
	strcpy(kbc[18].optionC , "Baghdad");
	strcpy(kbc[18].optionD , "Jerusalem");
	kbc[18].result = 'D';

	strcpy(kbc[19].question , "Who is known as Light Of Asia ?");
	strcpy(kbc[19].optionA , "Lawrence of Arabia");
	strcpy(kbc[19].optionB , "Confucius");
	strcpy(kbc[19].optionC , "Budhha");
	strcpy(kbc[19].optionD , "Mahatma Gandhi");
	kbc[19].result = 'C';

	strcpy(kbc[20].question , "Who was the Father of Gathodhgaja in Mahabharata ?");
	strcpy(kbc[20].optionA , "Bhima");
	strcpy(kbc[20].optionB , "Hidimba");
	strcpy(kbc[20].optionC , "Arjuna");
	strcpy(kbc[20].optionD , "Kumbhakarana");
	kbc[20].result = 'A';

	strcpy(kbc[21].question , "How many cents are there in an American nickel ?");
	strcpy(kbc[21].optionA , "A. 5");
	strcpy(kbc[21].optionB , "B. 10");
	strcpy(kbc[21].optionC , "C. 50");
	strcpy(kbc[21].optionD , "D. 100");
	kbc[21].result = 'A';

	strcpy(kbc[22].question , "Who was the eldest son of Kunthi?");
	strcpy(kbc[22].optionA , "A. Arjuna");
	strcpy(kbc[22].optionB , "B. Karna");
	strcpy(kbc[22].optionC , "C. Yudhistira");
	strcpy(kbc[22].optionD , "D. Bhima");
	kbc[22].result = 'B';

	strcpy(kbc[23].question , " Where is Kohinoor Diamond ?");
	strcpy(kbc[23].optionA , "A. Persia");
	strcpy(kbc[23].optionB , "B. USA");
	strcpy(kbc[23].optionC , "C. India");
	strcpy(kbc[23].optionD , "D. England");
	kbc[23].result = 'D';

	strcpy(kbc[24].question , "Who lost his teeth while writing Mahabharata ?");
	strcpy(kbc[24].optionA , "A. Ganesha");
	strcpy(kbc[24].optionB , "B. Vedvyas");
	strcpy(kbc[24].optionC , "C. Valmiki");
	strcpy(kbc[24].optionD , "D. Dusshar");
	kbc[24].result = 'A';

	strcpy(kbc[25].question , "Who among these was not assassinated ?");
	strcpy(kbc[25].optionA , "A. Mahatma Gandhi");
	strcpy(kbc[25].optionB , "B. Sanjay Gandhi");
	strcpy(kbc[25].optionC , "C. Mountbatten");
	strcpy(kbc[25].optionD , "D. Jhon Lenin");
	kbc[25].result = 'B';

	strcpy(kbc[26].question , "When did Soviet Union breakdown ?");
	strcpy(kbc[26].optionA , "A. 1969");
	strcpy(kbc[26].optionB , "B. 1979");
	strcpy(kbc[26].optionC , "C. 1989");
	strcpy(kbc[26].optionD , "D. 1999");
	kbc[26].result = 'C';

	strcpy(kbc[27].question , "Who correctly answered to Yaksha's question ?");
	strcpy(kbc[27].optionA , "A. Drona");
	strcpy(kbc[27].optionB , "B. Abhimanyu");
	strcpy(kbc[27].optionC , "C. Arjun");
	strcpy(kbc[27].optionD , "D. Yudhistir");
	kbc[27].result = 'D';

	strcpy(kbc[28].question , "Which branch of Christianity does pope lead ?");
	strcpy(kbc[28].optionA , "A. Protestant");
	strcpy(kbc[28].optionB , "B. Lutheran Church");
	strcpy(kbc[28].optionC , "C. Roman Catholic");
	strcpy(kbc[28].optionD , "D. Orthodox");
	kbc[28].result = 'C';

	strcpy(kbc[29].question , "Which of these religion worships fire ?");
	strcpy(kbc[29].optionA , "A. Zoroastrianism");
	strcpy(kbc[29].optionB , "B. Buddhism");
	strcpy(kbc[29].optionC , "C. Judaism");
	strcpy(kbc[29].optionD , "D. Islam");
	kbc[29].result = 'A';

	strcpy(kbc[30].question , "Who is Roman God of War ?");
	strcpy(kbc[30].optionA , "A. Venus");
	strcpy(kbc[30].optionB , "B. Aphrodite");
	strcpy(kbc[30].optionC , "C. Apollo");
	strcpy(kbc[30].optionD , "D. Mars");
	kbc[30].result = 'D';

	strcpy(kbc[31].question , "Who wrote Ramcharitra Manas ?");
	strcpy(kbc[31].optionA , "A. Tulsidas");
	strcpy(kbc[31].optionB , "B. Valmiki");
	strcpy(kbc[31].optionC , "C. Ganesha");
	strcpy(kbc[31].optionD , "D. Ved Vyas");
	kbc[31].result = 'A';

	strcpy(kbc[32].question , "Who was not a Railway Minister ?");
	strcpy(kbc[32].optionA , "A. Mamatha Banerjee");
	strcpy(kbc[32].optionB , "B. Lal Bahadur Shastri");
	strcpy(kbc[32].optionC , "C. Geetha Mukherjee");
	strcpy(kbc[32].optionD , "D. George Fernadis");
	kbc[32].result = 'D';

	strcpy(kbc[33].question , "Starting number of Chennai's pin code ?");
	strcpy(kbc[33].optionA , "A. 5");
	strcpy(kbc[33].optionB , "B. 6");
	strcpy(kbc[33].optionC , "C. 7");
	strcpy(kbc[33].optionD , "D. 4");
	kbc[33].result = 'B';

	strcpy(kbc[34].question , "Who heads the control of RBI ?");
	strcpy(kbc[34].optionA , "A. Finance minister");
	strcpy(kbc[34].optionB , "B. Commissioner");
	strcpy(kbc[34].optionC , "C. Prime Minister");
	strcpy(kbc[34].optionD , "D. Governor");
	kbc[34].result = 'D';

	strcpy(kbc[35].question , " Where is Fort William located ??");
	strcpy(kbc[35].optionA , "A. Chennai");
	strcpy(kbc[35].optionB , "B. Goa");
	strcpy(kbc[35].optionC , "C. Kolkata");
	strcpy(kbc[35].optionD , "D. Mysore");
	kbc[35].result = 'C';

	strcpy(kbc[36].question , "  Name this Indian Tennis player who has turned Hollywood filmmaker???");
	strcpy(kbc[36].optionA , "A. Leander Paes");
	strcpy(kbc[36].optionB , "B. Mahesh Bhupathi");
	strcpy(kbc[36].optionC , "C. Vijay Amritraj");
	strcpy(kbc[36].optionD , "D. Ashok Amritraj");
	kbc[36].result = 'D';

	strcpy(kbc[37].question , "  Sishu is the literary work of which Indian author???");
	strcpy(kbc[37].optionA , "A. Vikram Seth");
	strcpy(kbc[37].optionB , "B. Jawaharlal Nehru");
	strcpy(kbc[37].optionC , "C. Rabindranath Tagore");
	strcpy(kbc[37].optionD , "D. Arundhati Roy");
	kbc[37].result = 'C';

	strcpy(kbc[38].question , "  Which of these Cities located in the state of Gujarat is famous for zari production???");
	strcpy(kbc[38].optionA , "A. Surat");
	strcpy(kbc[38].optionB , "B. Rajkot");
	strcpy(kbc[38].optionC , "C. Surendranagar");
	strcpy(kbc[38].optionD , "D. Ahmedabad");
	kbc[38].result = 'B';

	strcpy(kbc[39].question , "  Which State in India is the largest producer of Soyabean???");
	strcpy(kbc[39].optionA , "A. Rajasthan");
	strcpy(kbc[39].optionB , "B. Gujarat");
	strcpy(kbc[39].optionC , "C. Uttar Pradesh");
	strcpy(kbc[39].optionD , "D. Madhya Pradesh");
	kbc[39].result = 'D';

	strcpy(kbc[40].question , "  Thumba in Kerala is famous because...?");
	strcpy(kbc[40].optionA , "A. It has several industries");
	strcpy(kbc[40].optionB , "B. It is a rocket launching station");
	strcpy(kbc[40].optionC , "C. It is a harbour");
	strcpy(kbc[40].optionD , "D. It has an international airport");
	kbc[40].result = 'B';

	strcpy(kbc[41].question , "  Name the annual fair of Rajasthan that is famous for its camel trading event...?");
	strcpy(kbc[41].optionA , "A. Pushkar Mela");
	strcpy(kbc[41].optionB , "B. Kumbha Mela");
	strcpy(kbc[41].optionC , "C. Sonepur Mela");
	strcpy(kbc[41].optionD , "D. Suraj Kund Mela");
	kbc[41].result = 'A';

	strcpy(kbc[42].question , "  Which Indian State has most airports??");
	strcpy(kbc[42].optionA , "A. Maharashtra");
	strcpy(kbc[42].optionB , "B. Madhya Pradesh");
	strcpy(kbc[42].optionC , "C. Kerala");
	strcpy(kbc[42].optionD , "D. Gujarat");
	kbc[42].result = 'D';

	strcpy(kbc[43].question , "  Rouff is a folk dance. It has its origin in ...??");
	strcpy(kbc[43].optionA , "A. Himachal Pradesh");
	strcpy(kbc[43].optionB , "B.  Assam");
	strcpy(kbc[43].optionC , "C. Mizoram");
	strcpy(kbc[43].optionD , "D. Kashmir");
	kbc[43].result = 'D';

	strcpy(kbc[44].question , "  Located in India it is Asia's largest residential university. Name it...??");
	strcpy(kbc[44].optionA , "A. Banaras Hindu University");
	strcpy(kbc[44].optionB , "B. The Utkal University");
	strcpy(kbc[44].optionC , "C. Jawaharlal Nehru University");
	strcpy(kbc[44].optionD , "D. Anna University");
	kbc[44].result = 'A';

	strcpy(kbc[45].question , "  Jhabua are tribals from ...??");
	strcpy(kbc[45].optionA , "A. Gujarat");
	strcpy(kbc[45].optionB , "B. Rajasthan");
	strcpy(kbc[45].optionC , "C. Maharashtra");
	strcpy(kbc[45].optionD , "D. Madhya Pradesh");
	kbc[45].result = 'D';

	strcpy(kbc[46].question , "  Which of these places grow apples in abundance??");
	strcpy(kbc[46].optionA , "A. Manali");
	strcpy(kbc[46].optionB , "B. Leh");
	strcpy(kbc[46].optionC , "C. Ooty");
	strcpy(kbc[46].optionD , "D. Kodaikanal");
	kbc[46].result = 'A';

	strcpy(kbc[47].question , "  Which Indian city manufactured balls for the World Cup Football?");
	strcpy(kbc[47].optionA , "A. Ludhiana");
	strcpy(kbc[47].optionB , "B. Mumbai");
	strcpy(kbc[47].optionC , "C. Jalandhar");
	strcpy(kbc[47].optionD , "D. Chennai");
	kbc[47].result = 'C';

	strcpy(kbc[48].question , "  Who was the 1st ODI captain for India??");
	strcpy(kbc[48].optionA , "A. Ajit Wadekar");
	strcpy(kbc[48].optionB , "B. Bishen Singh Bedi");
	strcpy(kbc[48].optionC , "C. Nawab Pataudi");
	strcpy(kbc[48].optionD , "D. Vinoo Mankad");
	kbc[48].result = 'A';

	strcpy(kbc[49].question , "  India won the World Championship of Cricket defeating Pakistan in the final by 8 wickets.Who was the man of tournament??");
	strcpy(kbc[49].optionA , "A. K Srikaant");
	strcpy(kbc[49].optionB , "B. Sunil Gavaskar");
	strcpy(kbc[49].optionC , "C. Ravi Shastri");
	strcpy(kbc[49].optionD , "D. Kapil Dev");
	kbc[49].result = 'C';

	strcpy(kbc[50].question , "  Harihara and Bukka laid the foundation of:");
	strcpy(kbc[50].optionA , "A. Hoysala Empire");
	strcpy(kbc[50].optionB , "B. Kakatiya Empire");
	strcpy(kbc[50].optionC , "C. Vijayanagar Empire");
	strcpy(kbc[50].optionD , "D. Yadava Kingdom");
	kbc[50].result = 'C';

	strcpy(kbc[51].question , "  Ustad Isa was the Architect of:");
	strcpy(kbc[51].optionA , "A. Pearl Mosque");
	strcpy(kbc[51].optionB , "B. Jamma Masjid");
	strcpy(kbc[51].optionC , "C. Red Fort");
	strcpy(kbc[51].optionD , "D. Taj Mahal");
	kbc[51].result = 'D';

	strcpy(kbc[52].question , "  The nickname of Glenn McGrath is what?");
	strcpy(kbc[52].optionA , "A. Ooh Ahh");
	strcpy(kbc[52].optionB , "B. Penguin");
	strcpy(kbc[52].optionC , "C. Big Bird");
	strcpy(kbc[52].optionD , "D. Pegion");
	kbc[52].result = 'D';

	strcpy(kbc[53].question , "  'Dizzy' is the nickname of what Australian player?");
	strcpy(kbc[53].optionA , "A. Adam Gilchrist");
	strcpy(kbc[53].optionB , "B. Jason Gillespie");
	strcpy(kbc[53].optionC , "C. Glenn McGrath");
	strcpy(kbc[53].optionD , "D. Brett Lee");
	kbc[53].result = '2';

	strcpy(kbc[54].question , "  Former Australian captain Allan Border was sometimes known as Captain Grumpy. What was his other nickname?");
	strcpy(kbc[54].optionA , "A. Abe");
	strcpy(kbc[54].optionB , "B. Captain Junior");
	strcpy(kbc[54].optionC , "C. AB");
	strcpy(kbc[54].optionD , "D. Groucho");
	kbc[54].result = 'C';

	strcpy(kbc[55].question , "What was the world's first clone animal ?");
	strcpy(kbc[55].optionA , "Chimpanzee");
	strcpy(kbc[55].optionB , "Sheep");
	strcpy(kbc[55].optionC , "Rabbit");
	strcpy(kbc[55].optionD , "Goat");
	kbc[55].result = 'B';

	strcpy(kbc[56].question," In a certain code BOARD is written as 53169 and NEAR is written as 2416. How is NODE written in that code");
	strcpy(kbc[56].optionA , "A. 2394");
	strcpy(kbc[56].optionB , "B. 2894");
	strcpy(kbc[56].optionC , "C. 2934");
	strcpy(kbc[56].optionD , "D. None of these");
	kbc[56].result = 'A';

	strcpy(kbc[57].question,"Telegraph code was invented by ");
	strcpy(kbc[57].optionA , "Bardeen & Brattain");
	strcpy(kbc[57].optionB , "Mitterhofer");
	strcpy(kbc[57].optionC , "Bartholomew Manfredi");
	strcpy(kbc[57].optionD , "Samuel Morse");
	kbc[57].result = 'D';

	strcpy(kbc[58].question , "The volcanic region 'Ring of Fire' surrounds ?");
	strcpy(kbc[58].optionA , "Arabian Sea");
	strcpy(kbc[58].optionB , "Indian Ocean");
	strcpy(kbc[58].optionC , "Pacific Ocean");
	strcpy(kbc[58].optionD , "Atlantic Ocean");
	kbc[58].result = 'C';

	strcpy(kbc[59].question , "Who declares on first page of Constitution ?");
	strcpy(kbc[59].optionA , "People of India");
	strcpy(kbc[59].optionB , "President");
	strcpy(kbc[59].optionC , "Prime Minister");
	strcpy(kbc[59].optionD , "Mahatma Gandhi");
	kbc[59].result = 'A';
}


//------------------------- FUNCTION FIRSTSCREEN ---------------------------


void firstScreen()
{
	int i , j;
	clrscr();
	textbackground(BLACK);
	textcolor(BLUE);
	_setcursortype(_NOCURSOR);
	textcolor(MAGENTA + BLINK);
	gotoxy(1,1);
	cprintf("ษอออออออออออออออออออออออออออออออป");
	gotoxy(1,2);
	cprintf("บ                               บ");
	gotoxy(1,3);
	cprintf("บ  K  K   AAAA   U    U  N   N  บ");
	gotoxy(1,4);
	cprintf("บ  K K   A    A  U    U  NN  N  บ");
	gotoxy(1,5);
	cprintf("บ  KK    A    A  U    U  N N N  บ");
	gotoxy(1,6);
	cprintf("บ  K K   AAAAAA  U    U  N  NN  บ");
	gotoxy(1,7);
	cprintf("บ  K  K  A    A   UUUU   N   N  บ");
	textcolor(BROWN + BLINK);
	gotoxy(1,8);
	cprintf("ษอออออออออออออออออออออออออออออออออออออออออป");
	gotoxy(1,9);
	cprintf("บ                                         บ");
	gotoxy(1,10);
	cprintf("บ  BBBB   AAA   N  N  EEEE  GGGGG   AAA   บ");
	gotoxy(1,11);
	cprintf("บ  B  B  A   A  NN N  E     G      A   A  บ");
	gotoxy(1,12);
	cprintf("บ  BBBB  AAAAA  N NN  EEEE  G GGG  AAAAA  บ");
	gotoxy(1,13);
	cprintf("บ  B  B  A   A  N  N  E     G   G  A   A  บ");
	gotoxy(1,14);
	cprintf("บ  BBBB  A   A  N  N  EEEE  GGGGG  A   A  บ");
	textcolor(RED + BLINK);
	gotoxy(1,15);
	cprintf("ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
	gotoxy(1,16);
	cprintf("บ                                                               บ");
	gotoxy(1,17);
	cprintf("บ  CCCC  RRRR  OOOO  RRRR  OOOO  EEEE  PPPP   AAA  TTTTT IIIII  บ");
	gotoxy(1,18);
	cprintf("บ  C     R  R  O  O  R  R  O  O  E     P  P  A   A   T     I    บ");
	gotoxy(1,19);
	cprintf("บ  C     RRRR  O  O  RRRR  O  O  EEEE  PPPP  AAAAA   T     I    บ");
	gotoxy(1,20);
	cprintf("บ  C     R R   O  O  R R   O  O  E     P     A   A   T     I    บ");
	gotoxy(1,21);
	cprintf("บ  CCCC  R  R  OOOO  R  R  OOOO  EEEE  P     A   A   T   IIIII  บ");
	gotoxy(1,22);
	cprintf("บ                                                               บ");
	gotoxy(1,23);
	cprintf("ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ");
	gotoxy(1,25);
	printf( "LOADING........");
	gotoxy(1,26);
	printf( "ษออออออออออป");
	gotoxy(1,28);
	printf( "ศออออออออออผ");
	gotoxy(1,27);
	printf( "บ");
	gotoxy(12,27);
	printf( "บ");
	gotoxy(12,27);
	for(i = 1 , j = 10 ; i < 11 ; i++ , j += 10)
	{
		delay(1000);
		if(i < 11)
		{
			gotoxy(i+1,27);
			printf( "Û");
		}
		gotoxy(15,27);
		printf( "%d %" , j );
	}
}


//---------------------------- MENU FUNCTION --------------------------------


void menu()
{
	int choice;
	textbackground(14);
	clrscr();
	gotoxy(6,1);
	textcolor(1);
	cprintf("ษออออออออออออออออออออออออออออออออออออออออออออป");
	gotoxy(6,2);
	textcolor(1);
	cprintf("บ                                            บ");
	gotoxy(6,3);
	textcolor(2);
	cprintf("บ   M       M  Eeeeeee  N      N  U        U บ");
	gotoxy(6,4);
	textcolor(2);
	cprintf("บ   Mm     mM  E        Nn     N  U        U บ");
	gotoxy(6,5);
	textcolor(2);
	cprintf("บ   M m   m M  E        N n    N  U        U บ");
	gotoxy(6,6);
	textcolor(2);
	cprintf("บ   M  m m  M  Eeeeeee  N  n   N  U        U บ");
	gotoxy(6,7);
	textcolor(2);
	cprintf("บ   M   m   M  E        N   n  N  U        U บ");
	gotoxy(6,8);
	textcolor(2);
	cprintf("บ   M       M  E        N    n N  U        U บ");
	gotoxy(6,9);
	textcolor(2);
	cprintf("บ   M       M  Eeeeeee  N     nN   \\uuuuuu/  บ");
	gotoxy(6,10);
	textcolor(1);
	cprintf("บ                                            บ");
	gotoxy(6,11);
	textcolor(1);
	cprintf("ศออออออออออออออออออออออออออออออออออออออออออออผ");
	gotoxy(6,15);
	cprintf("ษออออออออออออออออออออออออออออออออออออออออออออป");
	gotoxy(6,16);
	cprintf("บ                                            บ");
	gotoxy(6,17);
	cprintf("บ 1.			PLAY                 บ");
	gotoxy(6,18);
	cprintf("บ                                            บ");
	gotoxy(6,19);
	cprintf("บ 2.		     INSTRUCTIONS        บ");
	gotoxy(6,20);
	cprintf("บ                                            บ");
	gotoxy(6,21);
	cprintf("บ 3.			QUIT                 บ");
	gotoxy(6,22);
	cprintf("บ                                            บ");
	gotoxy(6,23);
	cprintf("ศออออออออออออออออออออออออออออออออออออออออออออผ");
	gotoxy(6,25);
	cprintf("ENTER YOUR CHOICE : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			instructions();
		break;

		case 2:
			play();
		break;

		case 3:
			quit();
		break;

		default:
			menu();
		break;
	}
}


//------------------------------ INSTRUCTIONS ---------------------------


void instructions()
{
}


//----------------------------- PLAY ----------------------------------


void play()
{
	int number;               // QUESTION NUMBER FROM ARRAY
	int print = 0;            // WHETHER THE QUESTION SHOULD BE PRINTED OR NOT
	int keyHit;               // KEY HIT BY USER
	int response;             // RESULT OF KEY HIT BY USER
	int win;                  // TO VERIFY WHETHER THE ANSWER IS RIGHT OR WRONG
	priceList();
	do
	{
		while(print == 0)
		{
			number = selectQuestion();
			print = printQuestion(number);
		}
		keyHit = getAnswer();
		response = check(keyHit,number);
		while(response == -1)
		{
			keyHit = getAnswer();
			response = check(keyHit,number);
		}
		if(response == 0)
		{

		}
		if(response == 1)
		{
			win = winCheck(keyHit,number);
			if(win == 0)
				wrongAnswer();
			else
				rightAnswer();
		}
	}while(response != 2);        // ESC
	getch();
}
//	-----	FUNCTION FOR SELECTING A QUESTION FROM ARRAY   -----

int selectQuestion()
{
	int number;
	randomize();
	number = random(20);
	if(quesNumber > 5 && quesNumber < 11)
	{
		number += 20;
	}
	else if(quesNumber > 10 && quesNumber < 16)
	{
		number += 40;
	}
	return number;
}

//----------------------------------------------------------------



//	-----	FUNCTION FOR CHECKING WHETHER THE QUESTION IS REPEATED AND PRINTING THE QUESTION   -----

int printQuestion(int number)
{
	if(kbc[number].repeated == 0)
	{
		gotoxy(1,17);
		textcolor(MAGENTA);
		cprintf("%d.    %s",quesNumber,kbc[number].question);
		gotoxy(1,19);
		textcolor(LIGHTCYAN);
		cprintf("A%c    %s",4,kbc[number].optionA);
		gotoxy(1,20);
		cprintf("B%c    %s",4,kbc[number].optionB);
		gotoxy(1,21);
		cprintf("C%c    %s",4,kbc[number].optionC);
		gotoxy(1,22);
		cprintf("D%c    %s",4,kbc[number].optionD);
		kbc[number].repeated = 1;
		gotoxy(61,16 - quesNumber);
		textcolor(BROWN);
		cprintf("%s",price[quesNumber - 1]);
		return 1;
	}
	else
	{
		return 0;
	}
}



/*----------------------- FUNCTION GETKEY ------------------------------*/


int getAnswer()
{
	union REGS i,o;
	while(!kbhit());
	i.h.ah = 0;
	int86(22,&i,&o);
	return (o.h.ah);
}


//--------------------------- PRICELIST --------------------------------
void priceList()
{

	int i;
	clrscr();
	for(i = 0 ; i < 15 ; i++)
	{
		if(i == 4 || i == 9)
		{
			textcolor(WHITE);
		}
		else
		{
			textcolor(BROWN);
		}
		gotoxy(61,15 - i);
		cprintf("%s",price[i]);
	}
}
//----------------------------- QUIT FUNCTION ------------------------------


void quit()
{
	exit(0);
}


//----------------------------- MAIN FUNCTION ------------------------------


void main()
{
	firstScreen();
	delay(1000);
	menu();
	getch();
}

/*gotoxy(1,1);
cprintf("ษอออออออออออออออออออออออออออออออป");
gotoxy(1,2);
cprintf("บ                               บ");
gotoxy(1,3);
cprintf("บ  K  K   AAAA   U    U  N   N  บ");
gotoxy(1,4);
cprintf("บ  K K   A    A  U    U  NN  N  บ");
gotoxy(1,5);
cprintf("บ  KK    A    A  U    U  N N N  บ");
gotoxy(1,6);
cprintf("บ  K K   AAAAAA  U    U  N  NN  บ");
gotoxy(1,7);
cprintf("บ  K  K  A    A   UUUU   N   N  บ");
gotoxy(1,8);
cprintf("ษอออออออออออออออออออออออออออออออออออออออออป");
gotoxy(1,9);
cprintf("บ                                         บ");
gotoxy(1,10);
cprintf("บ  BBBB   AAA   N  N  EEEE  GGGGG   AAA   บ");
gotoxy(1,11);
cprintf("บ  B  B  A   A  NN N  E     G      A   A  บ");
gotoxy(1,12);
cprintf("บ  BBBB  AAAAA  N NN  EEEE  G GGG  AAAAA  บ");
gotoxy(1,13);
cprintf("บ  B  B  A   A  N  N  E     G   G  A   A  บ");
gotoxy(1,14);
cprintf("บ  BBBB  A   A  N  N  EEEE  GGGGG  A   A  บ");
gotoxy(1,15);
cprintf("ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
gotoxy(1,16);
cprintf("บ                                                               บ");
gotoxy(1,17);
cprintf("บ  CCCC  RRRR  OOOO  RRRR  OOOO  EEEE  PPPP   AAA  TTTTT IIIII  บ");
gotoxy(1,18);
cprintf("บ  C     R  R  O  O  R  R  O  O  E     P  P  A   A   T     I    บ");
gotoxy(1,19);
cprintf("บ  C     RRRR  O  O  RRRR  O  O  EEEE  PPPP  AAAAA   T     I    บ");
gotoxy(1,20);
cprintf("บ  C     R R   O  O  R R   O  O  E     P     A   A   T     I    บ");
gotoxy(1,21);
cprintf("บ  CCCC  R  R  OOOO  R  R  OOOO  EEEE  P     A   A   T   IIIII  บ");
gotoxy(1,22);
cprintf("บ                                                               บ");
gotoxy(1,23);
cprintf("ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ");*/
int winCheck(int keyHit,int number)
{

return 1;
}
void wrongAnswer(){
}
void rightAnswer(){
}


