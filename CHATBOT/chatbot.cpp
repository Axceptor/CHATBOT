#include <iostream>
#include <string>
#include "chatbot.h"

void main()
{
	// STRINGS
	string sentence;
	string Question[8];
	// QUESTIONS
	Question[0] = "What is your name? ";
	Question[1] = "How are you? ";
	Question[2] = "Where would you like your package to be delivered? ";
	Question[3] = "When would you like your package to be delivered? ";
	Question[4] = "Tell me a funny joke ";
	Question[5] = "Do you program? ";
	Question[6] = "What is your nationality? ";
	Question[7] = "Is your package dangerous? ";

	string answer[8] = {

	"My name is Petricia.",
	"I'm doing great! Thanks for asking.",
	"I would like my package to be delivered in New York.",
	"Probably at 10 or 11 AM.",
	"You should probably be a Janitor.",
	"Yes! I love to program in my free time.",
	"I am from the United States of America.",
	"Yes, because Technoblade has his diamond sword in it. See you in weeks time!"

	};

	do
	{
		cout << "Enter the sentence:" << endl;
		getline(cin, sentence)
		if (sentence.find("how") != string::npos || sentence.find("what") != string::npos || sentence.find("do") != string::npos)
		{
			cout << "Answer your question is =====>>> ";
		}

		int sentencelen = sentence.size();
		if (sentencelen > 25)
		{
			cout << "Your asking a lengthy question" << endl;
		}
	}
}
