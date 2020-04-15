#include "FindPermutation.hpp"

int FindPermutation(const std::string& text, const std::string& str) {
  std::unordered_map<char, size_t> ourMap;
  for (const char ch : str) {
    auto it = ourMap.find(ch);
    if (it == ourMap.end()) {
      ourMap[ch] = 1;
    }
    else {
      it->second++;
    }
  } // for

  size_t pos = 0;
  size_t cnt = 0;

  for (size_t i = 0; i < text.size(); i++) {
    auto it = ourMap.find(text[i]);
    if (it == ourMap.end()) {
      if (pos != i) {
        while (pos < i) {
          ourMap[text[pos]]--;
          pos++;
        }
      }
      cnt = 0;    // !!!
      pos++;
      continue;
    }
    else {
      if (it->second > 0) {
        it->second--;
        cnt++;
        if (cnt == str.size()) {
          return static_cast<int>(pos);
        }
      }
      else {
        while (it->second == 0) {
          ourMap[text[pos]]++;
          cnt--;
          pos++;
        }
        it->second--;
        cnt++;
        continue;
      }
    }
  } // for
  return -1;
}