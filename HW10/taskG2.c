#include <stdio.h>
 
const int line_width = 256;                           // объявление константы размера строки 
 
int main(void)
{
	int num;
    char * input_fn = "input.txt";                        // объявление указателя на файл input.txt
    char * output_fn = "output.txt";                      // объявление указателя на файл input.txt
    char line[line_width];                                // объявление массива символов размером 256

    FILE *fp;                                             // насколько понял создание указателя на файл


    if((fp = fopen(input_fn, "r")) == NULL)               // условие: если при открытии файла input на чтение выдается NULL - проверка 
    {
		perror("Error occured while opening input file!"); // напечатать ошибку
        return 1;                                    
    }
    
    fscanf(fp, "%d", &num);
    fclose(fp);	
    


     //~ int count = 0;                                       
     //~ while(((c = getc(fp)) != EOF) && (c != '\n'))          // цикл продолжается если символы из файла считываются не доходя до конца файла И считанный символ НЕ перенос строки
        //~ line[count++] = c;                             // запись в массив считанных с файла символов
    //~ line[count] = '\0';                                // добавление в конец строки символа окончания строки.
  
  char letter = 'A';
  char digit = '2';
  
  for (int i = 0; i < num; i++)
  {
	  if(i % 2 == 0)
	  {
		  line[i] = letter;
		  letter++;
      }
      else
	  {
		  line[i] = digit;
		  digit+=2;
		  if (digit > '8')
		  {
			  digit = '2';
		  }

	  } 
  }
  line[num] = '\0';
    


  if((fp = fopen(output_fn, "w")) == NULL)               // условие с проверкой на открытие файла output на запись 
  {
	perror("Error occured while opening output file!");
    return 1;
  } 	



  fprintf(fp, "%s" ,line);

  
  fclose(fp);



//~ for (int i = 0; i < 3; i++)                            // цикл с 3 итерациями
//~ {
	//~ if (i)                                             // условие если i не 0 
    //~ fprintf(fp, ", ");  	                           // печать в файл запятой с пропуском
    //~ fprintf(fp, "%s", line);                           // печать массива символов line
//~ }  
    //~ fprintf(fp, " %d", count);                         // печать в файл пропуск и значение счетчика
    //~ fclose(fp); 	                                   // закрытие файла
    return 0;
}

