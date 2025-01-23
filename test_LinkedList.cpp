#include <catch2/catch_test_macros.hpp>
#include "LinkedList.h"

TEST_CASE( "LinkedList tests", "[LinkedList]" ) {
    Node<char>* a = new Node<char>('a');
    Node<char>* b = new Node<char>('b');
    Node<char>* c = new Node<char>('c');
    Node<char>* d = new Node<char>('d');
    Node<char>* e = new Node<char>('e');
    Node<char>* f = new Node<char>('f');
    auto h = new Node<char>('h');
    auto k = new Node<char>('k');
    auto l = new Node<char>('l');

    auto head = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    //Iterate list
    std::vector<char> target = {'a', 'b', 'c', 'd', 'e', 'f'};
    REQUIRE(*getList<char>(head) == target);

    //Check list content
    REQUIRE( findList<char>(a, 'f') == 1);
    REQUIRE( findList<char>(a, 'g') == 0);
    
    //Iterate on reverse list
    REQUIRE(head->val == 'a');
    head = reverseList<char>(head);
    REQUIRE(head->val == 'f');
    head = reverseList<char>(head);

    //Add new (char) item
    addItemList<char>(head, 'g');
    REQUIRE( findList<char>(a, 'g') == 1);

    //Add new (Node) item
    addItemList<char>(head, h);
    addItemList<char>(head, k);
    addItemList<char>(head, l);
    REQUIRE(findList<char>(head, 'h') == 1);
    REQUIRE(findList<char>(head, 'k') == 1);
    REQUIRE(findList<char>(head, 'l') == 1);
}