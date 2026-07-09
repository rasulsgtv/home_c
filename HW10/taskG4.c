#include <stdio.h>
 
const int word_width = 101;                           // объявление константы размера строки 
 
int main(void)
{
char * input_fn = "input.txt";                        // объявление указателя на файл input.txt
char * output_fn = "output.txt";                      // объявление указателя на файл input.txt
char word1[word_width];                                // объявление массива символов размером 256
char word2[word_width]; 
char c;                                               // создание переменной char


int letter_count1[26] = {0};
int letter_count2[26] = {0};

FILE *fp;                                             // насколько понял создание указателя на файл


if((fp = fopen(input_fn, "r")) == NULL)               // условие: если при открытии файла input на чтение выдается NULL - проверка 
{
   perror("Error occured while opening input file!"); // напечатать ошибку
   return 1;                                    
}
	
    
int count = 0;
while ((c = getc(fp)) != ' ')
{
	word1[count++] = c;
}
	word1[count] = '\0';

count = 0;                                       
while(((c = getc(fp)) != EOF) && (c != '\n'))          // цикл продолжается если символы из файла считываются не доходя до конца файла И считанный символ НЕ перенос строки
{
	word2[count++] = c;
}                           
    word2[count] = '\0';                                // добавление в конец строки символа окончания строки.
  	
    fclose(fp);	
 
 
for (int i = 0; word1[i] != '\0'; i++)
{
	letter_count1[word1[i] - 'a']++;
}   

for (int i = 0; word2[i] != '\0'; i++)
{
	letter_count2[word2[i] - 'a']++;
} 
    
if((fp = fopen(output_fn, "w")) == NULL)               // условие с проверкой на открытие файла output на запись 
{
	perror("Error occured while opening output file!");
    return 1;
} 	

for (int i = 0; i <= 25; i++)
{
	if (letter_count1[i] == 1 && letter_count2[i] == 1)
	{
		fprintf(fp, "%c ", 'a' + i);
	}
}
    fclose(fp); 	                                   // закрытие файла
    return 0;
}

