//
// Created by admin on 2023/11/5.
//

#include "Base64Encode.hh"

#include <deque>
#include <functional>

bool Base64Encode::IsBase64(const uint8_t chars) { return std::isalnum(chars) || chars == '+' || chars == '/'; }

const char *Base64Encode::Encode(const char *src)
{
	std::string temp(src);
	return this->Encode(temp).c_str();
}

std::string &Base64Encode::Encode(std::string &src)
{
	Message_ = src;

	std::cout << Message_ << std::endl;
	std::string tempStr;
	for(const auto &ch: Message_) {
		// std::printf("%d ", ch);
		tempStr += std::bitset<8>(ch).to_string();
	}

	std::cout << "size: " << tempStr.size() << std::endl;

	// while(tempStr.size() % 6) { tempStr += '0'; }
	tempStr.append(6 - tempStr.size() % 6, '0');
	std::cout << tempStr << std::endl;

	std::deque<int> subStrToint;

	for(int i = 0, len = tempStr.size(); len; i += 6, len -= 6) {
		std::bitset<6> bitToint(tempStr.substr(i, 6));
		subStrToint.emplace_back(bitToint.to_ulong());
	}
	Message_.clear();

	for(const auto &vec: subStrToint) {
		// std::cout << vec << std::endl;
		Message_ += Base64Tab_[vec];
	}
	// while(src.size() % 3) { Message_ += '='; }

	Message_.append(3 - src.size() % 3, '=');

	// std::cout<< Message_<<std::endl;

	return Message_;
}



































