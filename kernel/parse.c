// Text parsing for JOS 
// testing code
// --- Jacob Mealey --- 

#include "parse.h"

int buff_array_pos = 0;

<<<<<<< HEAD
void addToBuff(char buff[20][20], char character)
{
	if(character == ' '){
		pushToArray(buff, text_buffer);
		clearBuff(buff);
	} else if (character == '\n'){
		pushToArray(buff, text_buffer);
		printTextBuff(buff);
		clearLineBuff(buff);
		buff_array_pos = 0;
	} else {
		if(character== '\b'){
			removeChar(buff.text_buffer, buff.text_buffer);
			return;
		}
		concatChar(buff.text_buffer, character, buff.text_buffer);
	}
}

void pushToArray(char buff[20][20], char* buffer)
{
	for (int i = 0; i < 20; i++)
		buff[buff_array_pos][i] = buffer[i];
	buff_array_pos++;
}
void printTextBuff(char buff[20][20])
{
	println("");
	for(int i = 0; i < 20; i++){
		printInt(i, normal);
		printf(". ", normal);
		printf(buff.buff_array[i], normal);
		printf("\n", normal);
	}
}

void clearBuff(char buff[20][20])
{
	for(int i = 0; i <= 100 ; i++)
		removeChar(buff.text_buffer, buff.text_buffer);
}

void clearLineBuff(char buff[20][20])
{
	clearBuff(buff);
	for(int i = 0; i < 20; i++)
	{
		for(int j = 0; j < 50; j++)
			removeChar(buff.buff_array[i], buff.buff_array[i]);
	}
}
