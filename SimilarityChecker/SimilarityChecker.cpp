#include <string>

using std::string;

class SimilarityChecker {
public:
	int getSimilarityScore(string str1, string str2) {
		return getLengthScore(str1, str2);
	}

protected:
	int getTotalAlpha(string str1, string str2) {
		return 40;
	}

	int getLengthScore(string str1, string str2) {
		int lLen = str1.length();
		int sLen = str2.length();

		if (lLen == sLen)
			return 60;

		if (lLen < sLen)
			std::swap(lLen, sLen);

		return (sLen * 2 - lLen) * 60 / sLen;
	}
};