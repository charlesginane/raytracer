#include "list-to-word.hh"

std::vector<std::string> sentence_to_list(std::string sentence)
{
    std::string word = "";
    char c = sentence.at(0);
    std::vector<std::string> vector_of_word;
    for (size_t i = 1; i < sentence.size(); ++i)
    {
        if (c == ' ')
        {
            vector_of_word.push_back(word);
            word = "";
        }
        else
            word += c;
        c = sentence.at(i);
    }
    if (c != '\n')
        word += c;
    if (word.size() != 0)
        vector_of_word.push_back(word);
    return vector_of_word;
}
