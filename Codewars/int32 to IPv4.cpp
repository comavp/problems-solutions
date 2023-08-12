/*
int32 to IPv4
https://www.codewars.com/kata/52e88b39ffb6ac53a400022e
*/

std::string uint32_to_ip(uint32_t ip) {
  std::string res = "";
	std::vector<std::string> arr;
	unsigned int octetSize = 8;
	int ipSize = 4;
	for (int i = 0; i < ipSize; i++) {
		int octet = ip & 255;
		ip >>= octetSize;
		std::string tmpRes = "";
		while (octet > 0) {
			tmpRes += '0' + octet % 10;
			octet /= 10;
		}
		if (tmpRes.length() > 0)
			reverse(tmpRes.begin(), tmpRes.end());
		else
			tmpRes = "0";
		arr.push_back(tmpRes);
	}
	reverse(arr.begin(), arr.end());
	for (int i = 0; i < arr.size(); i++) {
		res += arr[i];
		if (i != arr.size() - 1) res += ".";
	}
	return res;
}