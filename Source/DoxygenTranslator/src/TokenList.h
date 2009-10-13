#ifndef TOKENLIST_H_
#define TOKENLIST_H_
#include <cstdlib>
#include <iostream>
#include <string>
#include <list>
#include "Token.h"

/* a small class used to represent the sequence of tokens
 * that can be derived from a formatted doxygen string
 */

class TokenList {
private:
  std::list < Token > m_tokenList;
  std::list < Token >::iterator m_tokenListIter;

public:
  TokenList(const std::string & doxygenString);	/* constructor takes a blob of Doxygen comment */
  ~TokenList();

  Token peek();			/* returns next token without advancing */
  Token next();			/* returns next token and advances */

  std::list < Token >::iterator end();	/* returns an end iterator */
  std::list < Token >::iterator current();	/* returns the current iterator */

  std::list < Token >::iterator iteratorCopy();	/* returns a copy of the current iterator */
  void setIterator(list < Token >::iterator newPosition);	/*moves up the iterator */

  void printList();		/* prints out the sequence of tokens */
};

#endif
