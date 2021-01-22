#include "message.h"
#include <iostream>
#include <map>
#include <vector>

MessageBook::MessageBook(){}
MessageBook::~MessageBook(){}

void MessageBook::AddMessage(int number, const std::string& message)
{
	std::map<int, std::string>::iterator it = messages_.find(number);
        if(it == messages_.end())
		messages_.insert(make_pair(number, message));
	else messages_[number] = message;
}

void MessageBook::DeleteMessage(int number)
{
	messages_.erase(number);
}

std::vector<int> MessageBook::GetNumbers()
{
	std::vector<int> numbers;
	std::map<int, std::string>::iterator it;
	for(it = messages_.begin(); it != messages_.end(); it++)
		numbers.push_back(it->first);
	return numbers;
}

const std::string& MessageBook::GetMessage(int number)
{
	std::string str;
	std::string& rstr = str;
	std::map<int, std::string>::iterator it = messages_.find(number);
	if(it != messages_.end())
		return it->second;
	else
		return rstr;
}
