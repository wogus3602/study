#include <string>
#include <vector>
#include <cstring>
using namespace std;

struct Trie
{
    Trie *next[10];
    bool term;
    Trie() : term(false)
    {
        memset(next, 0, sizeof(next));
    }
    ~Trie()
    {
        for (int i = 0; i < 10; i++)
        {
            if (next[i])
                delete next[i];
        }
    }
    void insert(const char *key)
    {
        if (*key == '\0')
            term = true;
        else
        {
            int curr = *key - '0';
            if (next[curr] == NULL)
                next[curr] = new Trie();
            next[curr]->insert(key + 1);
        }
    }
    bool find(const char *key)
    {
        if (*key == '\0')
            return 0;
        if (term)
            return 1;
        int curr = *key - '0';
        return next[curr]->find(key + 1);
    }
};

bool solution(vector<string> phone_book)
{
    bool answer = true;
    Trie *root = new Trie;

    for (auto x : phone_book)
    {
        char *writable = new char[x.size() + 1];
        copy(x.begin(), x.end(), writable);
        writable[x.size()] = '\0';
        root->insert(writable);
    }

    int size = phone_book.size();

    for (auto x : phone_book)
    {
        char *writable = new char[x.size() + 1];
        copy(x.begin(), x.end(), writable);
        writable[x.size()] = '\0';
        if (root->find(writable) != NULL)
        {
            return false;
        }
    }

    return true;
}