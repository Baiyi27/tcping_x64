//
// Created by admin on 2023/11/5.
//

#ifndef _BASE64ENCODE_HH_
#define _BASE64ENCODE_HH_

// #include <cstring>
// #include <string>
#include <iostream>
#include <cstdint>
#include <bitset>

class Base64Encode {
private:
	const std::string Base64Tab_ =
			"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
			"abcdefghijklmnopqrstuvwxyz"
			"0123456789+/";

	std::string Message_;
	// const char *cMessage_;

public:
	Base64Encode() = default;

	explicit Base64Encode(const std::string &src): Message_(src) { }

	explicit Base64Encode(const char *cstring): Message_(cstring) { }

	static bool IsBase64(uint8_t chars);

	const char *Encode(const char *src);

	std::string &Encode(std::string &src);
};

#endif //_BASE64ENCODE_HH_
