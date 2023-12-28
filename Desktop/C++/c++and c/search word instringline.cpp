std::string str = "Hello, world!";
std::string word = "world";
size_t index = str.find(word);
if (index != std::string::npos) {
  std::cout << "Found " << word << " at index " << index << std::endl;
} else {
  std::cout << "Did not find " << word << std::endl;
}

